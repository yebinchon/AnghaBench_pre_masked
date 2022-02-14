
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; int data; int closure; } ;
struct TYPE_8__ {int release; } ;
struct TYPE_6__ {int transaction; TYPE_4__ resource; } ;
struct outbound_transaction_event {TYPE_3__ response; TYPE_2__ r; struct client* client; } ;
struct fw_cdev_send_request {int length; int offset; int generation; int tcode; scalar_t__ data; int closure; } ;
struct client {TYPE_1__* device; } ;
struct TYPE_5__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct client*,TYPE_4__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int *,int ,int,int ,int,int ,int ,int,int ,struct outbound_transaction_event*) ;
 int FUNC_3 (struct outbound_transaction_event*) ;
 struct outbound_transaction_event* FUNC_4 (int,int ) ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct client *VAR_9,
   struct fw_cdev_send_request *VAR_10,
   int VAR_11, int VAR_12)
{
 struct outbound_transaction_event *VAR_13;
 int VAR_14;

 if (VAR_10->tcode != VAR_5 &&
     (VAR_10->length > 4096 || VAR_10->length > 512 << VAR_12))
  return -VAR_2;

 if (VAR_10->tcode == VAR_6 &&
     VAR_10->length < 4)
  return -VAR_1;

 VAR_13 = FUNC_4(sizeof(*VAR_13) + VAR_10->length, VAR_4);
 if (VAR_13 == ((void*)0))
  return -VAR_3;

 VAR_13->client = VAR_9;
 VAR_13->response.length = VAR_10->length;
 VAR_13->response.closure = VAR_10->closure;

 if (VAR_10->data &&
     FUNC_1(VAR_13->response.data,
      FUNC_5(VAR_10->data), VAR_10->length)) {
  VAR_14 = -VAR_0;
  goto failed;
 }

 VAR_13->r.resource.release = VAR_8;
 VAR_14 = FUNC_0(VAR_9, &VAR_13->r.resource, VAR_4);
 if (VAR_14 < 0)
  goto failed;

 FUNC_2(VAR_9->device->card, &VAR_13->r.transaction,
   VAR_10->tcode, VAR_11, VAR_10->generation,
   VAR_12, VAR_10->offset, VAR_13->response.data,
   VAR_10->length, VAR_7, VAR_13);
 return 0;

 failed:
 FUNC_3(VAR_13);

 return VAR_14;
}

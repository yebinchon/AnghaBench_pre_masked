
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int timeout; int q; int rq_flags; } ;
struct pktcdvd_device {TYPE_2__* bdev; } ;
struct packet_command {scalar_t__ data_direction; scalar_t__ quiet; int * cmd; int buflen; int buffer; } ;
struct TYPE_4__ {int bd_disk; } ;
struct TYPE_3__ {scalar_t__ result; int cmd; int cmd_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct request_queue* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,struct request*,int ) ;
 struct request* FUNC_5 (struct request_queue*,int ,int ) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request_queue*,struct request*,int ,int ,int ) ;
 int FUNC_8 (int ,int *,int ) ;
 TYPE_1__* FUNC_9 (struct request*) ;

__attribute__((used)) static int FUNC_10(struct pktcdvd_device *VAR_8, struct packet_command *VAR_9)
{
 struct request_queue *VAR_10 = FUNC_3(VAR_8->bdev);
 struct request *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_5(VAR_10, (VAR_9->data_direction == VAR_1) ?
        VAR_6 : VAR_5, 0);
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 if (VAR_9->buflen) {
  VAR_12 = FUNC_7(VAR_10, VAR_11, VAR_9->buffer, VAR_9->buflen,
          VAR_3);
  if (VAR_12)
   goto out;
 }

 FUNC_9(VAR_11)->cmd_len = FUNC_0(VAR_9->cmd[0]);
 FUNC_8(FUNC_9(VAR_11)->cmd, VAR_9->cmd, VAR_0);

 VAR_11->timeout = 60*VAR_4;
 if (VAR_9->quiet)
  VAR_11->rq_flags |= VAR_7;

 FUNC_4(VAR_11->q, VAR_8->bdev->bd_disk, VAR_11, 0);
 if (FUNC_9(VAR_11)->result)
  VAR_12 = -VAR_2;
out:
 FUNC_6(VAR_11);
 return VAR_12;
}

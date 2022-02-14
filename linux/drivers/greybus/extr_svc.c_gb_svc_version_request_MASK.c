
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_svc_version_response {scalar_t__ major; int minor; } ;
struct gb_svc_version_request {scalar_t__ major; int minor; } ;
struct gb_svc {scalar_t__ protocol_major; int protocol_minor; int dev; } ;
struct gb_operation {TYPE_2__* response; TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_4__ {struct gb_svc_version_response* payload; } ;
struct TYPE_3__ {int payload_size; struct gb_svc_version_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 struct gb_svc* FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_operation*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct gb_operation *VAR_5)
{
 struct gb_connection *VAR_6 = VAR_5->connection;
 struct gb_svc *VAR_7 = FUNC_2(VAR_6);
 struct gb_svc_version_request *VAR_8;
 struct gb_svc_version_response *VAR_9;

 if (VAR_5->request->payload_size < sizeof(*VAR_8)) {
  FUNC_0(&VAR_7->dev, "short version request (%zu < %zu)\n",
   VAR_5->request->payload_size,
   sizeof(*VAR_8));
  return -VAR_0;
 }

 VAR_8 = VAR_5->request->payload;

 if (VAR_8->major > VAR_3) {
  FUNC_1(&VAR_7->dev, "unsupported major version (%u > %u)\n",
    VAR_8->major, VAR_3);
  return -VAR_2;
 }

 VAR_7->protocol_major = VAR_8->major;
 VAR_7->protocol_minor = VAR_8->minor;

 if (!FUNC_3(VAR_5, sizeof(*VAR_9), VAR_4))
  return -VAR_1;

 VAR_9 = VAR_5->response->payload;
 VAR_9->major = VAR_7->protocol_major;
 VAR_9->minor = VAR_7->protocol_minor;

 return 0;
}

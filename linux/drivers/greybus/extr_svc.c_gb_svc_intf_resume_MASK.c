
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_svc_intf_resume_response {int status; } ;
struct gb_svc_intf_resume_request {int intf_id; } ;
struct gb_svc {int dev; int connection; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,int ,struct gb_svc_intf_resume_request*,int,struct gb_svc_intf_resume_response*,int,int ) ;

int FUNC_2(struct gb_svc *VAR_4, u8 VAR_5)
{
 struct gb_svc_intf_resume_request VAR_6;
 struct gb_svc_intf_resume_response VAR_7;
 int VAR_8;

 VAR_6.intf_id = VAR_5;

 VAR_8 = FUNC_1(VAR_4->connection,
     VAR_2,
     &VAR_6, sizeof(VAR_6),
     &VAR_7, sizeof(VAR_7),
     VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->dev, "failed to send interface resume %u: %d\n",
   VAR_5, VAR_8);
  return VAR_8;
 }

 if (VAR_7.status != VAR_1) {
  FUNC_0(&VAR_4->dev, "failed to resume interface %u: %u\n",
   VAR_5, VAR_7.status);
  return -VAR_0;
 }

 return 0;
}

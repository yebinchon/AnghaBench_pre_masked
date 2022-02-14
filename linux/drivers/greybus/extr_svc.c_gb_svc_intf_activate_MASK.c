
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_svc_intf_activate_response {scalar_t__ status; int intf_type; } ;
struct gb_svc_intf_activate_request {int intf_id; } ;
struct gb_svc {int dev; int connection; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,struct gb_svc_intf_activate_request*,int,struct gb_svc_intf_activate_response*,int,int ) ;

int FUNC_2(struct gb_svc *VAR_4, u8 VAR_5, u8 *VAR_6)
{
 struct gb_svc_intf_activate_request VAR_7;
 struct gb_svc_intf_activate_response VAR_8;
 int VAR_9;

 VAR_7.intf_id = VAR_5;

 VAR_9 = FUNC_1(VAR_4->connection,
     VAR_2,
     &VAR_7, sizeof(VAR_7),
     &VAR_8, sizeof(VAR_8),
     VAR_3);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_8.status != VAR_1) {
  FUNC_0(&VAR_4->dev, "failed to activate interface %u: %u\n",
   VAR_5, VAR_8.status);
  return -VAR_0;
 }

 *VAR_6 = VAR_8.intf_type;

 return 0;
}

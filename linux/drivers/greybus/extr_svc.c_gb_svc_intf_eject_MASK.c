
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_svc_intf_eject_request {int intf_id; } ;
struct gb_svc {int dev; int connection; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,struct gb_svc_intf_eject_request*,int,int *,int ,int ) ;

int FUNC_2(struct gb_svc *VAR_2, u8 VAR_3)
{
 struct gb_svc_intf_eject_request VAR_4;
 int VAR_5;

 VAR_4.intf_id = VAR_3;





 VAR_5 = FUNC_1(VAR_2->connection,
     VAR_0, &VAR_4,
     sizeof(VAR_4), ((void*)0), 0,
     VAR_1);
 if (VAR_5) {
  FUNC_0(&VAR_2->dev, "failed to eject interface %u\n", VAR_3);
  return VAR_5;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int dev; int ap_intf_id; } ;
struct gb_operation {struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 struct gb_svc* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_svc*,int ,int ,int ,int,int,int ,int ,int ,int,int,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct gb_operation *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 struct gb_svc *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;
 VAR_7 = FUNC_2(VAR_6, VAR_6->ap_intf_id,
      VAR_2,
      VAR_3,
      2, 1,
      VAR_1,
      VAR_0,
      VAR_3,
      2, 1,
      0, 0,
      ((void*)0), ((void*)0));

 if (VAR_7)
  FUNC_0(&VAR_6->dev,
    "power mode change failed on AP to switch link: %d\n",
    VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {int dummy; } ;
struct gb_control {int dev; int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 struct gb_operation* FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;

int FUNC_4(struct gb_control *VAR_4)
{
 struct gb_operation *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4->connection,
          VAR_1,
          0, 0,
          VAR_2,
          VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  FUNC_0(&VAR_4->dev, "failed to send mode switch: %d\n", VAR_6);

 FUNC_2(VAR_5);

 return VAR_6;
}

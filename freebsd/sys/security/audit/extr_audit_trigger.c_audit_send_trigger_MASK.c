
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trigger_info {unsigned int trigger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct trigger_info*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct trigger_info*,int ) ;
 int VAR_5 ;
 struct trigger_info* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;

int
FUNC_6(unsigned int VAR_7)
{
 struct trigger_info *VAR_8;

 VAR_8 = FUNC_2(sizeof *VAR_8, VAR_1, VAR_2);
 FUNC_3(&VAR_4);
 if (!VAR_3) {

  FUNC_4(&VAR_4);
  FUNC_1(VAR_8, VAR_1);
  return (VAR_0);
 }
 VAR_8->trigger = VAR_7;
 FUNC_0(&VAR_6, VAR_8, VAR_5);
 FUNC_5(&VAR_6);
 FUNC_4(&VAR_4);
 return (0);
}

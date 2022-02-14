
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fapll_data {int name; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct fapll_data *VAR_3)
{
 int VAR_4 = VAR_2;
 u32 VAR_5;

 while ((VAR_5 = FUNC_1(VAR_3->base))) {
  if (VAR_5 & VAR_1)
   return 0;

  if (VAR_4-- <= 0)
   break;

  FUNC_2(1);
 }

 FUNC_0("%s failed to lock\n", VAR_3->name);

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {int src; } ;
struct ref {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct ref*,struct ref**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ref**) ;

__attribute__((used)) static int FUNC_4(struct ref *VAR_0,
         struct refspec_item *VAR_1,
         struct ref **VAR_2,
         int *VAR_3)
{
 switch (FUNC_1(VAR_1->src, VAR_0, VAR_2)) {
 case 1:
  if (VAR_3)
   *VAR_3 = 0;
  return 0;
 case 0:




  if (FUNC_3(VAR_1->src, VAR_2) < 0)
   return FUNC_2(FUNC_0("src refspec %s does not match any"), VAR_1->src);
  if (VAR_3)
   *VAR_3 = 1;
  return 0;
 default:
  return FUNC_2(FUNC_0("src refspec %s matches more than one"), VAR_1->src);
 }
}

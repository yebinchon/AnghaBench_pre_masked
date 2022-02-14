
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elan_tp_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct elan_tp_data*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct elan_tp_data *VAR_1)
{
 int VAR_2 = VAR_0;
 int VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_1);
  if (!VAR_3)
   return 0;

  FUNC_1(30);
 } while (--VAR_2 > 0);

 return VAR_3;
}

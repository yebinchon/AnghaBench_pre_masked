
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int) ;
 int* VAR_2 ;
 struct device_node* FUNC_4 (unsigned long,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_3)
{
 int VAR_4 = VAR_0;
 struct device_node *VAR_5;






 if ((VAR_4 = VAR_2[VAR_3]) >= 0) {
  FUNC_2(VAR_3, VAR_4);
  return VAR_4;
 }

 VAR_5 = FUNC_4(VAR_3, ((void*)0));

 if (!VAR_5) {
  FUNC_0(1);
  if (FUNC_1(VAR_3))
   goto out_present;
  else
   goto out;
 }

 VAR_4 = FUNC_6(VAR_5);

out_present:
 if (VAR_4 < 0 || !FUNC_3(VAR_4))
  VAR_4 = VAR_1;

 FUNC_2(VAR_3, VAR_4);
 FUNC_5(VAR_5);
out:
 return VAR_4;
}

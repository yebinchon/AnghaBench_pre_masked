
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int cpumask_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int const*) ;
 int VAR_0 ;
 struct device_node* FUNC_2 (int) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct device_node *VAR_1, unsigned int VAR_2,
        const cpumask_t *VAR_3)
{
 int VAR_4;
 struct device_node *VAR_5, *VAR_6;
 bool VAR_7 = 1;
 for (VAR_4 = FUNC_1(FUNC_0(VAR_3), VAR_3);
      VAR_4 < VAR_0; VAR_4 = FUNC_1(VAR_4, VAR_3)) {
  VAR_5 = FUNC_2(VAR_4);
  VAR_6 = FUNC_4(VAR_5, "cpu-idle-states",
         VAR_2);
  if (VAR_1 != VAR_6)
   VAR_7 = 0;

  FUNC_3(VAR_6);
  FUNC_3(VAR_5);
  if (!VAR_7)
   break;
 }

 return VAR_7;
}

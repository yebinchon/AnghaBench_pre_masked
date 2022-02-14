
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_function {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct pmf_function* FUNC_0 (struct device_node*,char const*,int ) ;
 struct pmf_function* FUNC_1 (struct pmf_function*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct pmf_function *FUNC_4(struct device_node *VAR_2,
           const char *VAR_3)
{
 struct pmf_function *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1, VAR_5);
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if (VAR_4)
  VAR_4 = FUNC_1(VAR_4);
 FUNC_3(&VAR_1, VAR_5);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aem_ipmi_data {int user; } ;


 int FUNC_0 (struct aem_ipmi_data*) ;
 int FUNC_1 (struct aem_ipmi_data*) ;
 scalar_t__ FUNC_2 (struct aem_ipmi_data*,int,struct device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(int VAR_0, struct device *VAR_1)
{
 struct aem_ipmi_data VAR_2;

 if (FUNC_2(&VAR_2, VAR_0, VAR_1))
  return;


 FUNC_0(&VAR_2);
 FUNC_1(&VAR_2);

 FUNC_3(VAR_2.user);
}

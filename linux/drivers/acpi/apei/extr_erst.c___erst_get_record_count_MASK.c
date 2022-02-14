
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_exec_context {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct apei_exec_context*) ;
 int FUNC_1 (struct apei_exec_context*,int ) ;
 int FUNC_2 (struct apei_exec_context*) ;

__attribute__((used)) static ssize_t FUNC_3(void)
{
 struct apei_exec_context VAR_1;
 int VAR_2;

 FUNC_2(&VAR_1);
 VAR_2 = FUNC_1(&VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;
 return FUNC_0(&VAR_1);
}

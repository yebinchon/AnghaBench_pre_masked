
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erst_erange {void* attr; void* size; void* base; } ;
struct apei_exec_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct apei_exec_context*) ;
 int FUNC_1 (struct apei_exec_context*,int ) ;
 int FUNC_2 (struct apei_exec_context*) ;

__attribute__((used)) static int FUNC_3(struct erst_erange *VAR_3)
{
 struct apei_exec_context VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4);
 VAR_5 = FUNC_1(&VAR_4, VAR_2);
 if (VAR_5)
  return VAR_5;
 VAR_3->base = FUNC_0(&VAR_4);
 VAR_5 = FUNC_1(&VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_3->size = FUNC_0(&VAR_4);
 VAR_5 = FUNC_1(&VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;
 VAR_3->attr = FUNC_0(&VAR_4);

 return 0;
}

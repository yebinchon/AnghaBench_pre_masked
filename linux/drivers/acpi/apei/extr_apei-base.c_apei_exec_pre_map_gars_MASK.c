
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_exec_context {int entries; } ;


 int FUNC_0 (struct apei_exec_context*,int ,int *,int*) ;
 int FUNC_1 (struct apei_exec_context*) ;
 int FUNC_2 (struct apei_exec_context*,struct apei_exec_context*,int) ;
 int VAR_0 ;

int FUNC_3(struct apei_exec_context *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1, VAR_0,
          ((void*)0), &VAR_3);
 if (VAR_2) {
  struct apei_exec_context VAR_4;
  FUNC_2(&VAR_4, VAR_1, sizeof(*VAR_1));
  VAR_4.entries = VAR_3;
  FUNC_1(&VAR_4);
 }

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjail {int * queue; int * dep; int params; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cfjail*,int ) ;
 int VAR_2 ;
 struct cfjail* FUNC_3 (int) ;
 int FUNC_4 (struct cfjail*,int ,int) ;
 int VAR_3 ;

struct cfjail *
FUNC_5(void)
{
 struct cfjail *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct cfjail));
 FUNC_4(VAR_4, 0, sizeof(struct cfjail));
 FUNC_1(&VAR_4->params);
 FUNC_0(&VAR_4->dep[VAR_0]);
 FUNC_0(&VAR_4->dep[VAR_1]);
 VAR_4->queue = &VAR_2;
 FUNC_2(&VAR_2, VAR_4, VAR_3);
 return VAR_4;
}

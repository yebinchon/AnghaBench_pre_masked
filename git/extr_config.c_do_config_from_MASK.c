
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_source {int linenr; struct config_source* prev; int var; int value; scalar_t__ eof; } ;
struct config_options {int dummy; } ;
typedef int config_fn_t ;


 struct config_source* VAR_0 ;
 int FUNC_0 (int ,void*,struct config_options const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct config_source *VAR_1, config_fn_t VAR_2, void *VAR_3,
     const struct config_options *VAR_4)
{
 int VAR_5;


 VAR_1->prev = VAR_0;
 VAR_1->linenr = 1;
 VAR_1->eof = 0;
 FUNC_1(&VAR_1->value, 1024);
 FUNC_1(&VAR_1->var, 1024);
 VAR_0 = VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);


 FUNC_2(&VAR_1->value);
 FUNC_2(&VAR_1->var);
 VAR_0 = VAR_1->prev;

 return VAR_5;
}

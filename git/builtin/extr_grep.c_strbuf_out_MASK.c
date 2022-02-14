
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_item {int out; } ;
struct grep_opt {struct work_item* output_priv; } ;


 int FUNC_0 (int *,void const*,size_t) ;

__attribute__((used)) static void FUNC_1(struct grep_opt *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct work_item *VAR_3 = VAR_0->output_priv;
 FUNC_0(&VAR_3->out, VAR_1, VAR_2);
}

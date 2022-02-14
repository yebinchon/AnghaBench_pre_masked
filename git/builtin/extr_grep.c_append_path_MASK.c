
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct grep_opt {struct string_list* output_priv; } ;


 int FUNC_0 (struct string_list*,int ) ;
 int FUNC_1 (void const*,size_t) ;

__attribute__((used)) static void FUNC_2(struct grep_opt *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct string_list *VAR_3 = VAR_0->output_priv;

 if (VAR_2 == 1 && *(const char *)VAR_1 == '\0')
  return;
 FUNC_0(VAR_3, FUNC_1(VAR_1, VAR_2));
}

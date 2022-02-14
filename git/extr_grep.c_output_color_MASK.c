
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {int (* output ) (struct grep_opt*,void const*,size_t) ;int color; } ;


 char const* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct grep_opt*,char const*,int ) ;
 int FUNC_2 (struct grep_opt*,void const*,size_t) ;
 int FUNC_3 (struct grep_opt*,char const*,int ) ;
 int FUNC_4 (struct grep_opt*,void const*,size_t) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct grep_opt *VAR_1, const void *VAR_2, size_t VAR_3,
    const char *VAR_4)
{
 if (FUNC_5(VAR_1->color) && VAR_4 && VAR_4[0]) {
  VAR_1->output(VAR_1, VAR_4, FUNC_0(VAR_4));
  VAR_1->output(VAR_1, VAR_2, VAR_3);
  VAR_1->output(VAR_1, VAR_0, FUNC_0(VAR_0));
 } else
  VAR_1->output(VAR_1, VAR_2, VAR_3);
}

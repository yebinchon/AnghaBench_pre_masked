
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {scalar_t__ null_following_name; int (* output ) (struct grep_opt*,char*,int) ;int * colors; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct grep_opt*,char const*,int ,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct grep_opt*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct grep_opt *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1, VAR_2, FUNC_1(VAR_2), VAR_1->colors[VAR_0]);
 VAR_1->output(VAR_1, VAR_1->null_following_name ? "\0" : "\n", 1);
}

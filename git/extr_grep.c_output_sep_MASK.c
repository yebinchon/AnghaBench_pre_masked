
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {int * colors; int (* output ) (struct grep_opt*,char*,int) ;scalar_t__ null_following_name; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct grep_opt*,char*,int,int ) ;
 int FUNC_1 (struct grep_opt*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct grep_opt *VAR_1, char VAR_2)
{
 if (VAR_1->null_following_name)
  VAR_1->output(VAR_1, "\0", 1);
 else
  FUNC_0(VAR_1, &VAR_2, 1, VAR_1->colors[VAR_0]);
}

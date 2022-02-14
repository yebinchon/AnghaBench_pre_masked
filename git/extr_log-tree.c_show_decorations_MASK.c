
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_2__ {int file; int use_color; } ;
struct rev_info {TYPE_1__ diffopt; int show_decorations; scalar_t__ sources; } ;
struct commit {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,struct commit*,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ) ;
 char** FUNC_3 (scalar_t__,struct commit*) ;
 int FUNC_4 (struct strbuf*) ;

void FUNC_5(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;

 if (VAR_1->sources) {
  char **VAR_4 = FUNC_3(VAR_1->sources, VAR_2);

  if (VAR_4 && *VAR_4)
   FUNC_1(VAR_1->diffopt.file, "\t%s", *VAR_4);
 }
 if (!VAR_1->show_decorations)
  return;
 FUNC_0(&VAR_3, VAR_2, VAR_1->diffopt.use_color);
 FUNC_2(VAR_3.buf, VAR_1->diffopt.file);
 FUNC_4(&VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_2__ {int file; } ;
struct rev_info {TYPE_1__ diffopt; int date_mode; int commit_format; } ;
struct pretty_print_context {int date_mode; int fmt; int member_0; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pretty_print_context*,char*,struct strbuf*,char const*,int ) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, struct rev_info *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 struct pretty_print_context VAR_4 = {0};

 VAR_4.fmt = VAR_2->commit_format;
 VAR_4.date_mode = VAR_2->date_mode;
 FUNC_2(&VAR_4, "Tagger", &VAR_3, VAR_1, FUNC_1());
 FUNC_0(VAR_2->diffopt.file, "%s", VAR_3.buf);
 FUNC_3(&VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct grep_pat {int regexp; int pattern; } ;
struct grep_opt {scalar_t__ debug; scalar_t__ ignore_case; } ;
typedef int errbuf ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct grep_pat*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int,int *,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct grep_pat *VAR_3, struct grep_opt *VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 int VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_5, VAR_3->pattern);
 if (VAR_4->ignore_case)
  VAR_7 |= VAR_0;
 VAR_6 = FUNC_3(&VAR_3->regexp, VAR_5.buf, VAR_7);
 if (VAR_4->debug)
  FUNC_2(VAR_2, "fixed %s\n", VAR_5.buf);
 FUNC_5(&VAR_5);
 if (VAR_6) {
  char VAR_8[1024];
  FUNC_4(VAR_6, &VAR_3->regexp, VAR_8, sizeof(VAR_8));
  FUNC_1(VAR_3, VAR_8);
 }
}

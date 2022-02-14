
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct grep_source {int dummy; } ;
struct grep_opt {int prefix; scalar_t__ prefix_length; scalar_t__ relative; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct grep_opt*,struct grep_source*) ;
 int FUNC_1 (struct grep_opt*,struct grep_source*) ;
 int FUNC_2 (struct grep_source*) ;
 int FUNC_3 (struct grep_source*,int ,int ,char const*,char const*) ;
 int VAR_2 ;
 int FUNC_4 (char const*,int ,struct strbuf*) ;
 int FUNC_5 (struct strbuf*,char const*) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(struct grep_opt *VAR_3, const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 struct grep_source VAR_6;

 if (VAR_3->relative && VAR_3->prefix_length)
  FUNC_4(VAR_4, VAR_3->prefix, &VAR_5);
 else
  FUNC_5(&VAR_5, VAR_4);

 FUNC_3(&VAR_6, VAR_0, VAR_5.buf, VAR_4, VAR_4);
 FUNC_6(&VAR_5);

 if (VAR_2 > 1) {




  FUNC_0(VAR_3, &VAR_6);
  return 0;
 } else {
  int VAR_7;

  VAR_7 = FUNC_1(VAR_3, &VAR_6);

  FUNC_2(&VAR_6);
  return VAR_7;
 }
}

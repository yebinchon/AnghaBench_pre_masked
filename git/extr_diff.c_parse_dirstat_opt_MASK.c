
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct diff_options {int output_format; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct diff_options*,char const*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(struct diff_options *VAR_2, const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 if (FUNC_2(VAR_2, VAR_3, &VAR_4))
  FUNC_1(FUNC_0("Failed to parse --dirstat/-X option parameter:\n%s"),
      VAR_4.buf);
 FUNC_3(&VAR_4);




 VAR_2->output_format |= VAR_0;
 return 1;
}

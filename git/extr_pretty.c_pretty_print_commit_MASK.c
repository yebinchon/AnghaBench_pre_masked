
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {unsigned long len; } ;
struct pretty_print_context {int need_8bit_cte; scalar_t__ fmt; int print_email_subject; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct commit const*,int ,struct strbuf*,struct pretty_print_context*) ;
 char* FUNC_2 () ;
 char* FUNC_3 (struct commit const*,int *,char const*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct pretty_print_context*,char const*,struct commit const*,char const**,struct strbuf*) ;
 int FUNC_6 (struct pretty_print_context*,char const**,struct strbuf*,int) ;
 int FUNC_7 (struct pretty_print_context*,char const**,struct strbuf*,char const*,int) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct commit const*,char const*) ;
 int VAR_2 ;

void FUNC_12(struct pretty_print_context *VAR_3,
    const struct commit *VAR_4,
    struct strbuf *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 4;
 const char *VAR_8;
 const char *VAR_9;
 const char *VAR_10;
 int VAR_11 = VAR_3->need_8bit_cte;

 if (VAR_3->fmt == VAR_1) {
  FUNC_1(VAR_4, VAR_2, VAR_5, VAR_3);
  return;
 }

 VAR_10 = FUNC_2();
 VAR_8 = VAR_9 = FUNC_3(VAR_4, ((void*)0), VAR_10);

 if (VAR_3->fmt == VAR_0 || FUNC_0(VAR_3->fmt))
  VAR_7 = 0;





 if (FUNC_0(VAR_3->fmt) && VAR_11 == 0) {
  int VAR_12, VAR_13, VAR_14;

  for (VAR_14 = VAR_12 = 0; (VAR_13 = VAR_8[VAR_12]); VAR_12++) {
   if (!VAR_14) {




    if (VAR_13 == '\n' && VAR_8[VAR_12+1] == '\n')
     VAR_14 = 1;
   }
   else if (FUNC_4(VAR_13)) {
    VAR_11 = 1;
    break;
   }
  }
 }

 FUNC_5(VAR_3, VAR_10, VAR_4, &VAR_8, VAR_5);
 if (VAR_3->fmt != VAR_0 && !VAR_3->print_email_subject) {
  FUNC_9(VAR_5, '\n');
 }


 VAR_8 = FUNC_8(VAR_8);


 if (VAR_3->fmt == VAR_0 || FUNC_0(VAR_3->fmt))
  FUNC_7(VAR_3, &VAR_8, VAR_5, VAR_10, VAR_11);

 VAR_6 = VAR_5->len;
 if (VAR_3->fmt != VAR_0)
  FUNC_6(VAR_3, &VAR_8, VAR_5, VAR_7);
 FUNC_10(VAR_5);


 if (VAR_3->fmt != VAR_0)
  FUNC_9(VAR_5, '\n');






 if (FUNC_0(VAR_3->fmt) && VAR_5->len <= VAR_6)
  FUNC_9(VAR_5, '\n');

 FUNC_11(VAR_4, VAR_9);
}

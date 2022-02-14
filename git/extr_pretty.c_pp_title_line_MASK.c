
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {scalar_t__ len; int buf; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct pretty_print_context {TYPE_2__ in_body_headers; int fmt; scalar_t__ after_subject; scalar_t__ rev; scalar_t__ print_email_subject; scalar_t__ preserve_subject; } ;
struct TYPE_3__ {scalar_t__ string; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,int ,scalar_t__,char const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;
 char* FUNC_3 (struct strbuf*,char const*,char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct strbuf*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct strbuf*,int ,scalar_t__,int ,int,int const) ;
 int FUNC_9 (struct strbuf*,struct strbuf*) ;
 int FUNC_10 (struct strbuf*,char) ;
 int FUNC_11 (struct strbuf*,char const*,char const*) ;
 int FUNC_12 (struct strbuf*,scalar_t__) ;
 int FUNC_13 (struct strbuf*,scalar_t__) ;
 int FUNC_14 (struct strbuf*,int) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (TYPE_2__*,int ) ;

void FUNC_17(struct pretty_print_context *VAR_1,
     const char **VAR_2,
     struct strbuf *VAR_3,
     const char *VAR_4,
     int VAR_5)
{
 static const int VAR_6 = 78;
 struct strbuf VAR_7;

 FUNC_14(&VAR_7, 80);
 *VAR_2 = FUNC_3(&VAR_7, *VAR_2,
    VAR_1->preserve_subject ? "\n" : " ");

 FUNC_13(VAR_3, VAR_7.len + 1024);
 if (VAR_1->print_email_subject) {
  if (VAR_1->rev)
   FUNC_2(VAR_3, VAR_1->rev);
  if (FUNC_7(VAR_7.buf, VAR_7.len))
   FUNC_0(VAR_3, VAR_7.buf, VAR_7.len,
      VAR_4, VAR_0);
  else
   FUNC_8(VAR_3, VAR_7.buf, VAR_7.len,
      -FUNC_6(VAR_3), 1, VAR_6);
 } else {
  FUNC_9(VAR_3, &VAR_7);
 }
 FUNC_10(VAR_3, '\n');

 if (VAR_5 == 0) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1->in_body_headers.nr; VAR_8++) {
   if (FUNC_5(VAR_1->in_body_headers.items[VAR_8].string)) {
    VAR_5 = 1;
    break;
   }
  }
 }

 if (VAR_5 > 0) {
  const char *VAR_9 =
   "MIME-Version: 1.0\n"
   "Content-Type: text/plain; charset=%s\n"
   "Content-Transfer-Encoding: 8bit\n";
  FUNC_11(VAR_3, VAR_9, VAR_4);
 }
 if (VAR_1->after_subject) {
  FUNC_12(VAR_3, VAR_1->after_subject);
 }
 if (FUNC_1(VAR_1->fmt)) {
  FUNC_10(VAR_3, '\n');
 }

 if (VAR_1->in_body_headers.nr) {
  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_1->in_body_headers.nr; VAR_10++) {
   FUNC_12(VAR_3, VAR_1->in_body_headers.items[VAR_10].string);
   FUNC_4(VAR_1->in_body_headers.items[VAR_10].string);
  }
  FUNC_16(&VAR_1->in_body_headers, 0);
  FUNC_10(VAR_3, '\n');
 }

 FUNC_15(&VAR_7);
}

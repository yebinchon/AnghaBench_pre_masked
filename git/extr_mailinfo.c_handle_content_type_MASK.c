
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; int len; } ;
struct mailinfo {int input_error; struct strbuf charset; struct strbuf** content_top; struct strbuf** content; void* delsp; void* format_flowed; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*) ;
 void* FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int ,char*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (struct strbuf*,int ,char*,int) ;
 int FUNC_6 (struct strbuf*) ;
 struct strbuf* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct mailinfo *VAR_1, struct strbuf *VAR_2)
{
 struct strbuf *VAR_3 = FUNC_7(sizeof(struct strbuf));
 FUNC_4(VAR_3, VAR_2->len);

 VAR_1->format_flowed = FUNC_2(VAR_2->buf, "format=", "flowed");
 VAR_1->delsp = FUNC_2(VAR_2->buf, "delsp=", "yes");

 if (FUNC_3(VAR_2->buf, "boundary=", VAR_3)) {
  FUNC_5(VAR_3, 0, "--", 2);
  if (++VAR_1->content_top >= &VAR_1->content[VAR_0]) {
   FUNC_0("Too many boundaries to handle");
   VAR_1->input_error = -1;
   VAR_1->content_top = &VAR_1->content[VAR_0] - 1;
   return;
  }
  *(VAR_1->content_top) = VAR_3;
  VAR_3 = ((void*)0);
 }
 FUNC_3(VAR_2->buf, "charset=", &VAR_1->charset);

 if (VAR_3) {
  FUNC_6(VAR_3);
  FUNC_1(VAR_3);
 }
}

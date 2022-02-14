
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; } ;
struct mailinfo {int delsp; int format_flowed; } ;


 int FUNC_0 (struct mailinfo*,struct strbuf*) ;
 scalar_t__ FUNC_1 (char*,char*,char const**) ;
 int FUNC_2 (struct strbuf*,char*,size_t) ;
 int FUNC_3 (struct strbuf*,int ,char*,size_t) ;
 int FUNC_4 (struct strbuf*,int ,int) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct mailinfo *VAR_0, struct strbuf *VAR_1,
     struct strbuf *VAR_2)
{
 size_t VAR_3 = VAR_1->len;
 const char *VAR_4;

 if (!VAR_0->format_flowed) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }

 if (VAR_1->buf[VAR_3 - 1] == '\n') {
  VAR_3--;
  if (VAR_3 && VAR_1->buf[VAR_3 - 1] == '\r')
   VAR_3--;
 }


 if (FUNC_1(VAR_1->buf, "-- ", &VAR_4) && VAR_4 - VAR_1->buf == VAR_3) {
  if (VAR_2->len) {
   FUNC_0(VAR_0, VAR_2);
   FUNC_5(VAR_2);
  }
  FUNC_0(VAR_0, VAR_1);
  return;
 }


 if (VAR_3 && VAR_1->buf[0] == ' ') {
  FUNC_4(VAR_1, 0, 1);
  VAR_3--;
 }


 if (VAR_3 && VAR_1->buf[VAR_3 - 1] == ' ') {
  FUNC_2(VAR_2, VAR_1->buf, VAR_3 - !!VAR_0->delsp);
  return;
 }


 FUNC_3(VAR_1, 0, VAR_2->buf, VAR_2->len);
 FUNC_5(VAR_2);

 FUNC_0(VAR_0, VAR_1);
}

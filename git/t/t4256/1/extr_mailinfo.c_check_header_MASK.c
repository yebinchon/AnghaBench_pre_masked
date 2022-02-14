
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; scalar_t__ buf; } ;
struct mailinfo {int message_id; scalar_t__ add_message_id; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct strbuf const*,char*) ;
 int FUNC_1 (struct mailinfo*,struct strbuf*) ;
 int FUNC_2 (struct mailinfo*,struct strbuf*) ;
 int FUNC_3 (struct mailinfo*,struct strbuf*) ;
 int FUNC_4 (struct strbuf**,struct strbuf*) ;
 char** VAR_1 ;
 int FUNC_5 (struct strbuf*,scalar_t__,int) ;
 int FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*,int ,char*,int) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct mailinfo *VAR_2,
   const struct strbuf *VAR_3,
   struct strbuf *VAR_4[], int VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8;
 struct strbuf VAR_9 = VAR_0;


 for (VAR_6 = 0; VAR_1[VAR_6]; VAR_6++) {
  int VAR_10 = FUNC_9(VAR_1[VAR_6]);
  if ((!VAR_4[VAR_6] || VAR_5) && FUNC_0(VAR_3, VAR_1[VAR_6])) {



   FUNC_5(&VAR_9, VAR_3->buf + VAR_10 + 2, VAR_3->len - VAR_10 - 2);
   FUNC_1(VAR_2, &VAR_9);
   FUNC_4(&VAR_4[VAR_6], &VAR_9);
   VAR_7 = 1;
   goto check_header_out;
  }
 }


 if (FUNC_0(VAR_3, "Content-Type")) {
  VAR_8 = FUNC_9("Content-Type: ");
  FUNC_5(&VAR_9, VAR_3->buf + VAR_8, VAR_3->len - VAR_8);
  FUNC_1(VAR_2, &VAR_9);
  FUNC_7(&VAR_9, 0, "Content-Type: ", VAR_8);
  FUNC_3(VAR_2, &VAR_9);
  VAR_7 = 1;
  goto check_header_out;
 }
 if (FUNC_0(VAR_3, "Content-Transfer-Encoding")) {
  VAR_8 = FUNC_9("Content-Transfer-Encoding: ");
  FUNC_5(&VAR_9, VAR_3->buf + VAR_8, VAR_3->len - VAR_8);
  FUNC_1(VAR_2, &VAR_9);
  FUNC_2(VAR_2, &VAR_9);
  VAR_7 = 1;
  goto check_header_out;
 }
 if (FUNC_0(VAR_3, "Message-Id")) {
  VAR_8 = FUNC_9("Message-Id: ");
  FUNC_5(&VAR_9, VAR_3->buf + VAR_8, VAR_3->len - VAR_8);
  FUNC_1(VAR_2, &VAR_9);
  if (VAR_2->add_message_id)
   VAR_2->message_id = FUNC_6(&VAR_9, ((void*)0));
  VAR_7 = 1;
  goto check_header_out;
 }

check_header_out:
 FUNC_8(&VAR_9);
 return VAR_7;
}

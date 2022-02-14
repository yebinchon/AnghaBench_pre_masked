
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; scalar_t__ len; } ;
struct mailinfo {int transfer_encoding; scalar_t__ input_error; scalar_t__* content_top; int input; } ;


 struct strbuf VAR_0 ;


 int FUNC_0 (struct mailinfo*,struct strbuf*) ;
 int FUNC_1 (struct mailinfo*,struct strbuf*) ;
 int FUNC_2 (struct mailinfo*) ;
 int FUNC_3 (struct mailinfo*,struct strbuf*) ;
 int FUNC_4 (struct mailinfo*,struct strbuf*) ;
 int FUNC_5 (struct mailinfo*,struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_6 (struct mailinfo*,struct strbuf*) ;
 int FUNC_7 (struct strbuf*,struct strbuf*) ;
 int FUNC_8 (struct strbuf*,int ,char) ;
 int FUNC_9 (struct strbuf*,int ,char*,scalar_t__) ;
 int FUNC_10 (struct strbuf**) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (struct strbuf*) ;
 struct strbuf** FUNC_13 (struct strbuf*,char) ;

__attribute__((used)) static void FUNC_14(struct mailinfo *VAR_1, struct strbuf *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;


 if (*(VAR_1->content_top)) {
  if (!FUNC_1(VAR_1, VAR_2))
   goto handle_body_out;
 }

 do {

  if (*(VAR_1->content_top) && FUNC_6(VAR_1, VAR_2)) {

   if (VAR_3.len) {
    FUNC_4(VAR_1, &VAR_3);
    FUNC_12(&VAR_3);
   }
   if (!FUNC_3(VAR_1, VAR_2))
    goto handle_body_out;
  }


  FUNC_0(VAR_1, VAR_2);

  switch (VAR_1->transfer_encoding) {
  case 129:
  case 128:
  {
   struct strbuf **VAR_4, **VAR_5, *VAR_6;


   FUNC_9(VAR_2, 0, VAR_3.buf, VAR_3.len);
   FUNC_12(&VAR_3);






   VAR_4 = FUNC_13(VAR_2, '\n');
   for (VAR_5 = VAR_4; (VAR_6 = *VAR_5); VAR_5++) {
    if (*(VAR_5 + 1) == ((void*)0))
     if (VAR_6->buf[VAR_6->len - 1] != '\n') {

      FUNC_7(&VAR_3, VAR_6);
      break;
     }
    FUNC_5(VAR_1, VAR_6, &VAR_3);
   }




   FUNC_10(VAR_4);
   break;
  }
  default:
   FUNC_5(VAR_1, VAR_2, &VAR_3);
  }

  if (VAR_1->input_error)
   break;
 } while (!FUNC_8(VAR_2, VAR_1->input, '\n'));

 if (VAR_3.len)
  FUNC_4(VAR_1, &VAR_3);

 FUNC_2(VAR_1);

handle_body_out:
 FUNC_11(&VAR_3);
}

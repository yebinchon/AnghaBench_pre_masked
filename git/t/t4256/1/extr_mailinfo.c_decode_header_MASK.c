
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct mailinfo {int input_error; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct mailinfo*,struct strbuf*,char*) ;
 struct strbuf* FUNC_1 (struct strbuf*) ;
 struct strbuf* FUNC_2 (struct strbuf*,int) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (struct strbuf*,char*,int) ;
 int FUNC_6 (struct strbuf*,struct strbuf*) ;
 int FUNC_7 (struct strbuf*,char*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*) ;
 char* FUNC_10 (char*,char) ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct mailinfo *VAR_1, struct strbuf *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 struct strbuf VAR_6 = VAR_0, *VAR_7;
 struct strbuf VAR_8 = VAR_0, VAR_9 = VAR_0;
 int VAR_10 = 1;

 VAR_3 = VAR_2->buf;
 while (VAR_3 - VAR_2->buf <= VAR_2->len && (VAR_4 = FUNC_11(VAR_3, "=?")) != ((void*)0)) {
  int VAR_11;
  FUNC_9(&VAR_8);
  FUNC_9(&VAR_9);

  if (VAR_3 != VAR_4) {





   char *VAR_12;
   for (VAR_12 = VAR_3; VAR_12 < VAR_4; VAR_12++)
    if (!FUNC_4(*VAR_12))
     break;

   if (VAR_12 != VAR_4 || VAR_3 == VAR_2->buf) {






    FUNC_5(&VAR_6, VAR_3, VAR_4 - VAR_3);
   }
  }




  VAR_4 += 2;

  if (VAR_4 - VAR_2->buf >= VAR_2->len || !(VAR_5 = FUNC_10(VAR_4, '?')))
   goto release_return;

  if (VAR_5 + 3 - VAR_2->buf > VAR_2->len)
   goto release_return;
  FUNC_5(&VAR_8, VAR_4, VAR_5 - VAR_4);

  VAR_11 = VAR_5[1];
  if (!VAR_11 || VAR_5[2] != '?')
   goto release_return;
  VAR_4 = FUNC_11(VAR_5 + 3, "?=");
  if (!VAR_4)
   goto release_return;
  FUNC_5(&VAR_9, VAR_5 + 3, VAR_4 - VAR_5 - 3);
  switch (FUNC_12(VAR_11)) {
  default:
   goto release_return;
  case 'b':
   VAR_7 = FUNC_1(&VAR_9);
   break;
  case 'q':
   VAR_7 = FUNC_2(&VAR_9, 1);
   break;
  }
  if (FUNC_0(VAR_1, VAR_7, VAR_8.buf))
   goto release_return;

  FUNC_6(&VAR_6, VAR_7);
  FUNC_8(VAR_7);
  FUNC_3(VAR_7);
  VAR_3 = VAR_4 + 2;
 }
 FUNC_7(&VAR_6, VAR_3);
 FUNC_9(VAR_2);
 FUNC_6(VAR_2, &VAR_6);
 VAR_10 = 0;
release_return:
 FUNC_8(&VAR_6);
 FUNC_8(&VAR_8);
 FUNC_8(&VAR_9);

 if (VAR_10)
  VAR_1->input_error = -1;
}

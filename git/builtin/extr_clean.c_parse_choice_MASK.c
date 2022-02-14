
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct menu_stuff {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct menu_stuff*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct strbuf**) ;
 int FUNC_7 (struct strbuf*,int ,int) ;
 struct strbuf** FUNC_8 (struct strbuf*,char,int ) ;
 int FUNC_9 (struct strbuf*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int FUNC_12(struct menu_stuff *VAR_2,
   int VAR_3,
   struct strbuf VAR_4,
   int **VAR_5)
{
 struct strbuf **VAR_6, **VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_3) {
  VAR_6 = FUNC_8(&VAR_4, '\n', 0);
 } else {
  char *VAR_10 = VAR_4.buf;
  do {
   if (*VAR_10 == ',')
    *VAR_10 = ' ';
  } while (*VAR_10++);
  VAR_6 = FUNC_8(&VAR_4, ' ', 0);
 }

 for (VAR_7 = VAR_6; *VAR_7; VAR_7++) {
  char *VAR_11;
  int VAR_12 = 1;
  int VAR_13 = 0, VAR_14 = 0;
  int VAR_15, VAR_16;

  FUNC_9(*VAR_7);
  if (!(*VAR_7)->len)
   continue;


  if (*(*VAR_7)->buf == '-') {
   VAR_12 = 0;
   FUNC_7((*VAR_7), 0, 1);
  }

  VAR_15 = 0;
  VAR_16 = 1;
  for (VAR_11 = (*VAR_7)->buf; *VAR_11; VAR_11++) {
   if ('-' == *VAR_11) {
    if (!VAR_15) {
     VAR_15 = 1;
     VAR_16 = 0;
    } else {
     VAR_16 = 0;
     VAR_15 = 0;
     break;
    }
   } else if (!FUNC_4(*VAR_11)) {
    VAR_16 = 0;
    VAR_15 = 0;
    break;
   }
  }

  if (VAR_16) {
   VAR_13 = FUNC_1((*VAR_7)->buf);
   VAR_14 = VAR_13;
  } else if (VAR_15) {
   VAR_13 = FUNC_1((*VAR_7)->buf);

   if (!*(FUNC_10((*VAR_7)->buf, '-') + 1))
    VAR_14 = VAR_2->nr;
   else
    VAR_14 = FUNC_1(FUNC_10((*VAR_7)->buf, '-') + 1);
  } else if (!FUNC_11((*VAR_7)->buf, "*")) {
   VAR_13 = 1;
   VAR_14 = VAR_2->nr;
  } else {
   VAR_13 = FUNC_3((*VAR_7)->buf, VAR_2);
   VAR_14 = VAR_13;
  }

  if (VAR_14 <= 0 || VAR_13 <= 0 || VAR_14 > VAR_2->nr || VAR_13 > VAR_14 ||
      (VAR_3 && VAR_13 != VAR_14)) {
   FUNC_2(VAR_0);
   FUNC_5(FUNC_0("Huh (%s)?\n"), (*VAR_7)->buf);
   FUNC_2(VAR_1);
   continue;
  }

  for (VAR_9 = VAR_13; VAR_9 <= VAR_14; VAR_9++)
   (*VAR_5)[VAR_9-1] = VAR_12;
 }

 FUNC_6(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_2->nr; VAR_9++)
  VAR_8 += (*VAR_5)[VAR_9];
 return VAR_8;
}

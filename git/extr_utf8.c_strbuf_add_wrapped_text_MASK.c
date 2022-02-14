
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; } ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct strbuf*,char const*,int,int) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,char,int) ;
 int FUNC_7 (struct strbuf*,size_t) ;
 scalar_t__ FUNC_8 (char const**,int *) ;

void FUNC_9(struct strbuf *VAR_0,
  const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 1;
 const char *VAR_8, *VAR_9, *VAR_10 = VAR_1;
 size_t VAR_11 = VAR_0->len;

 if (VAR_4 <= 0) {
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
  return;
 }

retry:
 VAR_8 = VAR_1;
 VAR_6 = VAR_5 = VAR_2;
 VAR_9 = ((void*)0);
 if (VAR_5 < 0) {
  VAR_6 = -VAR_5;
  VAR_9 = VAR_1;
 }

 for (;;) {
  char VAR_12;
  size_t VAR_13;

  while ((VAR_13 = FUNC_0(VAR_1)))
   VAR_1 += VAR_13;

  VAR_12 = *VAR_1;
  if (!VAR_12 || FUNC_2(VAR_12)) {
   if (VAR_6 <= VAR_4 || !VAR_9) {
    const char *VAR_14 = VAR_8;
    if (!VAR_12 && VAR_1 == VAR_14)
     return;
    if (VAR_9)
     VAR_14 = VAR_9;
    else
     FUNC_6(VAR_0, ' ', VAR_5);
    FUNC_3(VAR_0, VAR_14, VAR_1 - VAR_14);
    if (!VAR_12)
     return;
    VAR_9 = VAR_1;
    if (VAR_12 == '\t')
     VAR_6 |= 0x07;
    else if (VAR_12 == '\n') {
     VAR_9++;
     if (*VAR_9 == '\n') {
      FUNC_5(VAR_0, '\n');
      goto new_line;
     }
     else if (!FUNC_1(*VAR_9))
      goto new_line;
     else
      FUNC_5(VAR_0, ' ');
    }
    VAR_6++;
    VAR_1++;
   }
   else {
new_line:
    FUNC_5(VAR_0, '\n');
    VAR_1 = VAR_8 = VAR_9 + FUNC_2(*VAR_9);
    VAR_9 = ((void*)0);
    VAR_6 = VAR_5 = VAR_3;
   }
   continue;
  }
  if (VAR_7) {
   VAR_6 += FUNC_8(&VAR_1, ((void*)0));
   if (!VAR_1) {
    VAR_7 = 0;
    VAR_1 = VAR_10;
    FUNC_7(VAR_0, VAR_11);
    goto retry;
   }
  } else {
   VAR_6++;
   VAR_1++;
  }
 }
}

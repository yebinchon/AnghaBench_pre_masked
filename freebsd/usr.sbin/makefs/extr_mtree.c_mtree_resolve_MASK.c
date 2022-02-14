
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 char* FUNC_0 (int,int) ;
 void* VAR_2 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,int ) ;
 char* FUNC_4 (char*) ;
 char const* FUNC_5 () ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (struct sbuf*,char const*,int) ;
 int FUNC_8 (struct sbuf*,char*) ;
 int FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*) ;
 struct sbuf* FUNC_12 () ;
 int FUNC_13 (struct sbuf*,char const) ;
 char* FUNC_14 (char const*,char) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 char* FUNC_16 (int ) ;
 size_t FUNC_17 (char const*) ;

__attribute__((used)) static char *
FUNC_18(const char *VAR_3, int *VAR_4)
{
 struct sbuf *VAR_5;
 char *VAR_6, *VAR_7 = ((void*)0);
 const char *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_11 = FUNC_17(VAR_3);
 if (VAR_11 == 0) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }

 VAR_12 = (VAR_11 > 1) ? (VAR_3[0] == VAR_3[VAR_11 - 1]) ? VAR_3[0] : 0 : 0;
 *VAR_4 = (VAR_12 == '`') ? 1 : 0;
 VAR_15 = (VAR_12 == '`' || VAR_12 == '"') ? 1 : 0;
 VAR_14 = (VAR_15 || VAR_12 == '\'') ? 1 : 0;

 if (!VAR_15) {
  VAR_6 = FUNC_1(VAR_3 + VAR_14);
  if (VAR_14)
   VAR_6[VAR_11 - 2] = '\0';
  return (VAR_6);
 }

 VAR_5 = FUNC_12();
 if (VAR_5 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (((void*)0));
 }

 VAR_8 = VAR_3 + 1;
 VAR_11 -= 2;
 VAR_13 = 0;
 while (VAR_11 > 0) {
  VAR_9 = FUNC_14(VAR_8, '$');
  if (VAR_9 == ((void*)0)) {
   FUNC_7(VAR_5, VAR_8, VAR_11);
   VAR_8 += VAR_11;
   VAR_11 = 0;
   continue;
  }

  if (VAR_9[-1] == '\\')
   VAR_9--;
  if (VAR_8 != VAR_9) {
   FUNC_7(VAR_5, VAR_8, VAR_9 - VAR_8);
   VAR_11 -= VAR_9 - VAR_8;
   VAR_8 = VAR_9;
  }
  if (*VAR_9 == '\\') {
   FUNC_13(VAR_5, '$');
   VAR_8 += 2;
   VAR_11 -= 2;
   continue;
  }

  VAR_8++;
  VAR_11--;

  VAR_10 = VAR_8;
  if (*VAR_8 == '{') {
   VAR_9 = FUNC_14(VAR_10, '}');
   if (VAR_9 == ((void*)0))
    VAR_9 = VAR_10;
  } else
   VAR_9 = VAR_10;
  VAR_11 -= (VAR_9 + 1) - VAR_8;
  VAR_8 = VAR_9 + 1;

  if (VAR_10 == VAR_9) {
   FUNC_13(VAR_5, *VAR_10);
   continue;
  }

  VAR_13 = VAR_1;
  VAR_7 = FUNC_0(VAR_9 - VAR_10, 1);
  FUNC_6(VAR_7, VAR_10 + 1, VAR_9 - VAR_10 - 1);
  if (FUNC_15(VAR_7, ".CURDIR") == 0) {
   VAR_6 = FUNC_3(((void*)0), 0);
   if (VAR_6 == ((void*)0))
    break;
  } else if (FUNC_15(VAR_7, ".PROG") == 0) {
   VAR_6 = FUNC_1(FUNC_5());
  } else {
   VAR_10 = FUNC_4(VAR_7);
   if (VAR_10 != ((void*)0)) {
    VAR_6 = FUNC_1(VAR_10);
   } else
    VAR_6 = ((void*)0);
  }
  VAR_13 = 0;

  if (VAR_6 != ((void*)0)) {
   FUNC_8(VAR_5, VAR_6);
   FUNC_2(VAR_6);
  }
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
 }

 FUNC_2(VAR_7);
 FUNC_11(VAR_5);
 VAR_6 = (VAR_13 == 0) ? FUNC_16(FUNC_9(VAR_5)) : ((void*)0);
 FUNC_10(VAR_5);
 if (VAR_6 == ((void*)0))
  VAR_2 = VAR_1;
 return (VAR_6);
}

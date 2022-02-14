
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int *) ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (int,int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (char*,int ,int ) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 void FUNC_8 (char*,int ,int ) ;
 void FUNC_9 (char*,int ,int ) ;
 void FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;

int
FUNC_16(int VAR_4, char **VAR_5)
{
 uint32_t VAR_6;
 int VAR_7, VAR_8, VAR_9;
 off_t VAR_10;
 char *VAR_11, *VAR_12;
 int (*VAR_13)(int, uint32_t *, off_t *);
 void (*VAR_14)(char *, uint32_t, off_t);

 if ((VAR_12 = FUNC_12(VAR_5[0], '/')) == ((void*)0))
  VAR_12 = VAR_5[0];
 else
  ++VAR_12;
 if (!FUNC_11(VAR_12, "sum")) {
  VAR_13 = FUNC_3;
  VAR_14 = FUNC_9;
  ++VAR_5;
 } else {
  VAR_13 = FUNC_1;
  VAR_14 = FUNC_8;

  while ((VAR_7 = FUNC_6(VAR_4, VAR_5, "o:")) != -1)
   switch (VAR_7) {
   case 'o':
    if (!FUNC_11(VAR_2, "1")) {
     VAR_13 = FUNC_3;
     VAR_14 = FUNC_9;
    } else if (!FUNC_11(VAR_2, "2")) {
     VAR_13 = FUNC_4;
     VAR_14 = FUNC_10;
    } else if (!FUNC_11(VAR_2, "3")) {
     VAR_13 = FUNC_2;
     VAR_14 = FUNC_8;
    } else {
     FUNC_15("illegal argument to -o option");
     FUNC_13();
    }
    break;
   case '?':
   default:
    FUNC_13();
   }
  VAR_4 -= VAR_3;
  VAR_5 += VAR_3;
 }

 VAR_8 = VAR_1;
 VAR_11 = ((void*)0);
 VAR_9 = 0;
 do {
  if (*VAR_5) {
   VAR_11 = *VAR_5++;
   if ((VAR_8 = FUNC_7(VAR_11, VAR_0, 0)) < 0) {
    FUNC_14("%s", VAR_11);
    VAR_9 = 1;
    continue;
   }
  }
  if (VAR_13(VAR_8, &VAR_6, &VAR_10)) {
   FUNC_14("%s", VAR_11 ? VAR_11 : "stdin");
   VAR_9 = 1;
  } else
   VAR_14(VAR_11, VAR_6, VAR_10);
  (void)FUNC_0(VAR_8);
 } while (*VAR_5);
 FUNC_5(VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*,int ) ;
 int VAR_15 ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(int VAR_16, char *VAR_17[])
{
 int VAR_18;
 char *VAR_19;
 int VAR_20;

 VAR_18 = VAR_3;
 VAR_19 = ((void*)0);




 while ((VAR_20 = FUNC_4(VAR_16, VAR_17, "aefilm:osw")) != -1)

  switch(VAR_20) {
  case 'a':
   VAR_0 = VAR_11;
   break;





  case 'e':
   VAR_2 = VAR_11;
   break;
  case 'f':
   VAR_4 = VAR_11;
   break;
  case 'l':
   VAR_5 = VAR_11;
   VAR_10 = VAR_3;
   break;
  case 'o':
   VAR_7 = VAR_11;
   break;
  case 's':
   VAR_10 = VAR_11;
   VAR_5 = VAR_3;
   break;
  case 'w':
   VAR_12 = VAR_11;
   break;
  case 'm':
   VAR_6 = VAR_11;
   VAR_19 = VAR_13;
   break;
  case 'i':
   VAR_18++;
   break;
  case '?':
  default:
   FUNC_7();
  }
 VAR_16 -= VAR_14;
 VAR_17 += VAR_14;

 if (!FUNC_2(VAR_17, VAR_16))
  FUNC_1(1);
 if (VAR_4) {
  FUNC_5();
  FUNC_1(0);
 }





 if (VAR_19 != ((void*)0)) {
  int VAR_21;

  if (VAR_18)
   VAR_19 = FUNC_0(VAR_19);
  VAR_21 = FUNC_6(&VAR_9, VAR_19, VAR_8);
  if (VAR_21) {
   FUNC_3(VAR_15, "regcomp(%s) fails\n", VAR_19);
   FUNC_1(1);
  }
 }
}

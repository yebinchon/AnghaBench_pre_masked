
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 struct alg* FUNC_2 (char const*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,...) ;
 struct alg* FUNC_5 (char const*) ;
 int FUNC_6 (int,char**,char*) ;
 size_t FUNC_7 (size_t*) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (size_t*,size_t) ;
 int FUNC_9 (size_t*,size_t) ;
 int FUNC_10 (size_t*,size_t) ;
 int FUNC_11 (size_t*,size_t) ;
 int FUNC_12 (size_t*,size_t) ;
 int FUNC_13 (struct alg*,size_t*,size_t) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int * FUNC_15 (char const*,char) ;
 size_t FUNC_16 (char*,char**,int ) ;
 int FUNC_17 () ;
 int VAR_5 ;
 int FUNC_18 (char*) ;

int
FUNC_19(int VAR_6, char **VAR_7)
{
 const char *VAR_8;
 struct alg *VAR_9;
 size_t VAR_10[128];
 u_int VAR_11, VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_8 = ((void*)0);
 VAR_2 = VAR_0;
 VAR_13 = 0;
 VAR_5 = 0;
 while ((VAR_14 = FUNC_6(VAR_6, VAR_7, "A:a:d:vz")) != -1)
  switch (VAR_14) {
  case 'A':
   VAR_1 = FUNC_1(VAR_3);
   break;
  case 'a':
   VAR_8 = VAR_3;
   break;
  case 'd':
   VAR_2 = FUNC_3(VAR_3);
   break;
  case 'v':
   VAR_5 = 1;
   break;
  case 'z':
   VAR_13 = 1;
   break;
  default:
   FUNC_17();
  }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;
 VAR_12 = 0;
 while (VAR_6 > 0) {
  char *VAR_15;

  if (VAR_12 >= FUNC_7(VAR_10)) {
   FUNC_18("Too many sizes, ignoring extras");
   break;
  }
  VAR_10[VAR_12] = FUNC_16(VAR_7[0], &VAR_15, 0);
  if (*VAR_15 != '\0')
   FUNC_4(1, "Bad size %s", VAR_7[0]);
  VAR_12++;
  VAR_6--;
  VAR_7++;
 }

 if (VAR_8 == ((void*)0))
  FUNC_4(1, "Algorithm required");
 if (VAR_12 == 0) {
  VAR_10[0] = 16;
  VAR_12++;
  if (VAR_13) {
   while (VAR_10[VAR_12 - 1] * 2 < 240 * 1024) {
    FUNC_0(VAR_12 < FUNC_7(VAR_10));
    VAR_10[VAR_12] = VAR_10[VAR_12 - 1] * 2;
    VAR_12++;
   }
   if (VAR_10[VAR_12 - 1] < 240 * 1024) {
    FUNC_0(VAR_12 < FUNC_7(VAR_10));
    VAR_10[VAR_12] = 240 * 1024;
    VAR_12++;
   }
  }
 }

 if (FUNC_14(VAR_8, "hash") == 0)
  FUNC_11(VAR_10, VAR_12);
 else if (FUNC_14(VAR_8, "hmac") == 0)
  FUNC_12(VAR_10, VAR_12);
 else if (FUNC_14(VAR_8, "blkcipher") == 0)
  FUNC_10(VAR_10, VAR_12);
 else if (FUNC_14(VAR_8, "authenc") == 0)
  FUNC_9(VAR_10, VAR_12);
 else if (FUNC_14(VAR_8, "aead") == 0)
  FUNC_8(VAR_10, VAR_12);
 else if (FUNC_14(VAR_8, "all") == 0) {
  FUNC_11(VAR_10, VAR_12);
  FUNC_12(VAR_10, VAR_12);
  FUNC_10(VAR_10, VAR_12);
  FUNC_9(VAR_10, VAR_12);
  FUNC_8(VAR_10, VAR_12);
 } else if (FUNC_15(VAR_8, '+') != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_8);
  FUNC_13(VAR_9, VAR_10, VAR_12);
 } else {
  VAR_9 = FUNC_5(VAR_8);
  if (VAR_9 == ((void*)0))
   FUNC_4(1, "Invalid algorithm %s", VAR_8);
  FUNC_13(VAR_9, VAR_10, VAR_12);
 }

 return (0);
}

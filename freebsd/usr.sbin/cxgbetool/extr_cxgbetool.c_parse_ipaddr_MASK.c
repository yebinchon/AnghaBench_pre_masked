
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char const*,int*) ;
 int FUNC_1 (int*,int ,unsigned int) ;
 void* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 unsigned int FUNC_4 (char*,char**,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, const char *VAR_5[], int *VAR_6, uint8_t VAR_7[],
    uint8_t VAR_8[], int VAR_9)
{
 const char *VAR_10, *VAR_11;
 char *VAR_12;
 uint8_t *VAR_13;
 int VAR_14, VAR_15;
 unsigned int VAR_16;




 if (FUNC_3(VAR_4, VAR_5[0]) != 0)
  return (VAR_3);




 VAR_10 = FUNC_2(VAR_5[1], ':');
 if (!VAR_10) {
  VAR_11 = "IPv4";
  VAR_14 = VAR_0;
  VAR_16 = 32;
 } else {
  VAR_11 = "IPv6";
  VAR_14 = VAR_1;
  VAR_16 = 128;
 }
 if (*VAR_6 == VAR_2)
  *VAR_6 = VAR_14;
 else if (*VAR_6 != VAR_14) {
  FUNC_5("address %s is not of expected family %s",
      VAR_5[1], *VAR_6 == VAR_0 ? "IP" : "IPv6");
  return (VAR_3);
 }





 VAR_12 = FUNC_2(VAR_5[1], '/');
 if (VAR_12)
  *VAR_12 = 0;
 VAR_15 = FUNC_0(VAR_14, VAR_5[1], VAR_7);
 if (VAR_12)
  *VAR_12 = '/';
 if (VAR_15 <= 0) {
  FUNC_5("Cannot parse %s %s address %s", VAR_4, VAR_11, VAR_5[1]);
  return (VAR_3);
 }




 if (VAR_12) {
  char *VAR_17;
  unsigned int VAR_18 = FUNC_4(VAR_12 + 1, &VAR_17, 10);

  if (VAR_9) {
   FUNC_5("mask cannot be provided for maskless specification");
   return (VAR_3);
  }

  if (VAR_17 == VAR_12 + 1) {
   FUNC_5("missing address prefix for %s", VAR_4);
   return (VAR_3);
  }
  if (*VAR_17) {
   FUNC_5("%s is not a valid address prefix", VAR_12 + 1);
   return (VAR_3);
  }
  if (VAR_18 > VAR_16) {
   FUNC_5("prefix %u is too long for an %s address",
        VAR_18, VAR_11);
   return (VAR_3);
  }
  FUNC_1(VAR_8, 0, VAR_16 / 8);
  VAR_16 = VAR_18;
 }

 if (VAR_8 != ((void*)0)) {



  for (VAR_13 = VAR_8; VAR_16 >= 8; VAR_13++, VAR_16 -= 8)
   *VAR_13 = ~0;
  if (VAR_16)
   *VAR_13 = ~0 << (8 - VAR_16);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct ether_addr* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,struct ether_addr*) ;
 scalar_t__ FUNC_3 (char*,struct ether_addr*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(int VAR_6, char *VAR_7[])
{
 char VAR_8[VAR_1 + 1], *VAR_9;
 struct ether_addr VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_6 > 1);
 FUNC_0(VAR_7 != ((void*)0));



 VAR_13 = VAR_4;
 if (VAR_6 == 2) {
  FUNC_4(VAR_5, "Enumeration not supported on ethers\n");
  VAR_13 = VAR_2;
 } else {
  for (VAR_12 = 2; VAR_12 < VAR_6; VAR_12++) {
   if ((VAR_11 = FUNC_1(VAR_7[VAR_12])) == ((void*)0)) {
    VAR_11 = &VAR_10;
    VAR_9 = VAR_7[VAR_12];
    if (FUNC_2(VAR_9, VAR_11) != 0) {
     VAR_13 = VAR_3;
     break;
    }
   } else {
    VAR_9 = VAR_8;
    if (FUNC_3(VAR_9, VAR_11) != 0) {
     VAR_13 = VAR_3;
     break;
    }
   }
   printf("%-17d  %s\n", FUNC_0(VAR_11), VAR_9);
  }
 }
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v6str ;
struct in_addr {int s6_addr; int s_addr; } ;
struct in6_addr {int s6_addr; int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,struct in_addr*,char*,int) ;
 int FUNC_1 (int ,char*,struct in_addr*,unsigned long*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,unsigned long) ;
 int FUNC_5 (char*,char const*,int) ;

int FUNC_6(int VAR_4, const char **VAR_5)
{
 char VAR_6[VAR_2], VAR_7[VAR_3];
 struct in6_addr VAR_8;
 struct in_addr VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned char *VAR_13, *VAR_14;
 unsigned char VAR_15, VAR_16;


 if (VAR_4 != 3)
  FUNC_3();


 FUNC_5(VAR_6, VAR_5[1], VAR_2);
 VAR_6[VAR_2-1] = '\0';
 FUNC_1(VAR_1, VAR_6, &VAR_8, &VAR_10);


 FUNC_5(VAR_7, VAR_5[2], VAR_3);
 VAR_6[VAR_3-1] = '\0';
 FUNC_1(VAR_0, VAR_7, &VAR_9, &VAR_11);


 VAR_12 = (32 - VAR_11) + VAR_10;
 if (VAR_12 > 128)
  FUNC_3();


 while (VAR_11 < 32) {
  VAR_14 = (unsigned char *)(&VAR_8) + (VAR_10 >> 3);
  VAR_13 = (unsigned char *)(&VAR_9) + (VAR_11 >> 3);
  VAR_16 = 128 >> (VAR_10 & 0x07);
  VAR_15 = 128 >> (VAR_11 & 0x07);

  if (*VAR_13 & VAR_15)
   *VAR_14 |= VAR_16;
  else
   *VAR_14 &= ~VAR_16;

  VAR_11++; VAR_10++;
 }


 while (VAR_10 < 128) {
  VAR_14 = (unsigned char *)(&VAR_8) + (VAR_10 >> 3);
  VAR_16 = 128 >> (VAR_10 & 0x07);

  *VAR_14 &= ~VAR_16;

  VAR_10++;
 }


 if (FUNC_0(VAR_1, &VAR_8, VAR_6, sizeof(VAR_6)) == ((void*)0))
  FUNC_2();
 FUNC_4("%s/%lu\n", VAR_6, VAR_12);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;

 VAR_7 = FUNC_1("inet");
 VAR_8 = FUNC_1("inet6");

 if (VAR_5 > 0 && !FUNC_3(VAR_6[0], "ipv4", 4)) {
  VAR_8 = 0;
  VAR_5--;
  VAR_6++;
 }
 if (VAR_5 > 0 && !FUNC_3(VAR_6[0], "ipv6", 4)) {
  VAR_7 = 0;
  VAR_5--;
  VAR_6++;
 }

 if (VAR_5 > 0 && !FUNC_3(VAR_6[0], "verbose", FUNC_2(VAR_6[0])))
  VAR_9 = 1;

 if (VAR_5 > 0 && !FUNC_3(VAR_6[0], "human", FUNC_2(VAR_6[0])))
  VAR_4 = 1;
}

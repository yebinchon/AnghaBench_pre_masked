
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int ) ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_6, const char *VAR_7[])
{
 int VAR_8 = -1;

 VAR_3 = VAR_7[0];

 if (VAR_6 == 2) {
  if (!FUNC_3(VAR_7[1], "-h") || !FUNC_3(VAR_7[1], "--help")) {
   FUNC_4(VAR_5);
   FUNC_0(0);
  }
 }

 if (VAR_6 < 3) {
  FUNC_4(VAR_4);
  FUNC_0(VAR_0);
 }

 VAR_2 = VAR_7[1];
 VAR_1 = VAR_2[1] - '0';


 VAR_6 -= 2;
 VAR_7 += 2;

 if (VAR_6 == 1 && !FUNC_3(VAR_7[0], "stdio"))
  VAR_8 = FUNC_2();
 else
  VAR_8 = FUNC_1(VAR_6, VAR_7);

 return (VAR_8);
}

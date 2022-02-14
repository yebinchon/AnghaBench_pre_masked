
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = 0;
 VAR_6 = 0;
 VAR_7 = 0;
 if (!FUNC_3(VAR_4, "quiet.", 6)) {
  VAR_5 = VAR_1;
  VAR_4 += 6;
 }
 if (!FUNC_2(VAR_4, "visual"))
  VAR_5 |= VAR_2;
 else if (!FUNC_2(VAR_4, "normal"))
  VAR_6 = 5, VAR_7 = 800;
 else if (!FUNC_2(VAR_4, "off"))
  VAR_6 = 0, VAR_7 = 0;
 else {
  char *VAR_8;

  VAR_5 = 0;
  VAR_6 = FUNC_4(VAR_4, &VAR_8, 0);
  if ((VAR_6 < 0) || (*VAR_8 != '.'))
   goto badopt;
  VAR_4 = ++VAR_8;
  VAR_7 = FUNC_4(VAR_4, &VAR_8, 0);
  if ((VAR_7 < 0) || (*VAR_4 == '\0') || (*VAR_8 != '\0')) {
badopt:
   FUNC_5("argument to -b must be duration.pitch or [quiet.]visual|normal|off");
   return;
  }
  if (VAR_7 != 0)
   VAR_7 = 1193182 / VAR_7;
  VAR_6 /= 10;
 }

 FUNC_1(0, VAR_0, &VAR_5);
 if (VAR_6 > 0 && VAR_7 > 0)
  FUNC_0(VAR_3, "\e[=%d;%dB", VAR_7, VAR_6);
}

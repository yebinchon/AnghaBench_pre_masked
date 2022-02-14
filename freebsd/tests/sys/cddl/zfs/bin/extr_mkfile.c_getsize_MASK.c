
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_0 (char*,char**,int) ;
 int FUNC_1 (char) ;

__attribute__((used)) static unsigned long long
FUNC_2(char *VAR_3)
{
 int VAR_4;
 unsigned long long VAR_5;
 char *VAR_6;







 VAR_5 = FUNC_0(VAR_3, &VAR_6, 10);
 VAR_4 = 0;
 switch (FUNC_1(*VAR_6)) {
 case 'e':
  VAR_4 = 60;
  break;
 case 'p':
  VAR_4 = 50;
  break;
 case 't':
  VAR_4 = 40;
  break;
 case 'g':
  VAR_4 = 30;
  break;
 case 'm':
  VAR_4 = 20;
  break;
 case 'k':
  VAR_4 = 10;
  break;
 case 'b':
  VAR_4 = 9;
  break;
 case '\0':
  break;
 default:
  VAR_2 = VAR_0;
  return 0;
 }
 if (VAR_4) {
  unsigned long long VAR_7;

  VAR_7 = VAR_5;
  VAR_5 <<= VAR_4;

  if ((VAR_5 >> VAR_4) != VAR_7) {
   VAR_2 = VAR_1;
   return 0;
  }
 }

 return VAR_5;
}

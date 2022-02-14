
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 long FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 (char) ;

__attribute__((used)) static long FUNC_3(const char *VAR_1)
{
 int VAR_2 = 0;
 long VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(VAR_1, &VAR_4, 0);
 switch (FUNC_2(*VAR_4)) {
  case 'k' :
  case '\0' : VAR_2 = 0; break;
  case 'm' : VAR_2 = 1; break;
  case 'g' : VAR_2 = 2; break;
  default: return 0;
 }

 if (*VAR_4)
  VAR_4++;

 if (*VAR_4) {
  FUNC_0(VAR_0, "garbage after end of number\n");
  return 0;
 }


 if (VAR_2 == 0)
  return VAR_3;
 return VAR_3 * (2 << ((10 * VAR_2) - 1));
}

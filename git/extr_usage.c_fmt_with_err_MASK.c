
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str_error ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,char*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(char *VAR_1, int VAR_2, const char *VAR_3)
{
 char VAR_4[256], *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_0);
 for (VAR_6 = VAR_7 = 0; VAR_5[VAR_6] && VAR_7 < sizeof(VAR_4) - 1; ) {
  if ((VAR_4[VAR_7++] = VAR_5[VAR_6++]) != '%')
   continue;
  if (VAR_7 < sizeof(VAR_4) - 1) {
   VAR_4[VAR_7++] = '%';
  } else {


   VAR_7--;
   break;
  }
 }
 VAR_4[VAR_7] = 0;

 FUNC_0(VAR_1, VAR_2, "%s: %s", VAR_3, VAR_4);
 return VAR_1;
}

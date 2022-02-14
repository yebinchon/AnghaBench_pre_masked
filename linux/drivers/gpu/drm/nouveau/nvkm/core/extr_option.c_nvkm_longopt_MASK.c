
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (char*,int ,long*) ;
 char* FUNC_3 (char const*,char const*,int*) ;

long
FUNC_4(const char *VAR_1, const char *VAR_2, long VAR_3)
{
 long VAR_4 = VAR_3;
 int VAR_5;
 char *VAR_6;

 VAR_1 = FUNC_3(VAR_1, VAR_2, &VAR_5);
 if (VAR_1 && (VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_0))) {
  int VAR_7 = FUNC_2(VAR_6, 0, &VAR_3);
  if (VAR_7 == 0)
   VAR_4 = VAR_3;
  FUNC_0(VAR_6);
 }

 return VAR_4;
}

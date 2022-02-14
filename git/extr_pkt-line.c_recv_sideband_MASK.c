
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef enum sideband_type { ____Placeholder_sideband_type } sideband_type ;


 int VAR_0 ;

 struct strbuf VAR_1 ;
 int FUNC_0 (char const*,char*,int,int ,struct strbuf*,int*) ;
 int FUNC_1 (int,int *,int *,char*,int ,int ) ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3(const char *VAR_2, int VAR_3, int VAR_4)
{
 char VAR_5[VAR_0 + 1];
 int VAR_6;
 struct strbuf VAR_7 = VAR_1;
 enum sideband_type VAR_8;

 while (1) {
  VAR_6 = FUNC_1(VAR_3, ((void*)0), ((void*)0), VAR_5, VAR_0,
      0);
  if (!FUNC_0(VAR_2, VAR_5, VAR_6, 0, &VAR_7,
       &VAR_8))
   continue;
  switch (VAR_8) {
  case 128:
   FUNC_2(VAR_4, VAR_5 + 1, VAR_6 - 1);
   break;
  default:
   return VAR_8;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int promlib_buf ;
typedef scalar_t__ phandle ;


 int FUNC_0 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

phandle FUNC_3(phandle VAR_0, const char *VAR_1)
{
 phandle VAR_2;
 int VAR_3;
 char VAR_4[128];

 for(VAR_2 = VAR_0; VAR_2;
     VAR_2=FUNC_1(VAR_2)) {
  VAR_3 = FUNC_0(VAR_2, "name", VAR_4,
      sizeof(VAR_4));

  if(VAR_3 == -1) continue;
  if(FUNC_2(VAR_1, VAR_4)==0) return VAR_2;
 }

 return 0;
}

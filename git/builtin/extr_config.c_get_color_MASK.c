
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(const char *VAR_7, const char *VAR_8)
{
 VAR_2 = VAR_7;
 VAR_1 = 0;
 VAR_5[0] = '\0';
 FUNC_2(VAR_3, ((void*)0),
       &VAR_4, &VAR_0);

 if (!VAR_1 && VAR_8) {
  if (FUNC_1(VAR_8, VAR_5) < 0)
   FUNC_3(FUNC_0("unable to parse default color value"));
 }

 FUNC_4(VAR_5, VAR_6);
}

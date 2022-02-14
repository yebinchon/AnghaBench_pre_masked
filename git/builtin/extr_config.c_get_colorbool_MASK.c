
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_8, int VAR_9)
{
 VAR_4 = VAR_8;
 VAR_3 = -1;
 VAR_5 = -1;
 VAR_2 = -1;
 FUNC_0(VAR_6, ((void*)0),
       &VAR_7, &VAR_1);

 if (VAR_3 < 0) {
  if (!FUNC_2(VAR_4, "color.diff"))
   VAR_3 = VAR_5;
  if (VAR_3 < 0)
   VAR_3 = VAR_2;
 }

 if (VAR_3 < 0)

  VAR_3 = VAR_0;

 VAR_3 = FUNC_3(VAR_3);

 if (VAR_9) {
  FUNC_1("%s\n", VAR_3 ? "true" : "false");
  return 0;
 } else
  return VAR_3 ? 0 : 1;
}

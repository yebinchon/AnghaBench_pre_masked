
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adpll_data {int pa; int dev; int np; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int,char const**) ;
 int FUNC_2 (char*,char*,int ,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(struct ti_adpll_data *VAR_1,
      int VAR_2,
      const char *VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 if (VAR_2 >= 0) {
  VAR_5 = FUNC_1(VAR_1->np,
          "clock-output-names",
          VAR_2,
          &VAR_4);
  if (VAR_5)
   return ((void*)0);
 } else {
  const char *VAR_6 = "adpll";
  char *VAR_7;

  VAR_7 = FUNC_0(VAR_1->dev, 8 + 1 + FUNC_3(VAR_6) + 1 +
        FUNC_3(VAR_3), VAR_0);
  if (!VAR_7)
   return ((void*)0);
  FUNC_2(VAR_7, "%08lx.%s.%s", VAR_1->pa, VAR_6, VAR_3);
  VAR_4 = VAR_7;
 }

 return VAR_4;
}

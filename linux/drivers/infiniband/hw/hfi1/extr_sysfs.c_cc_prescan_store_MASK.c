
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int cc_prescan; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct hfi1_pportdata *VAR_0, const char *VAR_1,
    size_t VAR_2)
{
 if (!FUNC_0(VAR_1, "on", 2))
  VAR_0->cc_prescan = 1;
 else if (!FUNC_0(VAR_1, "off", 3))
  VAR_0->cc_prescan = 0;

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static char *FUNC_3(dev_t VAR_1, char *VAR_2)
{
 if (FUNC_0(VAR_1) <= 0xff && FUNC_1(VAR_1) <= 0xff) {
  char VAR_3[VAR_0];
  FUNC_2(VAR_3, VAR_0, "%02x%02x", FUNC_0(VAR_1), FUNC_1(VAR_1));
  FUNC_2(VAR_2, VAR_0, "%-9s", VAR_3);
 } else
  FUNC_2(VAR_2, VAR_0, "%03x:%05x", FUNC_0(VAR_1), FUNC_1(VAR_1));

 return VAR_2;
}

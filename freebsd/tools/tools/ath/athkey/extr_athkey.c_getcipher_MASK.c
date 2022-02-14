
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_8)
{


 if ((strcasecmp(VAR_8,"wep") == 0))
  return VAR_5;
 if ((FUNC_0(VAR_8,"tkip") == 0))
  return VAR_4;
 if ((FUNC_0(VAR_8,"aes-ocb") == 0) || (FUNC_0(VAR_8,"ocb") == 0))
  return VAR_1;
 if ((FUNC_0(VAR_8,"aes-ccm") == 0) || (FUNC_0(VAR_8,"ccm") == 0) ||
     (FUNC_0(VAR_8,"aes") == 0))
  return VAR_0;
 if ((FUNC_0(VAR_8,"ckip") == 0))
  return VAR_2;
 if ((FUNC_0(VAR_8,"none") == 0) || (FUNC_0(VAR_8,"clr") == 0))
  return VAR_3;

 FUNC_1(VAR_7, "%s: unknown cipher %s\n", VAR_6, VAR_8);
 FUNC_0(-1);

}

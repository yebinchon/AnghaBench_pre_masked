
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_5)
{

 if ((strcasecmp(VAR_5,"preq") == 0) || (FUNC_0(VAR_5,"probereq") == 0))
  return VAR_3 >>
         VAR_4;
 else if ((FUNC_0(VAR_5,"auth") == 0))
  return VAR_1 >>
         VAR_4;
 else if ((FUNC_0(VAR_5,"areq") == 0) || (FUNC_0(VAR_5,"assocreq") == 0))
  return VAR_0 >>
         VAR_4;
 else if ((FUNC_0(VAR_5,"data") == 0))
  return VAR_2 >>
         VAR_4;

 return FUNC_0(VAR_5) & 0xf;

}

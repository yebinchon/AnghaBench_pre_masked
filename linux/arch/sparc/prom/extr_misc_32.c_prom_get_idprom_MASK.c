
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

unsigned char
FUNC_2(char *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, "idprom");
 if((VAR_3>VAR_2) || (VAR_3==-1)) return 0xff;
 if(!FUNC_0(VAR_0, "idprom", VAR_1, VAR_2))
  return VAR_1[0];

 return 0xff;
}

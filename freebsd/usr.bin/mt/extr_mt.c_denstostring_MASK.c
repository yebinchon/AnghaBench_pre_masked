
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static const char *
FUNC_2(int VAR_0)
{
 static char VAR_1[20];
 const char *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 == ((void*)0))
  FUNC_1(VAR_1, "0x%02x", VAR_0);
 else
  FUNC_1(VAR_1, "0x%02x:%s", VAR_0, VAR_2);
 return VAR_1;
}

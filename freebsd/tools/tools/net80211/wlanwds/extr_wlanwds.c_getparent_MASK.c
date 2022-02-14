
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oid ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, char VAR_2[VAR_0+1])
{
 char VAR_3[256];
 size_t VAR_4;


 FUNC_0(VAR_3, sizeof(VAR_3), "net.wlan.%s.%%parent", VAR_1+4);
 VAR_4 = VAR_0;
 if (FUNC_1(VAR_3, VAR_2, &VAR_4, ((void*)0), 0) < 0)
  return -1;
 VAR_2[VAR_4] = '\0';
 return 0;
}

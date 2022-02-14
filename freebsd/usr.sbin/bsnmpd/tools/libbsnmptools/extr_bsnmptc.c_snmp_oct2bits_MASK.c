
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (char*,char*,unsigned long long) ;

__attribute__((used)) static char *
FUNC_1(uint32_t VAR_0, char *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;
 uint64_t VAR_5;

 if (VAR_0 > sizeof(VAR_5) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (((void*)0));

 for (VAR_3 = VAR_0, VAR_5 = 0, VAR_4 = 0; VAR_3 > 0; VAR_3--, VAR_4 += 8)
  VAR_5 += VAR_1[VAR_3] << VAR_4;

 VAR_2[0]= '\0';
 FUNC_0(VAR_2, "0x%llx.",(long long unsigned) VAR_5);

 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int memblock_t ;


 char* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

char *FUNC_3( const char *VAR_2 ) {
 char *VAR_3;

 if (!VAR_2[0]) {
  return ((char *)&VAR_0) + sizeof(memblock_t);
 }
 else if (!VAR_2[1]) {
  if (VAR_2[0] >= '0' && VAR_2[0] <= '9') {
   return ((char *)&VAR_1[VAR_2[0]-'0']) + sizeof(memblock_t);
  }
 }
 VAR_3 = FUNC_0 (FUNC_2(VAR_2)+1);
 FUNC_1 (VAR_3, VAR_2);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,char*,size_t) ;
 char* FUNC_1 (int ,int,size_t) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, uint64_t VAR_3, void *VAR_4, size_t VAR_5)
{
 char *VAR_6;

 VAR_3 &= 0x7fffffff;

 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_4, VAR_6, VAR_5);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t,char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_2(void *VAR_2, const char *VAR_3) {
 size_t VAR_4 = VAR_1;
 VAR_1 += FUNC_1(VAR_3);
 VAR_0 = *(uint64_t *)VAR_2;
 FUNC_0(VAR_4, VAR_1,
     "Test write overflowed");
}

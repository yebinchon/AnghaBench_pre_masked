
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptls_context_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(ptls_context_t *VAR_2, const char *VAR_3)
{
    if (FUNC_2(VAR_2, (char *)VAR_3) != 0) {
        FUNC_1(VAR_1, "failed to load certificate:%s:%s\n", VAR_3, FUNC_3(VAR_0));
        FUNC_0(1);
    }
}

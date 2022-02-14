
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_3__ {char* base; scalar_t__ len; int member_0; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int const*,scalar_t__,int) ;
 TYPE_1__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    h2o_mem_pool_t VAR_0;
    char VAR_1[256];

    FUNC_4(&VAR_0);

    h2o_iovec_t VAR_2 = {FUNC_0("The quick brown fox jumps over the lazy dog.")}, VAR_3;
    FUNC_1(VAR_1, (const uint8_t *)VAR_2.base, VAR_2.len, 1);
    FUNC_5(FUNC_6(VAR_1, "VGhlIHF1aWNrIGJyb3duIGZveCBqdW1wcyBvdmVyIHRoZSBsYXp5IGRvZy4") == 0);
    VAR_3 = FUNC_2(&VAR_0, VAR_1, FUNC_7(VAR_1));
    FUNC_5(VAR_2.len == VAR_3.len);
    FUNC_5(FUNC_6(VAR_3.base, VAR_2.base) == 0);

    FUNC_3(&VAR_0);
}

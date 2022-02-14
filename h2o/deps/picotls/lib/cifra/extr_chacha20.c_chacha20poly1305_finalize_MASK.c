
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct chacha20poly1305_context_t {int poly; int textlen; int aadlen; } ;
typedef int lenbuf ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct chacha20poly1305_context_t *VAR_0, uint8_t *VAR_1)
{
    uint8_t VAR_2[16];

    FUNC_2(&VAR_0->poly, VAR_0->textlen);

    FUNC_3(VAR_0->aadlen, VAR_2);
    FUNC_3(VAR_0->textlen, VAR_2 + 8);
    FUNC_1(&VAR_0->poly, VAR_2, sizeof(VAR_2));

    FUNC_0(&VAR_0->poly, VAR_1);
}

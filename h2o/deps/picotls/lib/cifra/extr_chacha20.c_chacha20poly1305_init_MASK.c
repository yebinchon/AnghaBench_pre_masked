
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tmpbuf ;
struct chacha20poly1305_context_t {size_t aadlen; scalar_t__ textlen; int poly; int chacha; int key; } ;
typedef int ptls_aead_context_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *,int ,int,int *,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,void const*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(ptls_aead_context_t *VAR_2, const void *VAR_3, const void *VAR_4, size_t VAR_5)
{
    struct chacha20poly1305_context_t *VAR_6 = (struct chacha20poly1305_context_t *)VAR_2;
    uint8_t VAR_7[64];


    FUNC_6(VAR_7, 0, 16 - VAR_0);
    FUNC_5(VAR_7 + 16 - VAR_0, VAR_3, VAR_0);
    FUNC_1(&VAR_6->chacha, VAR_6->key, sizeof(VAR_6->key), VAR_7, 4);


    FUNC_0(&VAR_6->chacha, VAR_1, VAR_7, 64);
    FUNC_2(&VAR_6->poly, VAR_7, VAR_7 + 16);

    FUNC_7(VAR_7, sizeof(VAR_7));


    if (VAR_5 != 0) {
        FUNC_3(&VAR_6->poly, VAR_4, VAR_5);
        FUNC_4(&VAR_6->poly, VAR_5);
    }

    VAR_6->aadlen = VAR_5;
    VAR_6->textlen = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tag ;
struct chacha20poly1305_context_t {size_t textlen; int poly; int chacha; int super; } ;
typedef int ptls_aead_context_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,void const*,void*,size_t) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (struct chacha20poly1305_context_t*,int *) ;
 int FUNC_3 (int *,void const*,void const*,size_t) ;
 scalar_t__ FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static size_t FUNC_6(ptls_aead_context_t *VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5, const void *VAR_6,
                                       const void *VAR_7, size_t VAR_8)
{
    struct chacha20poly1305_context_t *VAR_9 = (struct chacha20poly1305_context_t *)VAR_2;
    uint8_t VAR_10[VAR_0];
    size_t VAR_11;

    if (VAR_5 < sizeof(VAR_10))
        return VAR_1;

    FUNC_3(&VAR_9->super, VAR_6, VAR_7, VAR_8);

    FUNC_1(&VAR_9->poly, VAR_4, VAR_5 - sizeof(VAR_10));
    VAR_9->textlen = VAR_5 - sizeof(VAR_10);

    FUNC_2(VAR_9, VAR_10);
    if (FUNC_4(VAR_10, (const uint8_t *)VAR_4 + VAR_5 - sizeof(VAR_10), sizeof(VAR_10))) {
        FUNC_0(&VAR_9->chacha, VAR_4, VAR_3, VAR_5 - sizeof(VAR_10));
        VAR_11 = VAR_5 - sizeof(VAR_10);
    } else {
        VAR_11 = VAR_1;
    }

    FUNC_5(VAR_10, sizeof(VAR_10));
    FUNC_5(&VAR_9->poly, sizeof(VAR_9->poly));

    return VAR_11;
}

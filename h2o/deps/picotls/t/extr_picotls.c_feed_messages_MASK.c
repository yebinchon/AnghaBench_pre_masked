
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptls_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_4__ {scalar_t__ off; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*,size_t*,size_t,int const*,size_t,int *) ;

__attribute__((used)) static int FUNC_2(ptls_t *VAR_1, ptls_buffer_t *VAR_2, size_t *VAR_3, const uint8_t *VAR_4,
                         const size_t *VAR_5, ptls_handshake_properties_t *VAR_6)
{
    size_t VAR_7;
    int VAR_8 = VAR_0;

    VAR_2->off = 0;
    FUNC_0(VAR_3, 0, sizeof(*VAR_3) * 5);

    for (VAR_7 = 0; VAR_7 != 4; ++VAR_7) {
        size_t VAR_9 = VAR_5[VAR_7 + 1] - VAR_5[VAR_7];
        if (VAR_9 != 0) {
            VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7, VAR_4 + VAR_5[VAR_7], VAR_9, VAR_6);
            if (!(VAR_8 == 0 || VAR_8 == VAR_0))
                break;
        }
    }

    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ptls_t ;
struct TYPE_6__ {scalar_t__ type; int data; } ;
typedef TYPE_1__ ptls_raw_extension_t ;
struct TYPE_7__ {scalar_t__ (* collect_extension ) (int *,TYPE_2__*,scalar_t__) ;} ;
typedef TYPE_2__ ptls_handshake_properties_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(ptls_t *VAR_3, ptls_handshake_properties_t *VAR_4, uint16_t VAR_5, const uint8_t *VAR_6,
                                    const uint8_t *const VAR_7, ptls_raw_extension_t *VAR_8)
{
    if (VAR_4 != ((void*)0) && VAR_4->collect_extension != ((void*)0) && VAR_4->collect_extension(VAR_3, VAR_4, VAR_5)) {
        size_t VAR_9;
        for (VAR_9 = 0; VAR_8[VAR_9].type != VAR_2; ++VAR_9) {
            FUNC_0(VAR_9 < VAR_0);
            if (VAR_8[VAR_9].type == VAR_5)
                return VAR_1;
        }
        if (VAR_9 < VAR_0) {
            VAR_8[VAR_9].type = VAR_5;
            VAR_8[VAR_9].data = FUNC_1(VAR_6, VAR_7 - VAR_6);
            VAR_8[VAR_9 + 1].type = VAR_2;
        }
    }
    return 0;
}

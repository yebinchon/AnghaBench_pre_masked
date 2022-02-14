
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ptls_t ;
typedef int ptls_handshake_properties_t ;
struct TYPE_7__ {size_t off; scalar_t__ base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,scalar_t__,size_t*,int *) ;
 int VAR_1 ;

int FUNC_4(ptls_t * VAR_2, ptls_buffer_t * VAR_3, ptls_buffer_t * VAR_4, ptls_handshake_properties_t * VAR_5)
{
    size_t VAR_6 = 0, VAR_7 = 0;
    int VAR_8 = 0;

    FUNC_2(VAR_3, "", 0);


    while (VAR_7 < VAR_4->off && (VAR_8 == 0 || VAR_8 == VAR_0))
    {
        VAR_6 = VAR_4->off - VAR_7;
        VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4->base + VAR_7, &VAR_6, VAR_5);
        VAR_7 += VAR_6;
    }

    if (VAR_7 < VAR_4->off)
    {

        FUNC_0(VAR_1, "Could only process %d bytes out of %d\n", (int) VAR_7, (int) VAR_4->off);
    }
    FUNC_1(VAR_4);

    return VAR_8;
}

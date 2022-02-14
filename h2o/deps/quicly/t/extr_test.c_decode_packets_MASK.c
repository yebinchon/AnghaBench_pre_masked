
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int quicly_decoded_packet_t ;
struct TYPE_4__ {size_t len; scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ quicly_datagram_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t FUNC_1 (int *,int *,scalar_t__,size_t) ;

size_t FUNC_2(quicly_decoded_packet_t *VAR_2, quicly_datagram_t **VAR_3, size_t VAR_4)
{
    size_t VAR_5, VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 != VAR_4; ++VAR_5) {
        size_t VAR_7 = 0;
        do {
            size_t VAR_8 = FUNC_1(&VAR_1, VAR_2 + VAR_6, VAR_3[VAR_5]->data.base + VAR_7, VAR_3[VAR_5]->data.len - VAR_7);
            FUNC_0(VAR_8 != VAR_0);
            ++VAR_6;
            VAR_7 += VAR_8;
        } while (VAR_7 != VAR_3[VAR_5]->data.len);
    }

    return VAR_6;
}

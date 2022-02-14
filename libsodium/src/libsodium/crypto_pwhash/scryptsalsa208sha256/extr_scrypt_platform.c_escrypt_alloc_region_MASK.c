
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_3__ {size_t size; void* aligned; void* base; } ;
typedef TYPE_1__ escrypt_region_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int *,size_t,int,int,int,int ) ;
 int FUNC_2 (void**,int,size_t) ;

void *
FUNC_3(escrypt_region_t *VAR_9, size_t VAR_10)
{
    uint8_t *VAR_11, *VAR_12;
    VAR_11 = VAR_12 = ((void*)0);
    if (VAR_10 + 63 < VAR_10) {
        VAR_8 = VAR_0;
    } else if ((VAR_11 = (uint8_t *) FUNC_0(VAR_10 + 63)) != ((void*)0)) {
        VAR_12 = VAR_11 + 63;
        VAR_12 -= (uintptr_t) VAR_12 & 63;
    }

    VAR_9->base = VAR_11;
    VAR_9->aligned = VAR_12;
    VAR_9->size = VAR_11 ? VAR_10 : 0;

    return VAR_12;
}

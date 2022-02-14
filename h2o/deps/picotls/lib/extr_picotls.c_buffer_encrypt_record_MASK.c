
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct st_ptls_traffic_protection_t {TYPE_2__* aead; } ;
struct TYPE_9__ {size_t off; size_t* base; } ;
typedef TYPE_3__ ptls_buffer_t ;
struct TYPE_8__ {TYPE_1__* algo; } ;
struct TYPE_7__ {int tag_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct st_ptls_traffic_protection_t*,size_t*,size_t*,size_t,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,size_t,size_t*,size_t,struct st_ptls_traffic_protection_t*) ;
 int FUNC_3 (size_t*) ;
 size_t* FUNC_4 (size_t) ;
 int FUNC_5 (size_t*,size_t*,size_t) ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (size_t*,size_t) ;

__attribute__((used)) static int FUNC_8(ptls_buffer_t *VAR_3, size_t VAR_4, struct st_ptls_traffic_protection_t *VAR_5)
{
    size_t VAR_6 = VAR_3->off - VAR_4 - 5;
    uint8_t *VAR_7, VAR_8 = VAR_3->base[VAR_4];
    int VAR_9;


    if (VAR_6 <= VAR_2) {
        size_t VAR_10 = 1 + VAR_5->aead->algo->tag_size;
        if ((VAR_9 = FUNC_6(VAR_3, VAR_10)) != 0)
            return VAR_9;
        size_t VAR_11 = FUNC_0(VAR_5, VAR_3->base + VAR_4 + 5, VAR_3->base + VAR_4 + 5, VAR_6, VAR_8);
        FUNC_1(VAR_11 == VAR_6 + VAR_10);
        VAR_3->off += VAR_10;
        VAR_3->base[VAR_4] = VAR_0;
        VAR_3->base[VAR_4 + 3] = (VAR_11 >> 8) & 0xff;
        VAR_3->base[VAR_4 + 4] = VAR_11 & 0xff;
        return 0;
    }


    if ((VAR_7 = FUNC_4(VAR_6)) == ((void*)0)) {
        VAR_9 = VAR_1;
        goto Exit;
    }
    FUNC_5(VAR_7, VAR_3->base + VAR_4 + 5, VAR_6);
    FUNC_7(VAR_3->base + VAR_4, VAR_6 + 5);
    VAR_3->off = VAR_4;


    VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_7, VAR_6, VAR_5);

Exit:
    if (VAR_7 != ((void*)0)) {
        FUNC_7(VAR_7, VAR_6);
        FUNC_3(VAR_7);
    }
    return VAR_9;
}

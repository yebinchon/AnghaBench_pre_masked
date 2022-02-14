
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {size_t size; int * memory; void* base; } ;
typedef TYPE_1__ block_region ;
typedef int block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int **,void**,int) ;
 void* FUNC_3 (int *,size_t,int,int,int,int ) ;
 int FUNC_4 (void**,int,size_t) ;

__attribute__((used)) static int
FUNC_5(block_region **VAR_11, uint32_t VAR_12)
{
    void * VAR_13;
    block *VAR_14;
    size_t VAR_15;

    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }
    VAR_15 = sizeof(block) * VAR_12;
    if (VAR_12 == 0 || VAR_15 / VAR_12 != sizeof(block)) {
        return VAR_0;
    }
    *VAR_11 = (block_region *) FUNC_1(sizeof(block_region));
    if (*VAR_11 == ((void*)0)) {
        return VAR_0;
    }
    (*VAR_11)->base = (*VAR_11)->memory = ((void*)0);
    VAR_14 = ((void*)0);
    if (VAR_15 + 63 < VAR_15) {
        VAR_13 = ((void*)0);
        VAR_10 = VAR_2;
    } else if ((VAR_13 = FUNC_1(VAR_15 + 63)) != ((void*)0)) {
        uint8_t *VAR_16 = ((uint8_t *) VAR_13) + 63;
        VAR_16 -= (uintptr_t) VAR_16 & 63;
        FUNC_2(&VAR_14, &VAR_16, sizeof VAR_14);
    }

    if (VAR_13 == ((void*)0)) {

        FUNC_0(*VAR_11);
        *VAR_11 = ((void*)0);
        return VAR_0;

    }
    (*VAR_11)->base = VAR_13;
    (*VAR_11)->memory = VAR_14;
    (*VAR_11)->size = VAR_15;

    return VAR_1;
}

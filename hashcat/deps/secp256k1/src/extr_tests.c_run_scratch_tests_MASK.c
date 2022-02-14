
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int alloc_size; } ;
typedef TYPE_1__ secp256k1_scratch_space ;
struct TYPE_17__ {int error_callback; } ;
typedef TYPE_2__ secp256k1_context ;
typedef int local_scratch ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int*) ;
 int * FUNC_6 (int *,TYPE_1__*,int) ;
 int FUNC_7 (int *,TYPE_1__*,size_t) ;
 size_t FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*) ;

void FUNC_12(void) {
    const size_t VAR_3 = ((500 + VAR_0 - 1) / VAR_0) * VAR_0;

    int32_t VAR_4 = 0;
    size_t VAR_5;
    size_t VAR_6;
    secp256k1_context *VAR_7 = FUNC_2(VAR_1);
    secp256k1_scratch_space *VAR_8;
    secp256k1_scratch_space VAR_9;


    FUNC_5(VAR_7, VAR_2, &VAR_4);
    FUNC_4(VAR_7, VAR_2, &VAR_4);

    VAR_8 = FUNC_10(VAR_7, 1000);
    FUNC_0(VAR_8 != ((void*)0));
    FUNC_0(VAR_4 == 0);


    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 0) == 1000);
    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 1) == 1000 - (VAR_0 - 1));
    FUNC_0(VAR_8->alloc_size == 0);
    FUNC_0(VAR_8->alloc_size % VAR_0 == 0);


    VAR_5 = FUNC_8(&VAR_7->error_callback, VAR_8);
    FUNC_0(FUNC_6(&VAR_7->error_callback, VAR_8, 500) != ((void*)0));
    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 0) == 1000 - VAR_3);
    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 1) == 1000 - VAR_3 - (VAR_0 - 1));
    FUNC_0(VAR_8->alloc_size != 0);
    FUNC_0(VAR_8->alloc_size % VAR_0 == 0);


    FUNC_0(FUNC_6(&VAR_7->error_callback, VAR_8, 500) == ((void*)0));
    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 0) == 1000 - VAR_3);
    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 1) == 1000 - VAR_3 - (VAR_0 - 1));
    FUNC_0(VAR_8->alloc_size != 0);
    FUNC_0(VAR_8->alloc_size % VAR_0 == 0);


    FUNC_7(&VAR_7->error_callback, VAR_8, VAR_5);
    FUNC_0(VAR_8->alloc_size == 0);
    FUNC_0(FUNC_9(&VAR_7->error_callback, VAR_8, 0) == 1000);
    FUNC_0(FUNC_6(&VAR_7->error_callback, VAR_8, 500) != ((void*)0));
    FUNC_0(VAR_8->alloc_size != 0);


    VAR_6 = FUNC_8(&VAR_7->error_callback, VAR_8);
    FUNC_7(&VAR_7->error_callback, VAR_8, VAR_5);
    FUNC_0(VAR_4 == 0);
    FUNC_7(&VAR_7->error_callback, VAR_8, VAR_6);
    FUNC_0(VAR_4 == 1);
    FUNC_7(&VAR_7->error_callback, VAR_8, (size_t) -1);
    FUNC_0(VAR_4 == 2);


    FUNC_11(VAR_7, VAR_8);
    FUNC_1(&VAR_9, 0, sizeof(VAR_9));
    VAR_8 = &VAR_9;
    FUNC_0(!FUNC_9(&VAR_7->error_callback, VAR_8, 0));
    FUNC_0(VAR_4 == 3);
    FUNC_0(FUNC_6(&VAR_7->error_callback, VAR_8, 500) == ((void*)0));
    FUNC_0(VAR_4 == 4);
    FUNC_11(VAR_7, VAR_8);
    FUNC_0(VAR_4 == 5);


    FUNC_11(VAR_7, ((void*)0));
    FUNC_3(VAR_7);
}

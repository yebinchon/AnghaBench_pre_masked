
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_entry {int flags; int offset; TYPE_1__* data; } ;
struct mem {int jit; } ;
typedef scalar_t__ page_t ;
typedef int addr_t ;
struct TYPE_2__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct mem*) ;
 struct pt_entry* FUNC_4 (struct mem*,scalar_t__) ;
 int FUNC_5 (void*,void*,int ) ;
 void* FUNC_6 (int *,int ,int,int,int ,int ) ;
 int FUNC_7 (struct mem*,scalar_t__,int,void*,int ,int) ;
 int FUNC_8 (struct mem*,scalar_t__,int,int) ;

void *FUNC_9(struct mem *VAR_10, addr_t VAR_11, int VAR_12) {
    page_t VAR_13 = FUNC_0(VAR_11);
    struct pt_entry *VAR_14 = FUNC_4(VAR_10, VAR_13);

    if (VAR_14 == ((void*)0)) {


        page_t VAR_15 = VAR_13 + 1;
        while (VAR_15 < VAR_2 && FUNC_4(VAR_10, VAR_15) == ((void*)0))
            VAR_15++;
        if (VAR_15 >= VAR_2)
            return ((void*)0);
        if (!(FUNC_4(VAR_10, VAR_15)->flags & VAR_8))
            return ((void*)0);
        FUNC_8(VAR_10, VAR_13, 1, VAR_9 | VAR_8);
        VAR_14 = FUNC_4(VAR_10, VAR_13);
    }

    if (VAR_14 != ((void*)0) && VAR_12 == VAR_3) {

        if (!(VAR_14->flags & VAR_9))
            return ((void*)0);

        if (VAR_14->flags & VAR_7) {
            void *VAR_16 = (char *) VAR_14->data->data + VAR_14->offset;
            void *VAR_17 = FUNC_6(((void*)0), VAR_4, VAR_5 | VAR_6,
                    VAR_1 | VAR_0, 0, 0);
            FUNC_5(VAR_17, VAR_16, VAR_4);
            FUNC_7(VAR_10, VAR_13, 1, VAR_17, 0, VAR_14->flags &~ VAR_7);
        }





    }

    if (VAR_14 == ((void*)0))
        return ((void*)0);
    return VAR_14->data->data + VAR_14->offset + FUNC_1(VAR_11);
}

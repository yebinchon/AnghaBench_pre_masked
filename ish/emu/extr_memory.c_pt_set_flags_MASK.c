
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_entry {int flags; int offset; TYPE_1__* data; } ;
struct mem {int dummy; } ;
typedef scalar_t__ pages_t ;
typedef scalar_t__ page_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mem*) ;
 struct pt_entry* FUNC_2 (struct mem*,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,int,int) ;
 int VAR_5 ;

int FUNC_4(struct mem *VAR_6, page_t VAR_7, pages_t VAR_8, int VAR_9) {
    for (page_t VAR_10 = VAR_7; VAR_10 < VAR_7 + VAR_8; VAR_10++)
        if (FUNC_2(VAR_6, VAR_10) == ((void*)0))
            return VAR_4;
    for (page_t VAR_11 = VAR_7; VAR_11 < VAR_7 + VAR_8; VAR_11++) {
        struct pt_entry *VAR_12 = FUNC_2(VAR_6, VAR_11);
        int VAR_13 = VAR_12->flags;
        VAR_12->flags = VAR_9;

        if ((VAR_9 & ~VAR_13) & (VAR_2|VAR_3)) {
            void *VAR_14 = (char *) VAR_12->data->data + VAR_12->offset;

            VAR_14 = (void *) ((uintptr_t) VAR_14 & ~(VAR_5 - 1));
            int VAR_15 = VAR_0;
            if (VAR_9 & VAR_3) VAR_15 |= VAR_1;
            if (FUNC_3(VAR_14, VAR_5, VAR_15) < 0)
                return FUNC_0();
        }
    }
    FUNC_1(VAR_6);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_entry {int flags; int offset; TYPE_1__* data; } ;
struct mem {int dummy; } ;
typedef scalar_t__ page_t ;
struct TYPE_2__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem*) ;
 int FUNC_1 (struct mem*,scalar_t__*) ;
 struct pt_entry* FUNC_2 (struct mem*,scalar_t__) ;
 struct pt_entry* FUNC_3 (struct mem*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct mem*,scalar_t__,int) ;

int FUNC_5(struct mem *VAR_3, struct mem *VAR_4, page_t VAR_5, page_t VAR_6) {
    for (page_t VAR_7 = VAR_5; VAR_7 < VAR_5 + VAR_6; FUNC_1(VAR_3, &VAR_7)) {
        struct pt_entry *VAR_8 = FUNC_2(VAR_3, VAR_7);
        if (VAR_8 == ((void*)0))
            continue;
        if (FUNC_4(VAR_4, VAR_7, 1) < 0)
            return -1;
        if (!(VAR_8->flags & VAR_2))
            VAR_8->flags |= VAR_1;
        VAR_8->flags &= ~VAR_0;
        VAR_8->data->refcount++;
        struct pt_entry *VAR_9 = FUNC_3(VAR_4, VAR_7);
        VAR_9->data = VAR_8->data;
        VAR_9->offset = VAR_8->offset;
        VAR_9->flags = VAR_8->flags;
    }
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    return 0;
}

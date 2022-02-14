
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uc_hook ;
typedef int uc_engine ;
struct pt_entry {int flags; int offset; TYPE_1__* data; } ;
struct mem {int dummy; } ;
struct cpu_state {int fcw; int eflags; int eip; int esp; } ;
typedef int page_t ;
typedef int addr_t ;
struct TYPE_2__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct pt_entry* FUNC_0 (struct mem*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ,int *,int,int ) ;
 int VAR_15 ;
 int FUNC_3 (int *,int,int ,int) ;
 int FUNC_4 (int *,int,void*,int ) ;
 int FUNC_5 (int ,int ,int **) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_16 ;

uc_engine *FUNC_8(struct cpu_state *VAR_17, struct mem *VAR_18) {
    uc_engine *VAR_19;
    FUNC_7(FUNC_5(VAR_4, VAR_7, &VAR_19), "uc_open");


    FUNC_6(VAR_19, VAR_13, VAR_17->esp);
    FUNC_6(VAR_19, VAR_12, VAR_17->eip);
    FUNC_6(VAR_19, VAR_11, VAR_17->eflags);
    FUNC_6(VAR_19, VAR_14, VAR_17->fcw);




    for (page_t VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
        struct pt_entry *VAR_21 = FUNC_0(VAR_18, VAR_20);
        if (VAR_21 == ((void*)0))
            continue;
        int VAR_22 = VAR_9 | VAR_8;

        if (VAR_21->flags & VAR_3) VAR_22 |= VAR_10;
        addr_t VAR_23 = VAR_20 << VAR_1;
        void *VAR_24 = VAR_21->data->data + VAR_21->offset;
        FUNC_7(FUNC_3(VAR_19, VAR_23, VAR_2, VAR_22), "uc_mem_map");
        FUNC_7(FUNC_4(VAR_19, VAR_23, VAR_24, VAR_2), "uc_mem_write");
    }


    FUNC_1(VAR_19);


    uc_hook VAR_25;
    FUNC_7(FUNC_2(VAR_19, &VAR_25, VAR_5, VAR_15, ((void*)0), 1, 0), "uc_hook_add");
    FUNC_7(FUNC_2(VAR_19, &VAR_25, VAR_6, VAR_16, ((void*)0), 1, 0), "uc_hook_add");

    return VAR_19;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_entry {struct data* data; } ;
struct mem {int jit; } ;
struct data {scalar_t__ refcount; scalar_t__ data; int * fd; int size; } ;
typedef scalar_t__ pages_t ;
typedef scalar_t__ page_t ;


 int FUNC_0 (char*,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct data*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct mem*) ;
 int FUNC_5 (struct mem*,scalar_t__*) ;
 struct pt_entry* FUNC_6 (struct mem*,scalar_t__) ;
 int FUNC_7 (struct mem*,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_1 ;

int FUNC_10(struct mem *VAR_2, page_t VAR_3, pages_t VAR_4) {
    for (page_t VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_4; FUNC_5(VAR_2, &VAR_5)) {
        struct pt_entry *VAR_6 = FUNC_6(VAR_2, VAR_5);
        if (VAR_6 == ((void*)0))
            continue;



        struct data *VAR_7 = VAR_6->data;
        FUNC_7(VAR_2, VAR_5);
        if (--VAR_7->refcount == 0) {

            if (VAR_7->data != VAR_1) {
                int VAR_8 = FUNC_8(VAR_7->data, VAR_7->size);
                if (VAR_8 != 0)
                    FUNC_0("munmap(%p, %lu) failed: %s", VAR_7->data, VAR_7->size, FUNC_9(VAR_0));
            }
            if (VAR_7->fd != ((void*)0)) {
                FUNC_1(VAR_7->fd);
            }
            FUNC_2(VAR_7);
        }
    }
    FUNC_4(VAR_2);
    return 0;
}

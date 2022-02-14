
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_entry {int flags; } ;
typedef scalar_t__ pages_t ;
typedef scalar_t__ page_t ;
typedef int int_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int mem; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct pt_entry* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;

int_t FUNC_8(addr_t VAR_7, dword_t VAR_8, dword_t VAR_9, dword_t VAR_10) {
    FUNC_3("mremap(%#x, %#x, %#x, %d)", VAR_7, VAR_8, VAR_9, VAR_10);
    if (FUNC_2(VAR_7) != 0)
        return VAR_4;
    if (VAR_10 & ~(VAR_1 | VAR_0))
        return VAR_4;
    if (VAR_10 & VAR_0) {
        FUNC_0("missing MREMAP_FIXED");
        return VAR_4;
    }
    pages_t VAR_11 = FUNC_1(VAR_8);
    pages_t VAR_12 = FUNC_1(VAR_9);


    if (VAR_12 <= VAR_11) {
        int VAR_13 = FUNC_7(VAR_6->mem, FUNC_1(VAR_7) + VAR_12, VAR_11 - VAR_12);
        if (VAR_13 < 0)
            return VAR_3;
        return VAR_7;
    }

    struct pt_entry *VAR_14 = FUNC_4(VAR_6->mem, FUNC_1(VAR_7));
    if (VAR_14 == ((void*)0))
        return VAR_3;
    dword_t VAR_15 = VAR_14->flags;
    for (page_t VAR_16 = FUNC_1(VAR_7); VAR_16 < FUNC_1(VAR_7) + VAR_11; VAR_16++) {
        VAR_14 = FUNC_4(VAR_6->mem, VAR_16);
        if (VAR_14 == ((void*)0) && VAR_14->flags != VAR_15)
            return VAR_3;
    }
    if (!(VAR_15 & VAR_2)) {
        FUNC_0("mremap grow on file mappings");
        return VAR_3;
    }
    page_t VAR_17 = FUNC_1(VAR_7) + VAR_11;
    pages_t VAR_18 = VAR_12 - VAR_11;
    if (!FUNC_5(VAR_6->mem, VAR_17, VAR_18))
        return VAR_5;
    int VAR_19 = FUNC_6(VAR_6->mem, VAR_17, VAR_18, VAR_15);
    if (VAR_19 < 0)
        return VAR_19;
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uc_engine ;
typedef int tls_entry ;
struct gdt_entry {int base0; int base1; int base2; } ;
typedef int dword_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,struct gdt_entry*,int) ;
 int FUNC_1 (int *,scalar_t__,struct gdt_entry*,int) ;

__attribute__((used)) static void FUNC_2(uc_engine *VAR_1, dword_t VAR_2) {
    struct gdt_entry VAR_3;
    FUNC_0(VAR_1, VAR_0 + 12 * sizeof(struct gdt_entry), &VAR_3, sizeof(VAR_3));
    VAR_3.base0 = (VAR_2 & 0x0000ffff);
    VAR_3.base1 = (VAR_2 & 0x00ff0000) >> 16;
    VAR_3.base2 = (VAR_2 & 0xff000000) >> 24;
    FUNC_1(VAR_1, VAR_0 + 12 * sizeof(struct gdt_entry), &VAR_3, sizeof(VAR_3));
}

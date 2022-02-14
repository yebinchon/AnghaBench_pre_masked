
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int limit; int base; } ;
typedef TYPE_1__ uc_x86_mmr ;
typedef int uc_engine ;
struct gdt_entry {int limit0; int limit1; int granularity; int system; int type; int db; int present; int dpl; } ;
typedef int gdt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,struct gdt_entry**,int) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(uc_engine *VAR_9) {

    struct gdt_entry VAR_10[13] = {};


    VAR_10[1].limit0 = 0xffff; VAR_10[1].limit1 = 0xf; VAR_10[1].granularity = 1;
    VAR_10[1].system = 1; VAR_10[1].type = 0xf; VAR_10[1].db = 1; VAR_10[1].present = 1;

    VAR_10[2] = VAR_10[1]; VAR_10[2].type = 0x3;

    VAR_10[12] = VAR_10[2]; VAR_10[12].dpl = 3;


    FUNC_4(FUNC_0(VAR_9, VAR_0, VAR_1, VAR_2), "map gdt");
    FUNC_4(FUNC_1(VAR_9, VAR_0, &VAR_10, sizeof(VAR_10)), "write gdt");


    uc_x86_mmr VAR_11 = {.base = VAR_0, .limit = sizeof(VAR_10)};
    FUNC_4(FUNC_2(VAR_9, VAR_7, &VAR_11), "write gdtr");
    FUNC_3(VAR_9, VAR_3, 1<<3);
    FUNC_3(VAR_9, VAR_4, 2<<3);
    FUNC_3(VAR_9, VAR_5, 2<<3);
    FUNC_3(VAR_9, VAR_6, 2<<3);
    FUNC_3(VAR_9, VAR_8, 2<<3);
}

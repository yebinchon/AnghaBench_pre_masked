
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uc_engine ;
struct tlb {int dummy; } ;
struct cpu_state {int mem; } ;
struct TYPE_4__ {struct cpu_state cpu; TYPE_1__* mm; } ;
struct TYPE_3__ {int mem; } ;


 scalar_t__ FUNC_0 (struct cpu_state*,struct tlb*,int *,int) ;
 int FUNC_1 (struct cpu_state*,struct tlb*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (struct cpu_state*,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct cpu_state*,struct tlb*,int *) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (struct tlb*,int ) ;
 int FUNC_8 (struct cpu_state*,struct tlb*) ;
 int FUNC_9 (int,char* const*,int *) ;

int FUNC_10(int VAR_3, char *const VAR_4[]) {
    int VAR_5 = FUNC_9(VAR_3, VAR_4, ((void*)0));
    if (VAR_5 < 0) {

        FUNC_2(VAR_2, "%s\n", FUNC_6(-VAR_5));
        return VAR_5;
    }


    uc_engine *VAR_6 = FUNC_4(&VAR_0->cpu, &VAR_0->mm->mem);

    struct cpu_state *VAR_7 = &VAR_0->cpu;
    struct tlb VAR_8;
    FUNC_7(&VAR_8, VAR_7->mem);
    int VAR_9 = 0;
    struct cpu_state VAR_10 = *VAR_7;
    while (1) {
        while (FUNC_0(VAR_7, &VAR_8, VAR_6, VAR_9) < 0) {
            FUNC_3("resetting cpu\n");
            *VAR_7 = VAR_10;
            VAR_1;
            FUNC_1(VAR_7, &VAR_8);
        }
        VAR_9 = FUNC_8(VAR_7, &VAR_8);
        VAR_10 = *VAR_7;
        FUNC_5(VAR_7, &VAR_8, VAR_6);
    }
}

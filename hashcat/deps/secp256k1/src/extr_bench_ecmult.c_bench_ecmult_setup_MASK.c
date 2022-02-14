
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset1; int count; int offset2; } ;
typedef TYPE_1__ bench_data ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void* VAR_1) {
    bench_data* VAR_2 = (bench_data*)VAR_1;
    VAR_2->offset1 = (VAR_2->count * 0x537b7f6f + 0x8f66a481) % VAR_0;
    VAR_2->offset2 = (VAR_2->count * 0x7f6f537b + 0x6a1a8f49) % VAR_0;
}

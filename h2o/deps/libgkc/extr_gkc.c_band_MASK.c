
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gkc_summary {int epsilon; int nr_elems; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t FUNC_1(struct gkc_summary *VAR_0, uint64_t VAR_1)
{
    uint64_t VAR_2;

    VAR_2 = 1 + (VAR_0->epsilon * VAR_0->nr_elems * 2) - VAR_1;

    if (VAR_2 == 1) {
        return 0;
    } else {
        return FUNC_0(VAR_2)/FUNC_0(2);
    }
}

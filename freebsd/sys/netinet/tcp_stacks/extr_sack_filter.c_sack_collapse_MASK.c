
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sack_filter {int sf_used; int sf_bits; TYPE_1__* sf_blks; } ;
typedef size_t int32_t ;
struct TYPE_2__ {int end; int start; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sack_filter*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct sack_filter *VAR_0, int32_t VAR_1, int32_t VAR_2)
{
 if (FUNC_1(VAR_0->sf_blks[VAR_1].start, VAR_0->sf_blks[VAR_2].start)) {

  VAR_0->sf_blks[VAR_2].start = VAR_0->sf_blks[VAR_1].start;
 }
 if (FUNC_0(VAR_0->sf_blks[VAR_1].end, VAR_0->sf_blks[VAR_2].end)) {

  VAR_0->sf_blks[VAR_2].end = VAR_0->sf_blks[VAR_1].end;
 }
 VAR_0->sf_bits = FUNC_2(VAR_0, VAR_1);
 VAR_0->sf_used--;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sackblk {int end; int start; } ;
struct sack_filter {TYPE_1__* sf_blks; } ;
typedef size_t int32_t ;
struct TYPE_2__ {int end; int start; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sack_filter*,size_t) ;

__attribute__((used)) static int32_t
FUNC_3(struct sack_filter *VAR_1, struct sackblk *VAR_2, uint32_t VAR_3)
{
 int32_t VAR_4;

 for(VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  if (FUNC_2(VAR_1, VAR_4) == 0)
   continue;
  if (VAR_4 == VAR_3)
   continue;
  if (FUNC_0(VAR_1->sf_blks[VAR_4].end, VAR_2->start) &&
      FUNC_1(VAR_1->sf_blks[VAR_4].end, VAR_2->end) &&
      FUNC_1(VAR_1->sf_blks[VAR_4].start, VAR_2->start)) {
   return(VAR_4);
  }
  if (FUNC_1(VAR_1->sf_blks[VAR_4].start, VAR_2->end) &&
      FUNC_0(VAR_1->sf_blks[VAR_4].start, VAR_2->start) &&
      FUNC_0(VAR_1->sf_blks[VAR_4].end, VAR_2->end)) {
   return(VAR_4);
  }
 }
 return (-1);
}

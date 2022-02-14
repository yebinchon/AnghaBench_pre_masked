
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dst; } ;
typedef TYPE_2__ packet_t ;
struct TYPE_8__ {int nmfilter; TYPE_1__* mfilter; } ;
typedef TYPE_3__ channel_t ;
struct TYPE_6__ {int end; int start; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_2(channel_t *VAR_1, packet_t *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_2->dst))
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_1->nmfilter; VAR_3++) {
  if (FUNC_1(VAR_2->dst, VAR_1->mfilter[VAR_3].start, VAR_0) >= 0
      && FUNC_1(VAR_2->dst, VAR_1->mfilter[VAR_3].end, VAR_0) <= 0)
   return 1;
 }

 return 0;
}

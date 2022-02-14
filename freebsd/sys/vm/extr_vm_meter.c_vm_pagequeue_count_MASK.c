
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_4__ {TYPE_1__* vmd_pagequeues; } ;
struct TYPE_3__ {scalar_t__ pq_cnt; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(int VAR_2)
{
 u_int VAR_3;
 int VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3 += VAR_0[VAR_4].vmd_pagequeues[VAR_2].pq_cnt;

 return (VAR_3);
}

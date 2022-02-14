
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg_s {int flows; int loops; } ;
struct TYPE_3__ {scalar_t__ tot_bytes; } ;
struct TYPE_4__ {TYPE_1__ ni; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,int,unsigned long long) ;
 TYPE_2__* VAR_0 ;

int
FUNC_2(struct cfg_s *VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2 < VAR_1->flows; VAR_2++) {

  FUNC_1(1, "queue %4d tot %10llu", VAR_2,
      (unsigned long long)VAR_0->ni.tot_bytes);
 }
 FUNC_0(1, "done %d loops\n", VAR_1->loops);
 return 0;
}

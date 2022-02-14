
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entries; int step; int first; int next; int last; } ;
struct TYPE_4__ {int entries; int step; int first; int next; int last; } ;
struct TYPE_6__ {TYPE_2__ itlb; TYPE_1__ dtlb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

int FUNC_0(void)
{

 VAR_2->dtlb.entries = 64;
 VAR_2->dtlb.step = 0x10;

 VAR_2->dtlb.first = VAR_0 | VAR_2->dtlb.step;
 VAR_2->dtlb.next = VAR_2->dtlb.first;

 VAR_2->dtlb.last = VAR_0 |
      ((VAR_2->dtlb.entries - 1) *
       VAR_2->dtlb.step);


 VAR_2->itlb.entries = 64;
 VAR_2->itlb.step = 0x10;

 VAR_2->itlb.first = VAR_1 | VAR_2->itlb.step;
 VAR_2->itlb.next = VAR_2->itlb.first;
 VAR_2->itlb.last = VAR_1 |
      ((VAR_2->itlb.entries - 1) *
       VAR_2->itlb.step);

 return 0;
}

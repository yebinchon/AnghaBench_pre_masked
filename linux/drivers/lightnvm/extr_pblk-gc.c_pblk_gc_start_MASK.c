
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gc_active; } ;
struct pblk {TYPE_1__ gc; } ;


 int FUNC_0 (struct pblk*,char*) ;

__attribute__((used)) static void FUNC_1(struct pblk *VAR_0)
{
 VAR_0->gc.gc_active = 1;
 FUNC_0(VAR_0, "gc start\n");
}

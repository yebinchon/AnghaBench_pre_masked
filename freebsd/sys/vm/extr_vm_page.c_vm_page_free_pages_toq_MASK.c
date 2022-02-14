
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vm_page_t ;
struct spglist {int dummy; } ;
struct TYPE_3__ {int ss; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 scalar_t__ FUNC_0 (struct spglist*) ;
 int * FUNC_1 (struct spglist*) ;
 int FUNC_2 (struct spglist*,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

void
FUNC_5(struct spglist *VAR_1, bool VAR_2)
{
 vm_page_t VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_1))
  return;

 VAR_4 = 0;
 while ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0)) {
  VAR_4++;
  FUNC_2(VAR_1, VAR_0.s.ss);
  FUNC_3(VAR_3);
 }

 if (VAR_2)
  FUNC_4(VAR_4);
}

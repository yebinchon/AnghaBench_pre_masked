
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * release_bootmem; } ;
struct TYPE_3__ {unsigned long fb_phys; unsigned long fb_len; int in_use; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_3 = VAR_2.fb_phys & VAR_0;
 unsigned long VAR_4 = VAR_2.fb_len;
 unsigned long VAR_5, VAR_6;

 if (VAR_2.in_use) {
  VAR_5 = FUNC_1(VAR_3);
  VAR_6 = FUNC_0(VAR_3 + VAR_4);

  for (; VAR_5 < VAR_6; VAR_5++)
   FUNC_2(FUNC_3(VAR_5));

  VAR_2.in_use = 0;
 }
 VAR_1.release_bootmem = ((void*)0);
}

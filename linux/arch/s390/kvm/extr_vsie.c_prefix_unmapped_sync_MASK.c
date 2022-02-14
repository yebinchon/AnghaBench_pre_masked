
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prog0c; int cpuflags; } ;
struct vsie_page {TYPE_1__ scb_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vsie_page*) ;

__attribute__((used)) static void FUNC_3(struct vsie_page *VAR_2)
{
 FUNC_2(VAR_2);
 if (VAR_2->scb_s.prog0c & VAR_1)
  FUNC_0(VAR_0, &VAR_2->scb_s.cpuflags);
 while (VAR_2->scb_s.prog0c & VAR_1)
  FUNC_1();
}

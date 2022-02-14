
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpuflags; } ;
struct vsie_page {TYPE_2__ scb_s; TYPE_1__* scb_o; } ;
struct TYPE_3__ {int cpuflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vsie_page *VAR_3)
{
 const int VAR_4 = VAR_2 | VAR_1 | VAR_0;
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_3->scb_o->cpuflags);
 FUNC_0(VAR_4, &VAR_3->scb_s.cpuflags);
 FUNC_1(VAR_5 & VAR_4, &VAR_3->scb_s.cpuflags);
}

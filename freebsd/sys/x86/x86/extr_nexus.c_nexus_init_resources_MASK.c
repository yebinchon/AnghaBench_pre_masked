
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rm_start; char* rm_descr; int rm_end; void* rm_type; } ;


 void* VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int * FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int) ;

void
FUNC_5(void)
{
 int VAR_6;
 VAR_2.rm_start = 0;
 VAR_2.rm_type = VAR_0;
 VAR_2.rm_descr = "Interrupt request lines";
 VAR_2.rm_end = VAR_4 - 1;
 if (FUNC_3(&VAR_2))
  FUNC_2("nexus_init_resources irq_rman");





 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  if (FUNC_1(VAR_6) != ((void*)0))
   if (FUNC_4(&VAR_2, VAR_6, VAR_6) != 0)
    FUNC_2("nexus_init_resources irq_rman add");






 VAR_1.rm_start = 0;
 VAR_1.rm_end = 7;
 VAR_1.rm_type = VAR_0;
 VAR_1.rm_descr = "DMA request lines";

 if (FUNC_3(&VAR_1)
     || FUNC_4(&VAR_1,
      VAR_1.rm_start, VAR_1.rm_end))
  FUNC_2("nexus_init_resources drq_rman");






 VAR_5.rm_start = 0;
 VAR_5.rm_end = 0xffff;
 VAR_5.rm_type = VAR_0;
 VAR_5.rm_descr = "I/O ports";
 if (FUNC_3(&VAR_5)
     || FUNC_4(&VAR_5, 0, 0xffff))
  FUNC_2("nexus_init_resources port_rman");

 VAR_3.rm_start = 0;
 VAR_3.rm_end = FUNC_0();
 VAR_3.rm_type = VAR_0;
 VAR_3.rm_descr = "I/O memory addresses";
 if (FUNC_3(&VAR_3)
     || FUNC_4(&VAR_3, 0, VAR_3.rm_end))
  FUNC_2("nexus_init_resources mem_rman");
}

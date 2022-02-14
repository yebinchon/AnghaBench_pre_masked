
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int scratch_page_dma; TYPE_1__* driver; } ;
struct TYPE_3__ {int (* write_entry ) (int ,unsigned int,int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 () ;

void FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < (VAR_1 + VAR_2); VAR_3++) {
  VAR_0.driver->write_entry(VAR_0.scratch_page_dma,
        VAR_3, 0);
 }
 FUNC_1();
}

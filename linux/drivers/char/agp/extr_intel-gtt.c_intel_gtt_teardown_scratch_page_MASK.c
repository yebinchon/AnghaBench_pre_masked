
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scratch_page; int scratch_page_dma; int pcidev; scalar_t__ needs_dmar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_2(VAR_2.scratch_page, 1);
 if (VAR_2.needs_dmar)
  FUNC_1(VAR_2.pcidev,
          VAR_2.scratch_page_dma,
          VAR_0, VAR_1);
 FUNC_0(VAR_2.scratch_page);
}

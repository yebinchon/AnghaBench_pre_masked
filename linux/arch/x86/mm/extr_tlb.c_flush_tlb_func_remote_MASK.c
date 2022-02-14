
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flush_tlb_info {scalar_t__ mm; } ;
struct TYPE_2__ {int loaded_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct flush_tlb_info const*,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
 const struct flush_tlb_info *VAR_5 = VAR_4;

 FUNC_2(VAR_3);

 if (VAR_5->mm && VAR_5->mm != FUNC_3(VAR_2.loaded_mm))
  return;

 FUNC_0(VAR_0);
 FUNC_1(VAR_5, 0, VAR_1);
}

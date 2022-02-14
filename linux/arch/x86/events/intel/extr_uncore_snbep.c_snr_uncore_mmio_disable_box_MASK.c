
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore_box {int io_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1->io_addr)
  return;

 VAR_2 = FUNC_0(VAR_1->io_addr);
 VAR_2 |= VAR_0;
 FUNC_1(VAR_2, VAR_1->io_addr);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_bus {scalar_t__ hosttype; int host_pci; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bcma_bus *VAR_2, u32 VAR_3)
{
 if (VAR_2->hosttype == VAR_0)
  FUNC_0(VAR_2->host_pci, VAR_1,
           VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct bcma_device {scalar_t__ io_wrap; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bcma_device *VAR_0, u16 VAR_1,
      u32 VAR_2)
{
 if (FUNC_0(!VAR_0->io_wrap, "Accessed core has no wrapper/agent\n"))
  return;
 FUNC_1(VAR_2, VAR_0->io_wrap + VAR_1);
}

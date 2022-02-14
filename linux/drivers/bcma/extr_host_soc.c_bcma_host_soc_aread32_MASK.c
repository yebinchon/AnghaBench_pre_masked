
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct bcma_device {scalar_t__ io_wrap; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct bcma_device *VAR_0, u16 VAR_1)
{
 if (FUNC_0(!VAR_0->io_wrap, "Accessed core has no wrapper/agent\n"))
  return ~0;
 return FUNC_1(VAR_0->io_wrap + VAR_1);
}

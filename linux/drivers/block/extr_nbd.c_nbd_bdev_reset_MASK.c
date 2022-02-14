
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_openers; } ;


 int FUNC_0 (struct block_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct block_device *VAR_0)
{
 if (VAR_0->bd_openers > 1)
  return;
 FUNC_0(VAR_0, 0);
}

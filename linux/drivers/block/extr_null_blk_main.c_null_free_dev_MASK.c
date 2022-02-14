
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int badblocks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nullb_device*) ;
 int FUNC_2 (struct nullb_device*) ;

__attribute__((used)) static void FUNC_3(struct nullb_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->badblocks);
 FUNC_1(VAR_0);
}

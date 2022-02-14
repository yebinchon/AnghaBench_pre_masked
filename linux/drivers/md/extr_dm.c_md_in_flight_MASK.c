
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mapped_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct mapped_device *VAR_0)
{
 if (FUNC_2(VAR_0->queue))
  return FUNC_0(VAR_0->queue);
 else
  return FUNC_1(VAR_0);
}

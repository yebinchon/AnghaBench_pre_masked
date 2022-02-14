
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {scalar_t__ lo_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, void *VAR_2, void *VAR_3)
{
 struct loop_device *VAR_4 = VAR_2;
 struct loop_device **VAR_5 = VAR_3;

 if (VAR_4->lo_state == VAR_0) {
  *VAR_5 = VAR_4;
  return 1;
 }
 return 0;
}

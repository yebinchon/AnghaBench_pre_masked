
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {scalar_t__ guest_activity_state; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct vmcs12 *VAR_3)
{
 if (FUNC_0(VAR_3->guest_activity_state != VAR_1 &&
        VAR_3->guest_activity_state != VAR_2))
  return -VAR_0;

 return 0;
}

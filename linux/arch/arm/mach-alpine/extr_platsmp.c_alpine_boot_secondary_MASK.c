
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct task_struct {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2, struct task_struct *VAR_3)
{
 phys_addr_t VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 if (VAR_4 > (phys_addr_t)(uint32_t)(-1)) {
  FUNC_3("FAIL: resume address over 32bit (%pa)", &VAR_4);
  return -VAR_0;
 }

 return FUNC_1(FUNC_2(VAR_2), (uint32_t)VAR_4);
}

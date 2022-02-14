
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int pre_handler; int * addr; } ;
typedef int kprobe_opcode_t ;


 int FUNC_0 (void (*) ()) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct kprobe*) ;
 int FUNC_3 (struct kprobe*) ;

__attribute__((used)) static int FUNC_4(void(*VAR_1)(void), unsigned VAR_2)
{
 struct kprobe VAR_3 = {
  .addr = (kprobe_opcode_t *)((uintptr_t)VAR_1 + VAR_2),
  .pre_handler = VAR_0,
 };

 int VAR_4 = FUNC_2(&VAR_3);
 if (VAR_4 < 0) {
  FUNC_1("FAIL: register_kprobe failed with %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1);

 FUNC_3(&VAR_3);
 return VAR_4;
}

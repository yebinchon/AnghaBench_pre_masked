
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kprobe_opcode_t ;
struct TYPE_5__ {scalar_t__ flags; int * addr; } ;
struct TYPE_6__ {TYPE_1__ kp; } ;


 int VAR_0 ;
 int FUNC_0 (long (*) (long,long),int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(long (*VAR_4)(long, long))
{
 int VAR_5;

 VAR_3.kp.addr = (kprobe_opcode_t *)VAR_4;
 VAR_5 = FUNC_2(&VAR_3);
 if (VAR_5 < 0) {
  FUNC_1("FAIL: register_kretprobe failed with %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_4, 1);

 FUNC_3(&VAR_3);
 VAR_3.kp.flags = 0;

 if (!VAR_5)
  return -VAR_0;
 if (VAR_1 != VAR_2) {
  FUNC_1("FAIL: kretprobe handler not called\n");
  return -VAR_0;
 }
 if (!FUNC_0(VAR_4, 0))
  return -VAR_0;
 if (VAR_1 == VAR_2) {
  FUNC_1("FAIL: kretprobe called after unregistering\n");
  return -VAR_0;
 }

 return 0;
}

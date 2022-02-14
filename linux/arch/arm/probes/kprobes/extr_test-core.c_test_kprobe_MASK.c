
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kprobe_opcode_t ;
struct TYPE_4__ {scalar_t__ flags; int * addr; } ;


 int VAR_0 ;
 int FUNC_0 (long (*) (long,long),int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(long (*VAR_5)(long, long))
{
 int VAR_6;

 VAR_4.addr = (kprobe_opcode_t *)VAR_5;
 VAR_6 = FUNC_2(&VAR_4);
 if (VAR_6 < 0) {
  FUNC_1("FAIL: register_kprobe failed with %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_5, 1);

 FUNC_3(&VAR_4);
 VAR_4.flags = 0;

 if (!VAR_6)
  return -VAR_0;
 if (VAR_2 != VAR_3) {
  FUNC_1("FAIL: kprobe pre_handler not called\n");
  return -VAR_0;
 }
 if (VAR_1 != VAR_3) {
  FUNC_1("FAIL: kprobe post_handler not called\n");
  return -VAR_0;
 }
 if (!FUNC_0(VAR_5, 0))
  return -VAR_0;
 if (VAR_2 == VAR_3 ||
    VAR_1 == VAR_3) {
  FUNC_1("FAIL: probe called after unregistering\n");
  return -VAR_0;
 }

 return 0;
}

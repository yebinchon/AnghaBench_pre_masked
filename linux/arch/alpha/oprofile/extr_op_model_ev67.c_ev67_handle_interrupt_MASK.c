
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; } ;
struct op_counter_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long,int,unsigned long,struct op_counter_config*,int ) ;
 int FUNC_1 (unsigned long,int,unsigned long) ;
 int FUNC_2 (struct pt_regs*) ;
 void* FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_8, struct pt_regs *VAR_9,
        struct op_counter_config *VAR_10)
{
 unsigned long VAR_11, VAR_12;
 int VAR_13 = !FUNC_2(VAR_9);
 int VAR_14 = 0;
 union {
  unsigned long v;
  struct {
   unsigned reserved: 30;
   unsigned overcount: 3;
   unsigned icache_miss: 1;
   unsigned trap_type: 4;
   unsigned load_store: 1;
   unsigned trap: 1;
   unsigned mispredict: 1;
  } fields;
 } VAR_15;

 enum trap_types {
  TRAP_REPLAY,
  TRAP_INVALID0,
  TRAP_DTB_DOUBLE_MISS_3,
  TRAP_DTB_DOUBLE_MISS_4,
  TRAP_FP_DISABLED,
  TRAP_UNALIGNED,
  TRAP_DTB_SINGLE_MISS,
  TRAP_DSTREAM_FAULT,
  TRAP_OPCDEC,
  TRAP_INVALID1,
  TRAP_MACHINE_CHECK,
  TRAP_INVALID2,
  TRAP_ARITHMETIC,
  TRAP_INVALID3,
  TRAP_MT_FPCR,
  TRAP_RESET
 };

 VAR_11 = FUNC_3(9, 0);

 if (VAR_11 & 1)
  return;
 VAR_11 &= ~2;

 VAR_15.v = FUNC_3(8, 0);
 if (VAR_15.fields.trap) {
  switch (VAR_15.fields.trap_type) {
  case TRAP_INVALID1:
  case TRAP_INVALID2:
  case TRAP_INVALID3:




   FUNC_1(VAR_9->pc, VAR_13, VAR_8);
   if ((VAR_11 & ((1 << 15) - 1)) == 581)
    FUNC_0(VAR_9->pc, VAR_13, VAR_8,
       VAR_10, VAR_1);



   return;
  case TRAP_REPLAY:
   FUNC_0(VAR_11, VAR_13, VAR_8, VAR_10,
      (VAR_15.fields.load_store
       ? VAR_2 : VAR_4));
   break;
  case TRAP_DTB_DOUBLE_MISS_3:
  case TRAP_DTB_DOUBLE_MISS_4:
  case TRAP_DTB_SINGLE_MISS:
   FUNC_0(VAR_11, VAR_13, VAR_8, VAR_10, VAR_0);
   break;
  case TRAP_UNALIGNED:
   FUNC_0(VAR_11, VAR_13, VAR_8, VAR_10, VAR_7);
   break;
  case TRAP_INVALID0:
  case TRAP_FP_DISABLED:
  case TRAP_DSTREAM_FAULT:
  case TRAP_OPCDEC:
  case TRAP_MACHINE_CHECK:
  case TRAP_ARITHMETIC:
  case TRAP_MT_FPCR:
  case TRAP_RESET:
   break;
  }






  if (VAR_15.fields.mispredict) {
   VAR_14 = 1;
   FUNC_0(VAR_11, VAR_13, VAR_8, VAR_10, VAR_3);
  }
 }

 FUNC_1(VAR_11, VAR_13, VAR_8);

 VAR_12 = FUNC_3(5, 0);
 if (VAR_12 & (1UL << 27))
  FUNC_0(VAR_11, VAR_13, VAR_8, VAR_10, VAR_5);




 if (!VAR_14 && VAR_12 & (1UL << 0))
  FUNC_0(VAR_11, VAR_13, VAR_8, VAR_10, VAR_6);
}

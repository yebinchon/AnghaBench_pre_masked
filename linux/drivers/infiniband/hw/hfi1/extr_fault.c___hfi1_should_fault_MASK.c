
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hfi1_ibdev {TYPE_1__* fault; } ;
struct TYPE_2__ {int direction; scalar_t__ fault_skip_usec; scalar_t__ skip_usec; scalar_t__ fault_skip; scalar_t__ skip; int attr; int opcodes; scalar_t__ opcode; int enable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct hfi1_ibdev *VAR_2, u32 VAR_3,
    u8 VAR_4)
{
 bool VAR_5 = 0;

 if (!VAR_2->fault || !VAR_2->fault->enable)
  return 0;
 if (!(VAR_2->fault->direction & VAR_4))
  return 0;
 if (VAR_2->fault->opcode) {
  if (FUNC_0(VAR_2->fault->opcodes,
     (sizeof(VAR_2->fault->opcodes) *
      VAR_0)))
   return 0;
  if (!(FUNC_2(VAR_3, VAR_2->fault->opcodes)))
   return 0;
 }
 if (VAR_2->fault->fault_skip_usec &&
     FUNC_3(VAR_1, VAR_2->fault->skip_usec))
  return 0;
 if (VAR_2->fault->fault_skip && VAR_2->fault->skip) {
  VAR_2->fault->skip--;
  return 0;
 }
 VAR_5 = FUNC_1(&VAR_2->fault->attr, 1);
 if (VAR_5) {
  VAR_2->fault->skip = VAR_2->fault->fault_skip;
  VAR_2->fault->skip_usec = VAR_1 +
   FUNC_4(VAR_2->fault->fault_skip_usec);
 }
 return VAR_5;
}

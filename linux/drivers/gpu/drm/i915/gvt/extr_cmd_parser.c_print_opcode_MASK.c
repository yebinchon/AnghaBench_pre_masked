
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct decode_info {int op_len; int nr_sub_op; TYPE_1__* sub_op; int name; } ;
struct TYPE_2__ {int low; int hi; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,...) ;
 struct decode_info*** VAR_0 ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(u32 VAR_1, int VAR_2)
{
 const struct decode_info *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0[VAR_2][FUNC_0(VAR_1)];
 if (VAR_3 == ((void*)0))
  return;

 FUNC_1("opcode=0x%x %s sub_ops:",
   VAR_1 >> (32 - VAR_3->op_len), VAR_3->name);

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_sub_op; VAR_4++)
  FUNC_2("0x%x ", FUNC_3(VAR_1, VAR_3->sub_op[VAR_4].hi,
     VAR_3->sub_op[VAR_4].low));

 FUNC_2("\n");
}

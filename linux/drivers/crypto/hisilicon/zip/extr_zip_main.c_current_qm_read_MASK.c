
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;
struct ctrl_debug_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct hisi_qm* FUNC_0 (struct ctrl_debug_file*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct ctrl_debug_file *VAR_1)
{
 struct hisi_qm *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2->io_base + VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;
struct ctrl_debug_file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hisi_qm* FUNC_0 (struct ctrl_debug_file*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ctrl_debug_file *VAR_3, u32 VAR_4)
{
 struct hisi_qm *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (VAR_4 != 1 && VAR_4 != 0)
  return -VAR_0;

 VAR_6 = (FUNC_1(VAR_5->io_base + VAR_1) &
        ~VAR_2) | VAR_4;
 FUNC_2(VAR_6, VAR_5->io_base + VAR_1);

 return 0;
}

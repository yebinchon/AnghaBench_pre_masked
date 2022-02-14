
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;
struct debugfs_file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hisi_qm* FUNC_0 (struct debugfs_file*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct debugfs_file *VAR_2)
{
 struct hisi_qm *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_3->io_base + VAR_1) >> VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct seq_file {int dummy; } ;
struct pasid_entry {int dummy; } ;
struct pasid_dir_entry {int dummy; } ;


 struct pasid_entry* FUNC_0 (struct pasid_dir_entry*) ;
 int FUNC_1 (struct seq_file*,struct pasid_entry*,scalar_t__) ;
 struct pasid_dir_entry* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, u64 VAR_1,
      u16 VAR_2)
{
 struct pasid_dir_entry *VAR_3 = FUNC_2(VAR_1);
 struct pasid_entry *VAR_4;
 u16 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   FUNC_1(VAR_0, VAR_4, VAR_5);

  VAR_3++;
 }
}

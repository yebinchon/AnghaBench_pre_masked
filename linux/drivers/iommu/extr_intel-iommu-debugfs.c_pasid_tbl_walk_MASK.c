
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct tbl_walk {scalar_t__ pasid; struct pasid_entry* pasid_tbl_entry; } ;
struct seq_file {struct tbl_walk* private; } ;
struct pasid_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pasid_entry*) ;
 int FUNC_1 (struct seq_file*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2, struct pasid_entry *VAR_3,
      u16 VAR_4)
{
 struct tbl_walk *VAR_5 = VAR_2->private;
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_0(VAR_3)) {
   VAR_5->pasid_tbl_entry = VAR_3;
   VAR_5->pasid = (VAR_4 << VAR_0) + VAR_6;
   FUNC_1(VAR_2);
  }

  VAR_3++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct ib_gid_attr {scalar_t__ gid_type; scalar_t__ ndev; int gid; } ;
struct ib_gid_table_entry {struct ib_gid_attr attr; } ;
struct ib_gid_table {int sz; struct ib_gid_table_entry** data_vec; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct ib_gid_table_entry*) ;
 int FUNC_1 (struct ib_gid_table_entry*) ;
 int FUNC_2 (struct ib_gid_table*,int) ;
 scalar_t__ FUNC_3 (union ib_gid const*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct ib_gid_table *VAR_4, const union ib_gid *VAR_5,
      const struct ib_gid_attr *VAR_6, bool VAR_7,
      unsigned long VAR_8, int *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = -1;
 int VAR_12 = VAR_9 ? -1 : 0;

 while (VAR_10 < VAR_4->sz && (VAR_11 < 0 || VAR_12 < 0)) {
  struct ib_gid_table_entry *VAR_13 = VAR_4->data_vec[VAR_10];
  struct ib_gid_attr *VAR_14;
  int VAR_15 = VAR_10;

  VAR_10++;






  if (VAR_9 && VAR_12 < 0) {
   if (FUNC_0(VAR_13) &&
       VAR_7 ==
    FUNC_2(VAR_4, VAR_15)) {
    VAR_12 = VAR_15;
   }
  }







  if (!FUNC_1(VAR_13))
   continue;

  if (VAR_11 >= 0)
   continue;

  VAR_14 = &VAR_13->attr;
  if (VAR_8 & VAR_2 &&
      VAR_14->gid_type != VAR_6->gid_type)
   continue;

  if (VAR_8 & VAR_1 &&
      FUNC_3(VAR_5, &VAR_13->attr.gid, sizeof(*VAR_5)))
   continue;

  if (VAR_8 & VAR_3 &&
      VAR_14->ndev != VAR_6->ndev)
   continue;

  if (VAR_8 & VAR_0 &&
      FUNC_2(VAR_4, VAR_15) != VAR_7)
   continue;

  VAR_11 = VAR_15;
 }

 if (VAR_9)
  *VAR_9 = VAR_12;

 return VAR_11;
}

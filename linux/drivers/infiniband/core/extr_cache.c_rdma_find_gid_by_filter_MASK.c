
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef struct ib_gid_attr {int gid; } const ib_gid_attr ;
struct ib_gid_table_entry {struct ib_gid_attr const attr; } ;
struct ib_gid_table {unsigned int sz; int rwlock; struct ib_gid_table_entry** data_vec; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_gid_attr const* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_gid_table_entry*) ;
 int FUNC_2 (struct ib_gid_table_entry*) ;
 scalar_t__ FUNC_3 (union ib_gid const*,int *,int) ;
 struct ib_gid_table* FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (struct ib_device*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

const struct ib_gid_attr *FUNC_8(
 struct ib_device *VAR_2, const union ib_gid *VAR_3, u8 VAR_4,
 bool (*VAR_5)(const union ib_gid *VAR_6, const struct ib_gid_attr *,
         void *),
 void *VAR_7)
{
 const struct ib_gid_attr *VAR_8 = FUNC_0(-VAR_1);
 struct ib_gid_table *VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;

 if (!FUNC_5(VAR_2, VAR_4))
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_4(VAR_2, VAR_4);

 FUNC_6(&VAR_9->rwlock, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_9->sz; VAR_11++) {
  struct ib_gid_table_entry *VAR_12 = VAR_9->data_vec[VAR_11];

  if (!FUNC_2(VAR_12))
   continue;

  if (FUNC_3(VAR_3, &VAR_12->attr.gid, sizeof(*VAR_3)))
   continue;

  if (VAR_5(VAR_3, &VAR_12->attr, VAR_7)) {
   FUNC_1(VAR_12);
   VAR_8 = &VAR_12->attr;
   break;
  }
 }
 FUNC_7(&VAR_9->rwlock, VAR_10);
 return VAR_8;
}

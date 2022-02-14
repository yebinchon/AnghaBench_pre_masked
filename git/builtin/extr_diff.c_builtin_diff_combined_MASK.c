
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dense_combined_merges; int combine_merges; } ;
struct oid_array {int dummy; } ;
struct object_array_entry {TYPE_1__* item; } ;
struct TYPE_2__ {int oid; } ;


 struct oid_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct oid_array*,int,struct rev_info*) ;
 int FUNC_1 (struct oid_array*,int *) ;
 int FUNC_2 (struct oid_array*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rev_info *VAR_2,
     int VAR_3, const char **VAR_4,
     struct object_array_entry *VAR_5,
     int VAR_6)
{
 struct oid_array VAR_7 = VAR_0;
 int VAR_8;

 if (VAR_3 > 1)
  FUNC_3(VAR_1);

 if (!VAR_2->dense_combined_merges && !VAR_2->combine_merges)
  VAR_2->dense_combined_merges = VAR_2->combine_merges = 1;
 for (VAR_8 = 1; VAR_8 < VAR_6; VAR_8++)
  FUNC_1(&VAR_7, &VAR_5[VAR_8].item->oid);
 FUNC_0(&VAR_5[0].item->oid, &VAR_7,
      VAR_2->dense_combined_merges, VAR_2);
 FUNC_2(&VAR_7);
 return 0;
}

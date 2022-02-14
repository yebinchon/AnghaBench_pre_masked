
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {scalar_t__ mode; } ;
struct merge_list {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct merge_list*) ;
 struct merge_list* FUNC_2 (int,struct traverse_info const*,struct name_entry*,struct merge_list*) ;
 int FUNC_3 (struct traverse_info const*,struct name_entry*) ;

__attribute__((used)) static void FUNC_4(const struct traverse_info *VAR_0, struct name_entry VAR_1[3])
{
 struct merge_list *VAR_2 = ((void*)0);
 int VAR_3;
 unsigned VAR_4 = 0, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_5 |= (1 << VAR_3);




  if (!VAR_1[VAR_3].mode || FUNC_0(VAR_1[VAR_3].mode))
   VAR_4 |= (1 << VAR_3);
 }

 FUNC_3(VAR_0, VAR_1);

 if (VAR_4 == VAR_5)
  return;

 if (VAR_1[2].mode && !FUNC_0(VAR_1[2].mode))
  VAR_2 = FUNC_2(3, VAR_0, VAR_1 + 2, VAR_2);
 if (VAR_1[1].mode && !FUNC_0(VAR_1[1].mode))
  VAR_2 = FUNC_2(2, VAR_0, VAR_1 + 1, VAR_2);
 if (VAR_1[0].mode && !FUNC_0(VAR_1[0].mode))
  VAR_2 = FUNC_2(1, VAR_0, VAR_1 + 0, VAR_2);

 FUNC_1(VAR_2);
}

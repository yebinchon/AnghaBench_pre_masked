
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct notes_merge_pair {int obj; } ;


 int FUNC_0 (struct notes_merge_pair*,struct notes_merge_pair*,int) ;
 int FUNC_1 (struct notes_merge_pair*,int ,int) ;
 int FUNC_2 (struct object_id*,int *) ;

__attribute__((used)) static struct notes_merge_pair *FUNC_3(
  struct notes_merge_pair *VAR_0, int VAR_1, struct object_id *VAR_2,
  int VAR_3, int *VAR_4)
{
 static int VAR_5;
 int VAR_6 = VAR_5 < VAR_1 ? VAR_5 : VAR_1 - 1;
 int VAR_7 = 0, VAR_8 = -1;
 while (VAR_6 >= 0 && VAR_6 < VAR_1) {
  VAR_8 = FUNC_2(VAR_2, &VAR_0[VAR_6].obj);
  if (!VAR_8)
   break;
  else if (VAR_8 < 0 && VAR_7 <= 0)
   VAR_6--;
  else if (VAR_8 < 0)
   break;
  else if (VAR_8 > 0 && VAR_7 >= 0)
   VAR_6++;
  else {
   VAR_6++;
   break;
  }
  VAR_7 = VAR_8;
 }
 if (VAR_6 < 0)
  VAR_6 = 0;


 if (!VAR_8)
  *VAR_4 = 1;
 else {
  *VAR_4 = 0;
  if (VAR_3 && VAR_6 < VAR_1) {
   FUNC_0(VAR_0 + VAR_6 + 1, VAR_0 + VAR_6, VAR_1 - VAR_6);
   FUNC_1(VAR_0 + VAR_6, 0, sizeof(struct notes_merge_pair));
  }
 }
 VAR_5 = VAR_6;
 return VAR_0 + VAR_6;
}

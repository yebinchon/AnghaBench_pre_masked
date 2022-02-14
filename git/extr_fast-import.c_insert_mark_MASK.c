
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct object_entry {int dummy; } ;
struct TYPE_2__ {struct object_entry** marked; struct mark_set** sets; } ;
struct mark_set {int shift; TYPE_1__ data; } ;


 int VAR_0 ;
 struct mark_set* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(uintmax_t VAR_3, struct object_entry *VAR_4)
{
 struct mark_set *VAR_5 = VAR_1;
 while ((VAR_3 >> VAR_5->shift) >= 1024) {
  VAR_5 = FUNC_0(&VAR_0, 1, sizeof(struct mark_set));
  VAR_5->shift = VAR_1->shift + 10;
  VAR_5->data.sets[0] = VAR_1;
  VAR_1 = VAR_5;
 }
 while (VAR_5->shift) {
  uintmax_t VAR_6 = VAR_3 >> VAR_5->shift;
  VAR_3 -= VAR_6 << VAR_5->shift;
  if (!VAR_5->data.sets[VAR_6]) {
   VAR_5->data.sets[VAR_6] = FUNC_0(&VAR_0, 1, sizeof(struct mark_set));
   VAR_5->data.sets[VAR_6]->shift = VAR_5->shift - 10;
  }
  VAR_5 = VAR_5->data.sets[VAR_6];
 }
 if (!VAR_5->data.marked[VAR_3])
  VAR_2++;
 VAR_5->data.marked[VAR_3] = VAR_4;
}

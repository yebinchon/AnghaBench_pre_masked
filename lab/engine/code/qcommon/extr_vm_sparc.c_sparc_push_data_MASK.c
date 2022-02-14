
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_info {int data_num; struct data_hunk* data_first; } ;
struct data_hunk {int count; unsigned int* data; struct data_hunk* next; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct data_hunk* FUNC_1 (int) ;
 int * VAR_1 ;

__attribute__((used)) static unsigned int FUNC_2(struct func_info * const VAR_2, unsigned int VAR_3)
{
 struct data_hunk *VAR_4, *VAR_5 = VAR_2->data_first;
 int VAR_6 = 0;

 VAR_4 = ((void*)0);
 while (VAR_5) {
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++) {
   if (VAR_5->data[VAR_7] == VAR_3) {
    VAR_6 += VAR_7;
    return FUNC_0(VAR_1[VAR_6]);
   }
  }
  VAR_6 += VAR_5->count;
  VAR_4 = VAR_5;
  VAR_5 = VAR_5->next;
 }

 VAR_5 = VAR_4;
 if (!VAR_5 || VAR_5->count >= VAR_0) {
  struct data_hunk *VAR_8 = FUNC_1(sizeof(*VAR_8));
  if (!VAR_5)
   VAR_2->data_first = VAR_8;
  else
   VAR_5->next = VAR_8;
  VAR_5 = VAR_8;
  VAR_5->count = 0;
  VAR_5->next = ((void*)0);
 }
 VAR_5->data[VAR_5->count++] = VAR_3;
 VAR_2->data_num = VAR_6 + 1;
 return FUNC_0(VAR_1[VAR_6]);
}

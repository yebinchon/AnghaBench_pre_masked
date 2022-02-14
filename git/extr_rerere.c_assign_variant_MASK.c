
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_id {int variant; struct rerere_dir* collection; } ;
struct rerere_dir {int status_nr; int * status; } ;


 int FUNC_0 (struct rerere_dir*,int) ;

__attribute__((used)) static void FUNC_1(struct rerere_id *VAR_0)
{
 int VAR_1;
 struct rerere_dir *VAR_2 = VAR_0->collection;

 VAR_1 = VAR_0->variant;
 if (VAR_1 < 0) {
  for (VAR_1 = 0; VAR_1 < VAR_2->status_nr; VAR_1++)
   if (!VAR_2->status[VAR_1])
    break;
 }
 FUNC_0(VAR_2, VAR_1);
 VAR_0->variant = VAR_1;
}

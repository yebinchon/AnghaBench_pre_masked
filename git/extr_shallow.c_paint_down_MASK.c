
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct paint_info {int ref_bitmap; int nr_bits; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (unsigned int*) ;
 struct object* FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 () ;
 struct commit* FUNC_6 (int ,struct object_id const*,int) ;
 scalar_t__ FUNC_7 (unsigned int*,unsigned int*,size_t) ;
 int FUNC_8 (unsigned int*,unsigned int*,size_t) ;
 int FUNC_9 (unsigned int*,int ,size_t) ;
 int FUNC_10 (int *) ;
 unsigned int* FUNC_11 (struct paint_info*) ;
 scalar_t__ FUNC_12 (struct commit*) ;
 struct commit* FUNC_13 (struct commit_list**) ;
 unsigned int** FUNC_14 (int *,struct commit*) ;
 size_t FUNC_15 (int,int) ;
 int VAR_4 ;
 unsigned int* FUNC_16 (size_t) ;

__attribute__((used)) static void FUNC_17(struct paint_info *VAR_5, const struct object_id *VAR_6,
         unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct commit_list *VAR_10 = ((void*)0);
 int VAR_11 = FUNC_0(VAR_5->nr_bits, 32);
 size_t VAR_12 = FUNC_15(sizeof(uint32_t), VAR_11);
 struct commit *VAR_13 = FUNC_6(VAR_4, VAR_6,
         1);
 uint32_t *VAR_14;
 uint32_t *VAR_15;

 if (!VAR_13)
  return;

 VAR_14 = FUNC_16(VAR_12);
 VAR_15 = FUNC_11(VAR_5);
 FUNC_9(VAR_15, 0, VAR_12);
 VAR_15[VAR_7 / 32] |= (1U << (VAR_7 % 32));
 FUNC_1(VAR_13, &VAR_10);
 while (VAR_10) {
  struct commit_list *VAR_16;
  struct commit *VAR_17 = FUNC_13(&VAR_10);
  uint32_t **VAR_18 = FUNC_14(&VAR_5->ref_bitmap, VAR_17);


  if (VAR_17->object.flags & (VAR_2 | VAR_3))
   continue;
  else
   VAR_17->object.flags |= VAR_2;

  if (*VAR_18 == ((void*)0))
   *VAR_18 = VAR_15;
  else {
   FUNC_8(VAR_14, *VAR_18, VAR_12);
   for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
    VAR_14[VAR_8] |= VAR_15[VAR_8];
   if (FUNC_7(VAR_14, *VAR_18, VAR_12)) {
    *VAR_18 = FUNC_11(VAR_5);
    FUNC_8(*VAR_18, VAR_14, VAR_12);
   }
  }

  if (VAR_17->object.flags & VAR_0)
   continue;

  if (FUNC_12(VAR_17))
   FUNC_2("unable to parse commit %s",
       FUNC_10(&VAR_17->object.oid));

  for (VAR_16 = VAR_17->parents; VAR_16; VAR_16 = VAR_16->next) {
   if (VAR_16->item->object.flags & VAR_2)
    continue;
   FUNC_1(VAR_16->item, &VAR_10);
  }
 }

 VAR_9 = FUNC_5();
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  struct object *VAR_19 = FUNC_4(VAR_8);
  if (VAR_19 && VAR_19->type == VAR_1)
   VAR_19->flags &= ~VAR_2;
 }

 FUNC_3(VAR_14);
}

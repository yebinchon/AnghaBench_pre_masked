
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct prio_queue {int member_0; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {scalar_t__ generation; TYPE_1__ object; struct commit_list* parents; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct commit**,int) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int VAR_3 ;
 int FUNC_2 (struct commit*) ;
 struct commit* FUNC_3 (struct prio_queue*) ;
 int FUNC_4 (struct prio_queue*,struct commit*) ;

struct commit_list *FUNC_5(struct commit **VAR_4, int VAR_5,
      struct commit **VAR_6, int VAR_7,
      unsigned int VAR_8)
{
 struct commit **VAR_9;
 struct commit *VAR_10;
 struct commit_list *VAR_11 = ((void*)0);
 struct commit **VAR_12 = VAR_6 + VAR_7;
 struct commit **VAR_13 = VAR_4 + VAR_5;
 uint32_t VAR_14 = VAR_0;
 int VAR_15 = 0;

 struct prio_queue VAR_16 = { VAR_3 };

 for (VAR_9 = VAR_6; VAR_9 < VAR_12; VAR_9++) {
  struct commit *VAR_17 = *VAR_9;

  FUNC_2(VAR_17);
  if (VAR_17->generation < VAR_14)
   VAR_14 = VAR_17->generation;

  if (!(VAR_17->object.flags & VAR_1)) {
   VAR_17->object.flags |= VAR_1;
   VAR_15++;
  }
 }

 for (VAR_9 = VAR_4; VAR_9 < VAR_13; VAR_9++) {
  struct commit *VAR_18 = *VAR_9;
  if (!(VAR_18->object.flags & VAR_2)) {
   VAR_18->object.flags |= VAR_2;
   FUNC_2(VAR_18);

   FUNC_4(&VAR_16, *VAR_9);
  }
 }

 while (VAR_15 && (VAR_10 = FUNC_3(&VAR_16)) != ((void*)0)) {
  struct commit_list *VAR_19;

  if (VAR_10->object.flags & VAR_1) {
   VAR_10->object.flags &= ~VAR_1;
   VAR_10->object.flags |= VAR_8;
   FUNC_1(VAR_10, &VAR_11);
   VAR_15--;
  }

  for (VAR_19 = VAR_10->parents; VAR_19; VAR_19 = VAR_19->next) {
   struct commit *VAR_20 = VAR_19->item;

   FUNC_2(VAR_20);

   if (VAR_20->generation < VAR_14)
    continue;

   if (VAR_20->object.flags & VAR_2)
    continue;

   VAR_20->object.flags |= VAR_2;
   FUNC_4(&VAR_16, VAR_20);
  }
 }

 FUNC_0(VAR_7, VAR_6, VAR_1);
 FUNC_0(VAR_5, VAR_4, VAR_2);

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct object_array {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {scalar_t__ date; scalar_t__ generation; TYPE_3__ object; } ;


 scalar_t__ VAR_0 ;
 struct object_array VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int *,struct object_array*) ;
 int FUNC_1 (struct object_array*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct object_array*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct commit_list *VAR_4, struct commit_list *VAR_5,
         int VAR_6)
{
 struct object_array VAR_7 = VAR_1;
 time_t VAR_8 = VAR_6 ? VAR_4->item->date : 0;
 struct commit_list *VAR_9 = VAR_4, *VAR_10 = VAR_5;
 int VAR_11;
 uint32_t VAR_12 = VAR_0;

 while (VAR_9) {
  FUNC_0(&VAR_9->item->object, ((void*)0), &VAR_7);

  if (!FUNC_4(VAR_9->item)) {
   if (VAR_9->item->date < VAR_8)
    VAR_8 = VAR_9->item->date;

   if (VAR_9->item->generation < VAR_12)
    VAR_12 = VAR_9->item->generation;
  }

  VAR_9 = VAR_9->next;
 }

 while (VAR_10) {
  if (!FUNC_4(VAR_10->item)) {
   if (VAR_10->item->date < VAR_8)
    VAR_8 = VAR_10->item->date;

   if (VAR_10->item->generation < VAR_12)
    VAR_12 = VAR_10->item->generation;
  }

  VAR_10->item->object.flags |= VAR_3;

  VAR_10 = VAR_10->next;
 }

 VAR_11 = FUNC_1(&VAR_7, VAR_3, VAR_2,
           VAR_8, VAR_12);

 while (VAR_4) {
  FUNC_2(VAR_4->item, VAR_2);
  VAR_4 = VAR_4->next;
 }

 while (VAR_5) {
  FUNC_2(VAR_5->item, VAR_3);
  VAR_5 = VAR_5->next;
 }

 FUNC_3(&VAR_7);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_writer {int dummy; } ;
struct object_array {int nr; TYPE_1__* objects; } ;
struct object {int flags; } ;
struct commit_list {int dummy; } ;
struct TYPE_2__ {struct object* item; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct object_array VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct commit_list*) ;
 int FUNC_2 (struct object_array*,struct object_array*) ;
 struct commit_list* FUNC_3 (struct object_array*,int,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct object_array*) ;
 int FUNC_7 (struct packet_writer*,struct commit_list*) ;
 int FUNC_8 (struct packet_writer*,struct object_array*,struct object_array*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(struct packet_writer *VAR_6, int VAR_7, int VAR_8,
     struct object_array *VAR_9, struct object_array *VAR_10)
{
 if (VAR_7 == VAR_0 && !FUNC_5(VAR_5)) {
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_9->nr; VAR_11++) {
   struct object *VAR_12 = VAR_9->objects[VAR_11].item;
   VAR_12->flags |= VAR_1;
  }
 } else if (VAR_8) {
  struct object_array VAR_13 = VAR_2;
  struct commit_list *VAR_14;





  FUNC_4(VAR_4, ((void*)0));
  FUNC_0(VAR_4, ((void*)0));

  FUNC_2(VAR_9, &VAR_13);
  VAR_14 = FUNC_3(&VAR_13,
          VAR_7 + 1,
          VAR_3, VAR_1);
  FUNC_7(VAR_6, VAR_14);
  FUNC_1(VAR_14);
  FUNC_6(&VAR_13);
 } else {
  struct commit_list *VAR_15;

  VAR_15 = FUNC_3(VAR_10, VAR_7,
          VAR_3, VAR_1);
  FUNC_7(VAR_6, VAR_15);
  FUNC_1(VAR_15);
 }

 FUNC_8(VAR_6, VAR_9, VAR_10);
}

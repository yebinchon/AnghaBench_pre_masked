
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int oid; } ;
struct object_entry {TYPE_1__ idx; int preferred_base; scalar_t__ no_try_delta; int type_valid; } ;
struct TYPE_6__ {scalar_t__ nr_objects; struct object_entry* objects; } ;


 int FUNC_0 (struct object_entry**,scalar_t__) ;
 scalar_t__ FUNC_1 (struct object_entry*) ;
 int FUNC_2 (struct object_entry**,unsigned int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,...) ;
 int VAR_0 ;
 int FUNC_5 (struct object_entry**) ;
 int FUNC_6 () ;
 int FUNC_7 (struct object_entry**,unsigned int,int,int,unsigned int*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct object_entry*,int) ;
 scalar_t__ FUNC_9 (struct object_entry*) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ,scalar_t__,TYPE_2__*) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_14(int VAR_8, int VAR_9)
{
 struct object_entry **VAR_10;
 uint32_t VAR_11, VAR_12;
 unsigned VAR_13;

 if (VAR_7)
  FUNC_11(VAR_4, VAR_2, &VAR_5);

 FUNC_6();
 if (!VAR_1)
  VAR_0 = 1;

 if (!VAR_5.nr_objects || !VAR_8 || !VAR_9)
  return;

 FUNC_0(VAR_10, VAR_5.nr_objects);
 VAR_12 = VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_5.nr_objects; VAR_11++) {
  struct object_entry *VAR_14 = VAR_5.objects + VAR_11;

  if (FUNC_1(VAR_14))



   continue;

  if (!VAR_14->type_valid ||
      FUNC_8(&VAR_5, VAR_14, 50))
   continue;

  if (VAR_14->no_try_delta)
   continue;

  if (!VAR_14->preferred_base) {
   VAR_12++;
   if (FUNC_9(VAR_14) < 0)
    FUNC_4(FUNC_3("unable to get type of object %s"),
        FUNC_10(&VAR_14->idx.oid));
  } else {
   if (FUNC_9(VAR_14) < 0) {




    continue;
   }
  }

  VAR_10[VAR_13++] = VAR_14;
 }

 if (VAR_12 && VAR_13 > 1) {
  unsigned VAR_15 = 0;
  if (VAR_2)
   VAR_3 = FUNC_12(FUNC_3("Compressing objects"),
       VAR_12);
  FUNC_2(VAR_10, VAR_13, VAR_6);
  FUNC_7(VAR_10, VAR_13, VAR_8+1, VAR_9, &VAR_15);
  FUNC_13(&VAR_3);
  if (VAR_15 != VAR_12)
   FUNC_4(FUNC_3("inconsistency with delta count"));
 }
 FUNC_5(VAR_10);
}

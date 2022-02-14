
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct object_entry {int no_try_delta; scalar_t__ type_valid; } ;
struct TYPE_3__ {size_t nr_objects; struct object_entry* objects; } ;


 int FUNC_0 (struct object_entry**,size_t,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct object_entry*) ;
 int FUNC_3 (struct object_entry*) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct object_entry**) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct object_entry*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int *) ;
 TYPE_1__ VAR_4 ;
 struct object_entry** FUNC_9 (size_t,int) ;

__attribute__((used)) static void FUNC_10(void)
{
 uint32_t VAR_5;
 struct object_entry **VAR_6;

 if (VAR_2)
  VAR_3 = FUNC_7(FUNC_1("Counting objects"),
      VAR_4.nr_objects);

 VAR_6 = FUNC_9(VAR_4.nr_objects, sizeof(struct object_entry *));
 for (VAR_5 = 0; VAR_5 < VAR_4.nr_objects; VAR_5++)
  VAR_6[VAR_5] = VAR_4.objects + VAR_5;
 FUNC_0(VAR_6, VAR_4.nr_objects, VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_4.nr_objects; VAR_5++) {
  struct object_entry *VAR_7 = VAR_6[VAR_5];
  FUNC_3(VAR_7);
  if (VAR_7->type_valid &&
      FUNC_6(&VAR_4, VAR_7, VAR_0))
   VAR_7->no_try_delta = 1;
  FUNC_4(VAR_3, VAR_5 + 1);
 }
 FUNC_8(&VAR_3);





 for (VAR_5 = 0; VAR_5 < VAR_4.nr_objects; VAR_5++)
  FUNC_2(&VAR_4.objects[VAR_5]);

 FUNC_5(VAR_6);
}

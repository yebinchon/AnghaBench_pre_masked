
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int hash; } ;
struct ref_delta_entry {size_t obj_no; TYPE_1__ oid; } ;
struct oid_array {scalar_t__ nr; int oid; } ;
struct hashfile {int dummy; } ;
struct base_data {int size; int data; int obj; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_8__ {scalar_t__ real_type; } ;


 int FUNC_0 (struct ref_delta_entry**,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct oid_array VAR_2 ;
 int FUNC_1 (struct ref_delta_entry**,int,int ) ;
 int FUNC_2 (char*) ;
 struct base_data* FUNC_3 () ;
 int FUNC_4 (struct hashfile*,int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct base_data*) ;
 int FUNC_9 (struct ref_delta_entry**) ;
 scalar_t__ FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_11 (struct oid_array*,TYPE_1__*) ;
 int FUNC_12 (struct oid_array*) ;
 int FUNC_13 (int ,TYPE_1__*,int *,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_15 (int ,int ,scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int*,int *) ;
 struct ref_delta_entry* VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(struct hashfile *VAR_10)
{
 struct ref_delta_entry **VAR_11;
 int VAR_12;
 FUNC_0(VAR_11, VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  VAR_11[VAR_12] = &VAR_8[VAR_12];
 FUNC_1(VAR_11, VAR_4, VAR_3);

 if (FUNC_10()) {



  struct oid_array VAR_13 = VAR_2;
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   struct ref_delta_entry *VAR_14 = VAR_11[VAR_12];
   if (!FUNC_13(VAR_9, &VAR_14->oid,
            ((void*)0),
            VAR_0))
    continue;
   FUNC_11(&VAR_13, &VAR_14->oid);
  }
  if (VAR_13.nr)
   FUNC_15(VAR_9,
         VAR_13.oid, VAR_13.nr);
  FUNC_12(&VAR_13);
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  struct ref_delta_entry *VAR_15 = VAR_11[VAR_12];
  enum object_type VAR_16;
  struct base_data *VAR_17 = FUNC_3();

  if (VAR_6[VAR_15->obj_no].real_type != VAR_1)
   continue;
  VAR_17->data = FUNC_16(&VAR_15->oid, &VAR_16,
        &VAR_17->size);
  if (!VAR_17->data)
   continue;

  if (FUNC_5(&VAR_15->oid, VAR_17->data,
    VAR_17->size, FUNC_17(VAR_16)))
   FUNC_6(FUNC_2("local object %s is corrupt"), FUNC_14(&VAR_15->oid));
  VAR_17->obj = FUNC_4(VAR_10, VAR_15->oid.hash,
     VAR_17->data, VAR_17->size, VAR_16);
  FUNC_8(VAR_17);
  FUNC_7(VAR_7, VAR_5);
 }
 FUNC_9(VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; int offset; } ;
struct object_entry {TYPE_1__ idx; int real_type; int size; } ;
struct base_data {int size; int data; struct object_entry* obj; } ;
struct TYPE_4__ {scalar_t__ delta_depth; int base_object_no; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (struct base_data*) ;
 void* FUNC_8 (struct object_entry*) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct object_entry* VAR_3 ;
 int FUNC_10 (void*,int ,void*,int ,int *) ;
 int FUNC_11 (int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct object_entry *VAR_5,
     struct base_data *VAR_6, struct base_data *VAR_7)
{
 void *VAR_8, *VAR_9;

 if (VAR_4) {
  int VAR_10 = VAR_5 - VAR_3;
  int VAR_11 = VAR_6->obj - VAR_3;
  VAR_2[VAR_10].delta_depth = VAR_2[VAR_11].delta_depth + 1;
  FUNC_4();
  if (VAR_0 < VAR_2[VAR_10].delta_depth)
   VAR_0 = VAR_2[VAR_10].delta_depth;
  FUNC_5();
  VAR_2[VAR_10].base_object_no = VAR_11;
 }
 VAR_9 = FUNC_8(VAR_5);
 VAR_8 = FUNC_7(VAR_6);
 VAR_7->obj = VAR_5;
 VAR_7->data = FUNC_10(VAR_8, VAR_6->size,
       VAR_9, VAR_5->size, &VAR_7->size);
 FUNC_6(VAR_9);
 if (!VAR_7->data)
  FUNC_1(VAR_5->idx.offset, FUNC_0("failed to apply delta"));
 FUNC_9(VAR_7->data, VAR_7->size,
    FUNC_12(VAR_5->real_type), &VAR_5->idx.oid);
 FUNC_11(VAR_7->data, ((void*)0), VAR_7->size, VAR_5->real_type,
      &VAR_5->idx.oid);
 FUNC_2();
 VAR_1++;
 FUNC_3();
}

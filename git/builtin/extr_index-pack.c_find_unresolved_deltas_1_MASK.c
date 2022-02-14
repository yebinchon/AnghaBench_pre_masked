
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct object_entry {scalar_t__ real_type; } ;
struct base_data {int ref_last; int ofs_last; size_t ref_first; size_t ofs_first; TYPE_2__* obj; int data; } ;
struct TYPE_8__ {int obj_no; } ;
struct TYPE_7__ {int obj_no; } ;
struct TYPE_5__ {int offset; int oid; } ;
struct TYPE_6__ {scalar_t__ real_type; TYPE_1__ idx; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct base_data* FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_4 (int ,size_t*,int*,scalar_t__) ;
 int FUNC_5 (int *,size_t*,int*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct base_data*) ;
 int FUNC_8 (struct base_data*,struct base_data*) ;
 struct object_entry* VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_9 (struct object_entry*,struct base_data*,struct base_data*) ;
 int FUNC_10 (struct base_data*) ;

__attribute__((used)) static struct base_data *FUNC_11(struct base_data *VAR_5,
        struct base_data *VAR_6)
{
 if (VAR_5->ref_last == -1 && VAR_5->ofs_last == -1) {
  FUNC_5(&VAR_5->obj->idx.oid,
     &VAR_5->ref_first, &VAR_5->ref_last,
     VAR_1);

  FUNC_4(VAR_5->obj->idx.offset,
     &VAR_5->ofs_first, &VAR_5->ofs_last,
     VAR_0);

  if (VAR_5->ref_last == -1 && VAR_5->ofs_last == -1) {
   FUNC_6(VAR_5->data);
   return ((void*)0);
  }

  FUNC_8(VAR_6, VAR_5);
 }

 if (VAR_5->ref_first <= VAR_5->ref_last) {
  struct object_entry *VAR_7 = VAR_2 + VAR_4[VAR_5->ref_first].obj_no;
  struct base_data *VAR_8 = FUNC_1();

  if (!FUNC_3(&VAR_7->real_type, VAR_1,
        VAR_5->obj->real_type))
   FUNC_0("child->real_type != OBJ_REF_DELTA");

  FUNC_9(VAR_7, VAR_5, VAR_8);
  if (VAR_5->ref_first == VAR_5->ref_last && VAR_5->ofs_last == -1)
   FUNC_7(VAR_5);

  VAR_5->ref_first++;
  return VAR_8;
 }

 if (VAR_5->ofs_first <= VAR_5->ofs_last) {
  struct object_entry *VAR_9 = VAR_2 + VAR_3[VAR_5->ofs_first].obj_no;
  struct base_data *VAR_10 = FUNC_1();

  FUNC_2(VAR_9->real_type == VAR_0);
  VAR_9->real_type = VAR_5->obj->real_type;
  FUNC_9(VAR_9, VAR_5, VAR_10);
  if (VAR_5->ofs_first == VAR_5->ofs_last)
   FUNC_7(VAR_5);

  VAR_5->ofs_first++;
  return VAR_10;
 }

 FUNC_10(VAR_5);
 return ((void*)0);
}

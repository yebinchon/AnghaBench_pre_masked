
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object_context {int dummy; } ;
struct list_objects_filter_options {int sparse_oid_name; } ;
struct filter_sparse_data {int nr; TYPE_1__* array_frame; int alloc; int pl; } ;
struct filter {int free_fn; int filter_object_fn; struct filter_sparse_data* filter_data; } ;
struct TYPE_2__ {scalar_t__ child_prov_omit; scalar_t__ default_match; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct object_id*,char*,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int ,struct object_id*,struct object_context*) ;
 int FUNC_5 (struct object_id*) ;
 int VAR_3 ;
 struct filter_sparse_data* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(
 struct list_objects_filter_options *VAR_4,
 struct filter *VAR_5)
{
 struct filter_sparse_data *VAR_6 = FUNC_6(1, sizeof(*VAR_6));
 struct object_context VAR_7;
 struct object_id VAR_8;

 if (FUNC_4(VAR_3,
     VAR_4->sparse_oid_name,
     VAR_0, &VAR_8, &VAR_7))
  FUNC_3(FUNC_1("unable to access sparse blob in '%s'"),
      VAR_4->sparse_oid_name);
 if (FUNC_2(&VAR_8, "", 0, &VAR_6->pl) < 0)
  FUNC_3(FUNC_1("unable to parse sparse filter data in %s"),
      FUNC_5(&VAR_8));

 FUNC_0(VAR_6->array_frame, VAR_6->nr + 1, VAR_6->alloc);
 VAR_6->array_frame[VAR_6->nr].default_match = 0;
 VAR_6->array_frame[VAR_6->nr].child_prov_omit = 0;
 VAR_6->nr++;

 VAR_5->filter_data = VAR_6;
 VAR_5->filter_object_fn = VAR_1;
 VAR_5->free_fn = VAR_2;
}

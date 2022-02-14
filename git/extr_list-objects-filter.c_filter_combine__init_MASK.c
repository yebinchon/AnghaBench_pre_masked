
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_objects_filter_options {int sub_nr; int * sub; } ;
struct filter {int finalize_omits_fn; int free_fn; int filter_object_fn; struct combine_filter_data* filter_data; scalar_t__ omits; } ;
struct combine_filter_data {int nr; TYPE_1__* sub; } ;
struct TYPE_2__ {int omits; int filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(
 struct list_objects_filter_options *VAR_3,
 struct filter* VAR_4)
{
 struct combine_filter_data *VAR_5 = FUNC_1(1, sizeof(*VAR_5));
 size_t VAR_6;

 VAR_5->nr = VAR_3->sub_nr;
 VAR_5->sub = FUNC_1(VAR_5->nr, sizeof(*VAR_5->sub));
 for (VAR_6 = 0; VAR_6 < VAR_5->nr; VAR_6++)
  VAR_5->sub[VAR_6].filter = FUNC_0(
   VAR_4->omits ? &VAR_5->sub[VAR_6].omits : ((void*)0),
   &VAR_3->sub[VAR_6]);

 VAR_4->filter_data = VAR_5;
 VAR_4->filter_object_fn = VAR_0;
 VAR_4->free_fn = VAR_2;
 VAR_4->finalize_omits_fn = VAR_1;
}

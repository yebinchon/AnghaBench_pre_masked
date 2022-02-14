
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {int blob_limit_value; } ;
struct filter_blobs_limit_data {int max_bytes; } ;
struct filter {int free_fn; int filter_object_fn; struct filter_blobs_limit_data* filter_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filter_blobs_limit_data* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(
 struct list_objects_filter_options *VAR_2,
 struct filter *VAR_3)
{
 struct filter_blobs_limit_data *VAR_4 = FUNC_0(1, sizeof(*VAR_4));
 VAR_4->max_bytes = VAR_2->blob_limit_value;

 VAR_3->filter_data = VAR_4;
 VAR_3->filter_object_fn = VAR_0;
 VAR_3->free_fn = VAR_1;
}

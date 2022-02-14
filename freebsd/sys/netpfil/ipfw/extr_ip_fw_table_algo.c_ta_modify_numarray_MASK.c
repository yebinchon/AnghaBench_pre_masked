
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct table_info {void* state; } ;
struct numarray_cfg {void* main_ptr; int size; } ;
struct mod_item {void* main_ptr; int size; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, struct table_info *VAR_1, void *VAR_2,
    uint64_t VAR_3)
{
 struct mod_item *VAR_4;
 struct numarray_cfg *VAR_5;
 void *VAR_6;

 VAR_4 = (struct mod_item *)VAR_2;
 VAR_5 = (struct numarray_cfg *)VAR_0;

 VAR_6 = VAR_5->main_ptr;
 VAR_5->main_ptr = VAR_4->main_ptr;
 VAR_5->size = VAR_4->size;
 VAR_1->state = VAR_5->main_ptr;

 VAR_4->main_ptr = VAR_6;
}

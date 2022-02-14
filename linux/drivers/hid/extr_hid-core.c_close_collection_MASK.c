
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_parser {int collection_stack_ptr; int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct hid_parser *VAR_1)
{
 if (!VAR_1->collection_stack_ptr) {
  FUNC_0(VAR_1->device, "collection stack underflow\n");
  return -VAR_0;
 }
 VAR_1->collection_stack_ptr--;
 return 0;
}

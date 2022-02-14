
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct guc_ct_buffer_desc {scalar_t__ is_in_error; scalar_t__ tail; scalar_t__ head; } ;


 int FUNC_0 (char*,struct guc_ct_buffer_desc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct guc_ct_buffer_desc *VAR_0)
{
 FUNC_0("CT: desc %p reset head=%u tail=%u\n",
   VAR_0, VAR_0->head, VAR_0->tail);
 VAR_0->head = 0;
 VAR_0->tail = 0;
 VAR_0->is_in_error = 0;
}

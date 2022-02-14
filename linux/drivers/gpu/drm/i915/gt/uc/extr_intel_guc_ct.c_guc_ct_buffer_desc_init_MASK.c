
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct guc_ct_buffer_desc {void* owner; void* size; void* addr; } ;


 int FUNC_0 (char*,struct guc_ct_buffer_desc*,void*,void*,void*) ;
 int FUNC_1 (struct guc_ct_buffer_desc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct guc_ct_buffer_desc *VAR_0,
        u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_0("CT: desc %p init addr=%#x size=%u owner=%u\n",
   VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->addr = VAR_1;
 VAR_0->size = VAR_2;
 VAR_0->owner = VAR_3;
}

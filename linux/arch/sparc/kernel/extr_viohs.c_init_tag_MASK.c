
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct vio_msg_tag {int stype_env; void* stype; void* type; } ;



__attribute__((used)) static void FUNC_0(struct vio_msg_tag *VAR_0, u8 VAR_1, u8 VAR_2, u16 VAR_3)
{
 VAR_0->type = VAR_1;
 VAR_0->stype = VAR_2;
 VAR_0->stype_env = VAR_3;
}

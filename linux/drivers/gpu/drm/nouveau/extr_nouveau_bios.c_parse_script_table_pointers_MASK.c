
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct nvbios {int * data; int init_script_tbls_ptr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nvbios *VAR_0, uint16_t VAR_1)
{
 VAR_0->init_script_tbls_ptr = FUNC_0(VAR_0->data[VAR_1]);
}

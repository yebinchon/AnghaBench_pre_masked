
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct BD_HEADER {int size; } ;


 int FUNC_0 (int ) ;

u32 FUNC_1(u8 *VAR_0)
{
 struct BD_HEADER *VAR_1;
 u32 VAR_2;


 VAR_1 = (struct BD_HEADER *)(VAR_0 + 8);
 VAR_2 = FUNC_0(VAR_1->size);

 return VAR_2;
}

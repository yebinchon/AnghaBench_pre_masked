
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {scalar_t__ size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int *,scalar_t__) ;

int
FUNC_3(struct nvkm_bios *VAR_2, u32 VAR_3)
{
 if (VAR_2->size < VAR_3) {
  u8 *VAR_4 = VAR_2->data;
  if (!(VAR_2->data = FUNC_1(VAR_3, VAR_1))) {
   VAR_2->data = VAR_4;
   return -VAR_0;
  }
  FUNC_2(VAR_2->data, VAR_4, VAR_2->size);
  VAR_2->size = VAR_3;
  FUNC_0(VAR_4);
  return 1;
 }
 return 0;
}

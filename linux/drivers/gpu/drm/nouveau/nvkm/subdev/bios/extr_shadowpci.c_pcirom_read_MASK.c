
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct priv {scalar_t__ size; scalar_t__ rom; } ;
struct nvkm_bios {scalar_t__ data; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(void *VAR_0, u32 VAR_1, u32 VAR_2, struct nvkm_bios *VAR_3)
{
 struct priv *VAR_4 = VAR_0;
 if (VAR_1 + VAR_2 <= VAR_4->size) {
  FUNC_0(VAR_3->data + VAR_1, VAR_4->rom + VAR_1, VAR_2);
  return VAR_2;
 }
 return 0;
}

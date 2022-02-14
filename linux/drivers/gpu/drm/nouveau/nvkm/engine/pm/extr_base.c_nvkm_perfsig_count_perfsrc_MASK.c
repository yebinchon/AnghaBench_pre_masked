
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nvkm_perfsig {scalar_t__* source; } ;


 size_t FUNC_0 (scalar_t__*) ;

__attribute__((used)) static u8
FUNC_1(struct nvkm_perfsig *VAR_0)
{
 u8 VAR_1 = 0, VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->source); VAR_2++) {
  if (VAR_0->source[VAR_2])
   VAR_1++;
 }
 return VAR_1;
}

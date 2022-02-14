
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_gisb_arb_device {int* gisb_offsets; scalar_t__ base; scalar_t__ big_endian; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct brcmstb_gisb_arb_device *VAR_0, u32 VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->gisb_offsets[VAR_2];

 if (VAR_3 == -1)
  return;

 if (VAR_0->big_endian)
  FUNC_1(VAR_1, VAR_0->base + VAR_3);
 else
  FUNC_0(VAR_1, VAR_0->base + VAR_3);
}

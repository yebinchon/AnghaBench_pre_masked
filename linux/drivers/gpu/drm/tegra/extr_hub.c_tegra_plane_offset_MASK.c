
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_plane {unsigned int offset; TYPE_1__* dc; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct tegra_plane *VAR_0,
           unsigned int VAR_1)
{
 if (VAR_1 >= 0x500 && VAR_1 <= 0x581) {
  VAR_1 = 0x000 + (VAR_1 - 0x500);
  return VAR_0->offset + VAR_1;
 }

 if (VAR_1 >= 0x700 && VAR_1 <= 0x73c) {
  VAR_1 = 0x180 + (VAR_1 - 0x700);
  return VAR_0->offset + VAR_1;
 }

 if (VAR_1 >= 0x800 && VAR_1 <= 0x83e) {
  VAR_1 = 0x1c0 + (VAR_1 - 0x800);
  return VAR_0->offset + VAR_1;
 }

 FUNC_0(VAR_0->dc->dev, "invalid offset: %x\n", VAR_1);

 return VAR_0->offset + VAR_1;
}

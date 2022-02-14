
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {scalar_t__ family; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int*) ;

__attribute__((used)) static u32 FUNC_4(struct radeon_device *VAR_5)
{
 u32 VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_1(VAR_2);




 if (VAR_5->family == VAR_0 ||
     VAR_5->family >= VAR_1) {
  FUNC_2(VAR_4, VAR_3,
         ~VAR_3);
  FUNC_0("Generation 2 PCI interface, using max accessible memory\n");
  return VAR_6 * 2;
 }





 FUNC_3(VAR_5->pdev, 0xe, &VAR_7);
 if (VAR_7 & 0x80) {
  FUNC_0("Generation 1 PCI interface in multifunction mode\n");
  FUNC_0("Limiting VRAM to one aperture\n");
  return VAR_6;
 }





 if (FUNC_1(VAR_4) & VAR_3)
  return VAR_6 * 2;
 return VAR_6;
}

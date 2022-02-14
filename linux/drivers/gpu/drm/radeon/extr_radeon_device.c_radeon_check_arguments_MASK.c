
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int gtt_size; } ;
struct radeon_device {int dev; TYPE_1__ mc; int family; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5)
{

 if (!FUNC_2(VAR_4)) {
  FUNC_0(VAR_5->dev, "vram limit (%d) must be a power of 2\n",
    VAR_4);
  VAR_4 = 0;
 }

 if (VAR_1 == -1) {
  VAR_1 = FUNC_3(VAR_5->family);
 }

 if (VAR_1 < 32) {
  FUNC_0(VAR_5->dev, "gart size (%d) too small\n",
    VAR_1);
  VAR_1 = FUNC_3(VAR_5->family);
 } else if (!FUNC_2(VAR_1)) {
  FUNC_0(VAR_5->dev, "gart size (%d) must be a power of 2\n",
    VAR_1);
  VAR_1 = FUNC_3(VAR_5->family);
 }
 VAR_5->mc.gtt_size = (uint64_t)VAR_1 << 20;


 switch (VAR_0) {
 case -1:
 case 0:
 case 1:
 case 2:
 case 4:
 case 8:
  break;
 default:
  FUNC_0(VAR_5->dev, "invalid AGP mode %d (valid mode: "
    "-1, 0, 1, 2, 4, 8)\n", VAR_0);
  VAR_0 = 0;
  break;
 }

 if (!FUNC_2(VAR_3)) {
  FUNC_0(VAR_5->dev, "VM size (%d) must be a power of 2\n",
    VAR_3);
  VAR_3 = 4;
 }

 if (VAR_3 < 1) {
  FUNC_0(VAR_5->dev, "VM size (%d) too small, min is 1GB\n",
    VAR_3);
  VAR_3 = 4;
 }




 if (VAR_3 > 1024) {
  FUNC_0(VAR_5->dev, "VM size (%d) too large, max is 1TB\n",
    VAR_3);
  VAR_3 = 4;
 }




 if (VAR_2 == -1) {


  unsigned VAR_6 = FUNC_1(VAR_3) + 18;



  if (VAR_3 <= 8)
   VAR_2 = VAR_6 - 9;
  else
   VAR_2 = (VAR_6 + 3) / 2;

 } else if (VAR_2 < 9) {
  FUNC_0(VAR_5->dev, "VM page table size (%d) too small\n",
    VAR_2);
  VAR_2 = 9;
 }

 if (VAR_2 > 24 ||
     (VAR_3 * 1024) < (1ull << VAR_2)) {
  FUNC_0(VAR_5->dev, "VM page table size (%d) too large\n",
    VAR_2);
  VAR_2 = 9;
 }
}

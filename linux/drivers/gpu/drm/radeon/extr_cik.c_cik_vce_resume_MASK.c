
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ring_size; } ;
struct radeon_device {int dev; struct radeon_ring* ring; int has_vce; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*,int ,int ,int ) ;
 int FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3)
{
 struct radeon_ring *VAR_4;
 int VAR_5;

 if (!VAR_3->has_vce || !VAR_3->ring[VAR_0].ring_size)
  return;

 VAR_4 = &VAR_3->ring[VAR_0];
 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_4->ring_size, 0, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed initializing VCE1 ring (%d).\n", VAR_5);
  return;
 }
 VAR_4 = &VAR_3->ring[VAR_1];
 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_4->ring_size, 0, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed initializing VCE1 ring (%d).\n", VAR_5);
  return;
 }
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed initializing VCE (%d).\n", VAR_5);
  return;
 }
}

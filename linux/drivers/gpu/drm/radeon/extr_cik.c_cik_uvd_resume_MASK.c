
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ring_size; } ;
struct radeon_device {int dev; struct radeon_ring* ring; int has_uvd; } ;


 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*,int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2)
{
 struct radeon_ring *VAR_3;
 int VAR_4;

 if (!VAR_2->has_uvd || !VAR_2->ring[VAR_0].ring_size)
  return;

 VAR_3 = &VAR_2->ring[VAR_0];
 VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_3->ring_size, 0, FUNC_0(VAR_1, 0));
 if (VAR_4) {
  FUNC_1(VAR_2->dev, "failed initializing UVD ring (%d).\n", VAR_4);
  return;
 }
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_2->dev, "failed initializing UVD (%d).\n", VAR_4);
  return;
 }
}

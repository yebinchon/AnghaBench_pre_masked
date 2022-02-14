
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ready; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_2)
{
 struct radeon_ring *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3 = &VAR_2->ring[VAR_0];
 VAR_3->ready = 1;
 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_3);
 if (VAR_4) {
  VAR_3->ready = 0;
  return VAR_4;
 }

 VAR_3 = &VAR_2->ring[VAR_1];
 VAR_3->ready = 1;
 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_4) {
  VAR_3->ready = 0;
  return VAR_4;
 }

 FUNC_0("VCE initialized successfully.\n");

 return 0;
}

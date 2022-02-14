
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_ring {int queue; int pipe; int me; } ;
struct radeon_device {scalar_t__ usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_6,
        struct radeon_ring *VAR_7)
{
 u32 VAR_8, VAR_9;

 FUNC_2(VAR_6, VAR_7->me, VAR_7->pipe, VAR_7->queue, 0);

 VAR_9 = FUNC_0(VAR_4);
 VAR_9 &= ~VAR_5;
 FUNC_1(VAR_4, VAR_9);

 if (FUNC_0(VAR_0) & 1) {
  FUNC_1(VAR_1, 1);
  for (VAR_8 = 0; VAR_8 < VAR_6->usec_timeout; VAR_8++) {
   if (!(FUNC_0(VAR_0) & 1))
    break;
   FUNC_3(1);
  }
  FUNC_1(VAR_1, 0);
  FUNC_1(VAR_2, 0);
  FUNC_1(VAR_3, 0);
 }
 FUNC_2(VAR_6, 0, 0, 0, 0);
}

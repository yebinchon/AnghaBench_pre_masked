
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_ring {int idx; int pipe; int me; } ;
struct radeon_device {struct radeon_ring* ring; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;

 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_ring*,int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_6,
           int VAR_7)
{
 struct radeon_ring *VAR_8 = &VAR_6->ring[VAR_7];
 u32 VAR_9;

 switch (VAR_8->idx) {
 case 130:
 case 129:
 default:
  switch (VAR_8->me) {
  case 0:
   VAR_9 = VAR_1 << VAR_8->pipe;
   break;
  case 1:
   VAR_9 = VAR_2 << VAR_8->pipe;
   break;
  default:
   return;
  }
  break;
 case 128:
  VAR_9 = VAR_0;
  break;
 }

 FUNC_4(VAR_8, FUNC_0(VAR_5, 5));
 FUNC_4(VAR_8, (FUNC_3(1) |
     FUNC_2(3) |
     FUNC_1(1)));
 FUNC_4(VAR_8, VAR_4 >> 2);
 FUNC_4(VAR_8, VAR_3 >> 2);
 FUNC_4(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_9);
 FUNC_4(VAR_8, 0x20);
}

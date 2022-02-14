
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_ring*,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_6,
      int VAR_7)
{
 struct radeon_ring *VAR_8 = &VAR_6->ring[VAR_7];
 u32 VAR_9 = (FUNC_2(1) |
     FUNC_1(3));
 u32 VAR_10;

 if (VAR_7 == VAR_2)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_4;

 FUNC_3(VAR_8, FUNC_0(VAR_5, 0, VAR_9));
 FUNC_3(VAR_8, VAR_0);
 FUNC_3(VAR_8, VAR_1);
 FUNC_3(VAR_8, VAR_10);
 FUNC_3(VAR_8, VAR_10);
 FUNC_3(VAR_8, (0xfff << 16) | 10);
}

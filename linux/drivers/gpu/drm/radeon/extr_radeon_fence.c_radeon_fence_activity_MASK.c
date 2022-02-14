
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int* sync_seq; int last_seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;

__attribute__((used)) static bool FUNC_4(struct radeon_device *VAR_0, int VAR_1)
{
 uint64_t VAR_2, VAR_3, VAR_4;
 unsigned VAR_5 = 0;
 bool VAR_6 = 0;
 VAR_3 = FUNC_0(&VAR_0->fence_drv[VAR_1].last_seq);
 do {
  VAR_4 = VAR_0->fence_drv[VAR_1].sync_seq[VAR_1];
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  VAR_2 |= VAR_3 & 0xffffffff00000000LL;
  if (VAR_2 < VAR_3) {
   VAR_2 &= 0xffffffff;
   VAR_2 |= VAR_4 & 0xffffffff00000000LL;
  }

  if (VAR_2 <= VAR_3 || VAR_2 > VAR_4) {
   break;
  }




  VAR_6 = 1;
  VAR_3 = VAR_2;
  if ((VAR_5++) > 10) {





   break;
  }
 } while (FUNC_1(&VAR_0->fence_drv[VAR_1].last_seq, VAR_2) > VAR_2);

 if (VAR_2 < VAR_4)
  FUNC_3(VAR_0, VAR_1);

 return VAR_6;
}

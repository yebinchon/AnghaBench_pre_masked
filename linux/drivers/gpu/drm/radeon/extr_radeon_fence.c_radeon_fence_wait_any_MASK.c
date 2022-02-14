
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct radeon_fence {scalar_t__ seq; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct radeon_device*,scalar_t__*,int,int ) ;

int FUNC_1(struct radeon_device *VAR_3,
     struct radeon_fence **VAR_4,
     bool VAR_5)
{
 uint64_t VAR_6[VAR_2];
 unsigned VAR_7, VAR_8 = 0;
 long VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  VAR_6[VAR_7] = 0;

  if (!VAR_4[VAR_7]) {
   continue;
  }

  VAR_6[VAR_7] = VAR_4[VAR_7]->seq;
  ++VAR_8;
 }


 if (VAR_8 == 0)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3, VAR_6, VAR_5, VAR_1);
 if (VAR_9 < 0) {
  return VAR_9;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct cpuidle_device {unsigned int poll_limit_ns; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct cpuidle_device *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;
 u64 VAR_9 = VAR_7*VAR_0;




 if (VAR_9 > VAR_6->poll_limit_ns && VAR_9 <= VAR_4) {
  VAR_8 = VAR_6->poll_limit_ns * VAR_2;

  if (VAR_8 < VAR_3)
   VAR_8 = VAR_3;
  if (VAR_8 > VAR_4)
   VAR_8 = VAR_4;

  VAR_6->poll_limit_ns = VAR_8;
 } else if (VAR_9 > VAR_4 &&
     VAR_1) {
  unsigned int VAR_10 = VAR_5;

  VAR_8 = VAR_6->poll_limit_ns;
  if (VAR_10 == 0)
   VAR_8 = 0;
  else
   VAR_8 /= VAR_10;
  VAR_6->poll_limit_ns = VAR_8;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct old_timespec32 {int dummy; } ;
typedef int clockid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct old_timespec32*) ;

int FUNC_1(clockid_t VAR_2,
   struct old_timespec32 *VAR_3)
{

 if ((u32)VAR_3 >= VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clock_event_device {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4,
  struct clock_event_device *VAR_5)
{
 u32 VAR_6;
 s32 VAR_7;

 VAR_6 = FUNC_0(VAR_1);
 VAR_6 += (u32) VAR_4;
 FUNC_1(VAR_3, VAR_6);

 VAR_7 = (s32)(VAR_6 - FUNC_0(VAR_1));

 return VAR_7 < VAR_2 ? -VAR_0 : 0;
}

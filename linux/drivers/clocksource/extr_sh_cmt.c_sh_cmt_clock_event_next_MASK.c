
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_channel {int flags; unsigned long next_match_value; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sh_cmt_channel* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sh_cmt_channel*,unsigned long) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_1,
       struct clock_event_device *VAR_2)
{
 struct sh_cmt_channel *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(!FUNC_2(VAR_2));
 if (FUNC_3(VAR_3->flags & VAR_0))
  VAR_3->next_match_value = VAR_1 - 1;
 else
  FUNC_4(VAR_3, VAR_1 - 1);

 return 0;
}

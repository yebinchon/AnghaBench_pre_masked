
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct request*) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned long VAR_7, struct request *VAR_8)
{
 unsigned int VAR_9 = 0;

 if (FUNC_0(VAR_8))
  VAR_9 |= VAR_2;

 if (VAR_7 & (1UL << VAR_1)) {
  if (VAR_8->cmd_flags & VAR_6)
   VAR_9 |= VAR_4;
  if (!(VAR_7 & (1UL << VAR_0)) &&
      (VAR_8->cmd_flags & VAR_5))
   VAR_9 |= VAR_3;
 }
 return VAR_9;
}

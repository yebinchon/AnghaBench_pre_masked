
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {scalar_t__ me_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_0(struct mevent *VAR_8)
{
 int VAR_9;

 VAR_9 = 0;

 if (VAR_8->me_type == VAR_4)
  VAR_9 = VAR_0;

 if (VAR_8->me_type == VAR_7)
  VAR_9 = VAR_3;

 if (VAR_8->me_type == VAR_6)
  VAR_9 = VAR_2;

 if (VAR_8->me_type == VAR_5)
  VAR_9 = VAR_1;

 return (VAR_9);
}

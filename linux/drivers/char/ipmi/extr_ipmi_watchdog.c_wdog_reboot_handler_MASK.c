
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_10,
          unsigned long VAR_11,
          void *VAR_12)
{
 static int VAR_13;

 if ((VAR_9) && (!VAR_13)) {

  VAR_13 = 1;

  if (VAR_11 == VAR_3 || VAR_11 == VAR_2) {

   VAR_6 = VAR_4;
   FUNC_0(VAR_0);
  } else if (VAR_6 != VAR_4) {



   if (VAR_8 < 120)
    VAR_8 = 120;
   VAR_7 = 0;
   VAR_6 = VAR_5;
   FUNC_0(VAR_0);
  }
 }
 return VAR_1;
}

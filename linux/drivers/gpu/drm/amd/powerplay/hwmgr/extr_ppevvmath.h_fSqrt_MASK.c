
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int real; } ;
struct TYPE_23__ {int full; TYPE_1__ partial; } ;
typedef TYPE_2__ fInt ;


 int FUNC_0 (TYPE_2__) ;
 TYPE_2__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_3 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_4 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_5 (TYPE_2__) ;
 TYPE_2__ FUNC_6 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_7 (TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static fInt FUNC_9(fInt VAR_0)
{
 fInt VAR_1, VAR_2;
 fInt VAR_3;
 fInt VAR_4;
 int VAR_5, VAR_6, VAR_7;
 fInt VAR_8, VAR_9, VAR_10, VAR_11;

 fInt VAR_12 = FUNC_1(0);



 if (FUNC_3(VAR_12, VAR_0) || FUNC_2(VAR_12, VAR_0))
  return VAR_12;

 VAR_10 = VAR_0;

 if (VAR_0.partial.real > 3000)
  VAR_5 = 60;
 else if (VAR_0.partial.real > 1000)
  VAR_5 = 30;
 else if (VAR_0.partial.real > 100)
  VAR_5 = 10;
 else
  VAR_5 = 2;

 VAR_6 = 0;

 if (FUNC_2(VAR_0, VAR_12))
  return VAR_12;

 VAR_4 = FUNC_1(2);
 VAR_8 = FUNC_1(VAR_5);

 do {
  VAR_6++;

  VAR_9.full = VAR_8.full;

  VAR_3 = FUNC_5(VAR_9);
  VAR_11 = FUNC_7(VAR_3, VAR_10);

  VAR_2 = FUNC_6(VAR_4, VAR_9);
  VAR_1 = FUNC_4(VAR_11, VAR_2);

  VAR_8 = FUNC_7(VAR_9, VAR_1);

  VAR_7 = FUNC_0(VAR_8) - FUNC_0(VAR_9);

  if (VAR_6 > 20)
   return VAR_8;

 } while (FUNC_8(VAR_7) > 0);

 return (VAR_8);
}

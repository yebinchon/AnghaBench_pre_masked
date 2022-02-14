
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cyapa {void* state; void* gen; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct cyapa*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_13, u8 *VAR_14)
{
 int VAR_15;
 u8 VAR_16[32];
 int VAR_17;
 int VAR_18;
 VAR_18 = FUNC_0(VAR_13, VAR_16,
   VAR_9);
 if (VAR_18 != VAR_9)
  return VAR_18 < 0 ? VAR_18 : -VAR_4;
 VAR_15 = FUNC_1(&VAR_16[VAR_10]);
 VAR_17 = FUNC_1(&VAR_16[16]);
 if (VAR_15 == VAR_11) {
  if (VAR_14[VAR_12] ==
    VAR_8) {




   VAR_13->gen = VAR_0;
   VAR_13->state = VAR_2;
  } else {




   VAR_13->gen = VAR_0;
   VAR_13->state = VAR_1;
  }
 } else if (VAR_15 == VAR_9 &&
   VAR_16[2] == VAR_8 &&
   VAR_17 == VAR_6) {

  VAR_13->gen = VAR_0;
  VAR_13->state = VAR_2;
 } else if (VAR_15 == VAR_9 &&
   (VAR_16[VAR_12] ==
    VAR_7) &&
   VAR_17 == VAR_5) {

  VAR_13->gen = VAR_0;
  VAR_13->state = VAR_1;
 } else {

  VAR_13->state = VAR_3;
 }

 return 0;
}

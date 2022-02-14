
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cyapa {scalar_t__ state; scalar_t__ gen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct cyapa*,int *,int *,int *) ;
 int FUNC_1 (struct cyapa*,scalar_t__*) ;
 int FUNC_2 (struct cyapa*,scalar_t__*) ;
 int FUNC_3 (struct cyapa*) ;
 int FUNC_4 (struct cyapa*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct cyapa *VAR_23, u8 *VAR_24, int VAR_25)
{
 int VAR_26;

 if (!VAR_24 || VAR_25 < 3)
  return -VAR_5;

 VAR_23->state = VAR_3;


 VAR_26 = FUNC_5(&VAR_24[VAR_19]);
 if (VAR_26 == 0 || VAR_26 == VAR_20) {
  FUNC_3(VAR_23);
 } else if (VAR_26 == VAR_17 &&
   (VAR_24[2] == VAR_16 ||
    VAR_24[2] == VAR_15)) {
  FUNC_2(VAR_23, VAR_24);
 } else if ((VAR_26 == VAR_8 ||
   VAR_26 == VAR_6) &&
   VAR_24[2] == VAR_7) {

  VAR_23->gen = VAR_0;
  VAR_23->state = VAR_1;
 } else if (VAR_26 == VAR_10 &&
   VAR_24[2] == VAR_9) {

  VAR_23->gen = VAR_0;
  VAR_23->state = VAR_2;
 } else if (VAR_24[2] == VAR_21 ||
   VAR_24[2] == VAR_14 ||
   VAR_24[2] == VAR_11 ||
   VAR_24[2] == VAR_18 ||
   VAR_24[2] == VAR_22) {
  FUNC_4(VAR_23, VAR_24);
 } else if (VAR_24[2] == VAR_13 ||
   VAR_24[2] == VAR_12) {
  FUNC_1(VAR_23, VAR_24);
 }

 if (VAR_23->gen == VAR_0) {






  FUNC_0(VAR_23, ((void*)0), ((void*)0), ((void*)0));

  if (VAR_23->state == VAR_1 ||
   VAR_23->state == VAR_2)
   return 0;
 }

 return -VAR_4;
}

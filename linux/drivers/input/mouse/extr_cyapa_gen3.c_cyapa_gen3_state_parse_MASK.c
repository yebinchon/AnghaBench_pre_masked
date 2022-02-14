
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {scalar_t__ state; scalar_t__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;

__attribute__((used)) static int FUNC_1(struct cyapa *VAR_21, u8 *VAR_22, int VAR_23)
{
 VAR_21->state = VAR_10;


 if (VAR_22[VAR_17] == VAR_2 &&
  VAR_22[VAR_16] == VAR_1 &&
  (VAR_22[VAR_18] ==
   (VAR_5 | VAR_4) ||
   VAR_22[VAR_18] == VAR_5)) {





  VAR_21->gen = VAR_6;
  VAR_21->state = VAR_9;
 } else if (VAR_22[VAR_17] == VAR_2 &&
  (VAR_22[VAR_18] & VAR_5) ==
   VAR_5) {
  VAR_21->gen = VAR_6;
  if (VAR_22[VAR_18] & VAR_3) {
   VAR_21->state = VAR_8;
  } else {
   if ((VAR_22[VAR_16] & VAR_0) ==
     VAR_0)
    VAR_21->state = VAR_7;
   else
    VAR_21->state = VAR_9;
  }
 } else if ((VAR_22[VAR_20] & VAR_15) &&
   (VAR_22[VAR_19] & VAR_14)) {





  if (FUNC_0(VAR_22[VAR_19]) <=
    VAR_13) {

   VAR_21->gen = VAR_6;
   VAR_21->state = VAR_11;
  }
 } else if (VAR_22[VAR_20] == 0x0C &&
   VAR_22[VAR_19] == 0x08) {

  VAR_21->gen = VAR_6;
  VAR_21->state = VAR_11;
 } else if (VAR_22[VAR_18] &
   (VAR_5 | VAR_3)) {
  VAR_21->gen = VAR_6;
  VAR_21->state = VAR_8;
 }

 if (VAR_21->gen == VAR_6 && (VAR_21->state == VAR_11 ||
  VAR_21->state == VAR_9 ||
  VAR_21->state == VAR_7 ||
  VAR_21->state == VAR_8))
  return 0;

 return -VAR_12;
}

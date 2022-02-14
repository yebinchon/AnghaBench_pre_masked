
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int state; int gen; } ;
typedef int resp_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct cyapa*,int *,int *,int *) ;
 int FUNC_1 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int FUNC_2 (struct cyapa*,int*,int) ;
 int VAR_13 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cyapa *VAR_14)
{
 u8 VAR_15[VAR_9];
 int VAR_16;
 int VAR_17;
 u8 VAR_18[2];
 int VAR_19;
 int VAR_20;





 FUNC_0(VAR_14, ((void*)0), ((void*)0), ((void*)0));

 FUNC_4(VAR_15, 0, sizeof(VAR_15));
 VAR_19 = FUNC_2(VAR_14, VAR_15, 3);
 if (VAR_19 != 3)
  return VAR_19 < 0 ? VAR_19 : -VAR_4;

 VAR_17 = FUNC_3(&VAR_15[VAR_10]);
 if (VAR_17 == VAR_11) {

  VAR_14->gen = VAR_0;

  FUNC_0(VAR_14, ((void*)0), ((void*)0), ((void*)0));


  VAR_18[0] = 0x01;
  VAR_18[1] = 0x00;
  VAR_17 = VAR_9;
  VAR_20 = FUNC_1(VAR_14,
    VAR_18, VAR_11,
    VAR_15, &VAR_17,
    300,
    VAR_13,
    0);
  if (VAR_20)
   return VAR_20;

  VAR_17 = FUNC_3(
    &VAR_15[VAR_10]);
  VAR_16 = FUNC_3(&VAR_15[16]);
  if ((VAR_17 == VAR_9 ||
    VAR_17 == VAR_11) &&
   (VAR_15[VAR_12] ==
    VAR_8) &&
   VAR_16 == VAR_6) {

   VAR_14->state = VAR_2;
  } else if ((VAR_17 == VAR_9 ||
    VAR_17 == VAR_11) &&
   (VAR_15[VAR_12] ==
    VAR_7) &&
   VAR_16 == VAR_5) {

   VAR_14->state = VAR_1;
  } else {

   VAR_14->state = VAR_3;
  }
 }

 return 0;
}

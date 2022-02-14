
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcp {int t_last_cong; int beta; int alpha; } ;
struct cc_var {struct htcp* cc_data; } ;


 int FUNC_0 (struct cc_var*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(struct cc_var *VAR_10)
{
 struct htcp *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_11 = VAR_10->cc_data;
 VAR_14 = VAR_9;
 if (VAR_14 < VAR_11->t_last_cong)
  VAR_11->t_last_cong = VAR_14 - VAR_0;

 VAR_13 = VAR_14 - VAR_11->t_last_cong - VAR_0;


 if (VAR_13 < VAR_6) {




  if (VAR_13 > 0) {
   VAR_12 = FUNC_1(VAR_13);





   if (VAR_4)
    VAR_12 = FUNC_2(1, (2 * ((1 << VAR_3) -
        VAR_11->beta) * VAR_12) >> VAR_3);







   if (VAR_5)
    VAR_12 = FUNC_2(1, (FUNC_3(FUNC_2(VAR_2,
        (FUNC_0(VAR_10, VAR_8) << VAR_3) /
        VAR_7), VAR_1) * VAR_12)
        >> VAR_3);

  } else
   VAR_12 = 1;

  VAR_11->alpha = VAR_12;
 }
}

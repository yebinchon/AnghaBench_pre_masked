
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct cryptocap {int* cc_alg; int* cc_max_op_len; scalar_t__ cc_sessions; int cc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cryptocap* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int,int,int) ;

int
FUNC_5(u_int32_t VAR_5, int VAR_6, u_int16_t VAR_7,
    u_int32_t VAR_8)
{
 struct cryptocap *VAR_9;
 int VAR_10;

 FUNC_0();

 VAR_9 = FUNC_2(VAR_5);

 if (VAR_9 != ((void*)0) &&
     (VAR_1 <= VAR_6 && VAR_6 <= VAR_0)) {






  VAR_9->cc_alg[VAR_6] = VAR_8 | VAR_2;
  VAR_9->cc_max_op_len[VAR_6] = VAR_7;
  if (VAR_4)
   FUNC_4("crypto: %s registers alg %u flags %u maxoplen %u\n"
    , FUNC_3(VAR_9->cc_dev)
    , VAR_6
    , VAR_8
    , VAR_7
   );
  VAR_9->cc_sessions = 0;
  VAR_10 = 0;
 } else
  VAR_10 = VAR_3;

 FUNC_1();
 return VAR_10;
}

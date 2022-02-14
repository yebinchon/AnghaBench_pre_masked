
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cryptocap {int* cc_kalg; int cc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cryptocap* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int,int) ;

int
FUNC_5(u_int32_t VAR_5, int VAR_6, u_int32_t VAR_7)
{
 struct cryptocap *VAR_8;
 int VAR_9;

 FUNC_0();

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 != ((void*)0) &&
     (VAR_1 <= VAR_6 && VAR_6 <= VAR_0)) {






  VAR_8->cc_kalg[VAR_6] = VAR_7 | VAR_2;
  if (VAR_4)
   FUNC_4("crypto: %s registers key alg %u flags %u\n"
    , FUNC_3(VAR_8->cc_dev)
    , VAR_6
    , VAR_7
   );
  VAR_9 = 0;
 } else
  VAR_9 = VAR_3;

 FUNC_1();
 return VAR_9;
}

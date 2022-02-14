
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cryptocap {scalar_t__* cc_alg; scalar_t__* cc_max_op_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 struct cryptocap* FUNC_2 (int ) ;
 int FUNC_3 (struct cryptocap*) ;

int
FUNC_4(u_int32_t VAR_3, int VAR_4)
{
 struct cryptocap *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0();
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != ((void*)0) &&
     (VAR_1 <= VAR_4 && VAR_4 <= VAR_0) &&
     VAR_5->cc_alg[VAR_4] != 0) {
  VAR_5->cc_alg[VAR_4] = 0;
  VAR_5->cc_max_op_len[VAR_4] = 0;


  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
   if (VAR_5->cc_alg[VAR_6] != 0)
    break;

  if (VAR_6 == VAR_0 + 1)
   FUNC_3(VAR_5);
  VAR_7 = 0;
 } else
  VAR_7 = VAR_2;
 FUNC_1();

 return VAR_7;
}

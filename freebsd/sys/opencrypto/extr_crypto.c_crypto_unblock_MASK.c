
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cryptocap {scalar_t__ cc_kqblocked; scalar_t__ cc_qblocked; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cryptocap* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(u_int32_t VAR_5, int VAR_6)
{
 struct cryptocap *VAR_7;
 int VAR_8;

 FUNC_0();
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 != ((void*)0)) {
  if (VAR_6 & VAR_1)
   VAR_7->cc_qblocked = 0;
  if (VAR_6 & VAR_0)
   VAR_7->cc_kqblocked = 0;
  if (VAR_4)
   FUNC_3(&VAR_3);
  VAR_8 = 0;
 } else
  VAR_8 = VAR_2;
 FUNC_1();

 return VAR_8;
}

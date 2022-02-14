
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct monitorbuf {int stop_state; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (int ) ;
 struct monitorbuf* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (struct monitorbuf*,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (size_t) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_13 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;

void
FUNC_14(void)
{
 struct monitorbuf *VAR_12;
 u_int VAR_13;
 bool VAR_14;

 VAR_13 = FUNC_3(VAR_4);

 FUNC_13(&VAR_10[VAR_13]);

 VAR_14 = (VAR_9 && (VAR_3 & VAR_0) != 0 &&
     !VAR_6);
 if (VAR_14) {
  VAR_12 = FUNC_4(VAR_5);
  FUNC_7(&VAR_12->stop_state,
      VAR_1);
 }


 FUNC_1(VAR_13, &VAR_11);


 while (!FUNC_0(VAR_13, &VAR_8)) {
  if (VAR_14) {
   FUNC_8(VAR_12, 0, 0);
   if (FUNC_6(&VAR_12->stop_state) ==
       VAR_1)
    FUNC_9(0, VAR_2);
   continue;
  }

  FUNC_12();






  while (FUNC_5(!FUNC_2() && VAR_7 != ((void*)0)))
   FUNC_11();
 }

 FUNC_10(VAR_13);
}

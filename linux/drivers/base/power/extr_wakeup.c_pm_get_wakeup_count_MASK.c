
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned int*,unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_7(unsigned int *VAR_4, bool VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (VAR_5) {
  FUNC_0(VAR_2);

  for (;;) {
   FUNC_3(&VAR_3, &VAR_2,
     VAR_0);
   FUNC_6(&VAR_6, &VAR_7);
   if (VAR_7 == 0 || FUNC_5(VAR_1))
    break;
   FUNC_2();
   FUNC_4();
  }
  FUNC_1(&VAR_3, &VAR_2);
 }

 FUNC_6(&VAR_6, &VAR_7);
 *VAR_4 = VAR_6;
 return !VAR_7;
}

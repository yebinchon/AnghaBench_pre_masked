
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int *) ;

void
FUNC_5(sigset_t *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 sigset_t VAR_9;





 if (VAR_6 >= 0)
  FUNC_0(VAR_6, 0);
 if (VAR_7 >= 0)
  FUNC_0(VAR_7, 1);
 for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++)
  if (VAR_5 != ((void*)0) && FUNC_2(VAR_5, VAR_8))
   (void)FUNC_3(VAR_8, VAR_3);
 if (VAR_5 == ((void*)0) || !FUNC_2(VAR_5, VAR_1))
  (void)FUNC_3(VAR_1, VAR_2);
 (void)FUNC_1(&VAR_9);
 (void)FUNC_4(VAR_4, &VAR_9, ((void*)0));
}

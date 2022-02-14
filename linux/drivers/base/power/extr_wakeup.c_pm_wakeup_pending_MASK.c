
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int VAR_3 ;
 int FUNC_5 (unsigned int*,unsigned int*) ;

bool FUNC_6(void)
{
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_3(&VAR_1, VAR_4);
 if (VAR_0) {
  unsigned int VAR_6, VAR_7;

  FUNC_5(&VAR_6, &VAR_7);
  VAR_5 = (VAR_6 != VAR_3 || VAR_7 > 0);
  VAR_0 = !VAR_5;
 }
 FUNC_4(&VAR_1, VAR_4);

 if (VAR_5) {
  FUNC_1("Wakeup pending, aborting suspend\n");
  FUNC_2();
 }

 return VAR_5 || FUNC_0(&VAR_2) > 0;
}

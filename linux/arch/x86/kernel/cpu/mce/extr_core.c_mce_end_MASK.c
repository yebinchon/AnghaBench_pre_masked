
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ monarch_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(int VAR_6)
{
 int VAR_7 = -1;
 u64 VAR_8 = (u64)VAR_3.monarch_timeout * VAR_0;

 if (!VAR_8)
  goto reset;
 if (VAR_6 < 0)
  goto reset;




 FUNC_0(&VAR_5);

 if (VAR_6 == 1) {

  int VAR_9 = FUNC_7();





  while (FUNC_1(&VAR_5) <= VAR_9) {
   if (FUNC_5(&VAR_8,
       "Timeout: Monarch CPU unable to finish machine check processing"))
    goto reset;
   FUNC_6(VAR_1);
  }

  FUNC_4();
  FUNC_3();
  VAR_7 = 0;
 } else {



  while (FUNC_1(&VAR_5) != 0) {
   if (FUNC_5(&VAR_8,
       "Timeout: Monarch CPU did not finish machine check processing"))
    goto reset;
   FUNC_6(VAR_1);
  }




  return 0;
 }




reset:
 FUNC_2(&VAR_2, 0);
 FUNC_2(&VAR_4, 0);
 FUNC_3();




 FUNC_2(&VAR_5, 0);
 return VAR_7;
}

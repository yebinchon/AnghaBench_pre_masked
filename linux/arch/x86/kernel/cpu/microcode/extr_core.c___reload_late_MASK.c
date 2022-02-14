
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(void *VAR_7)
{
 int VAR_8 = FUNC_7();
 enum ucode_state VAR_9;
 int VAR_10 = 0;





 if (FUNC_0(&VAR_4, VAR_0))
  return -1;

 FUNC_5(&VAR_6);
 FUNC_1(&VAR_9);
 FUNC_6(&VAR_6);


 if (VAR_9 > VAR_1) {
  FUNC_4("Error reloading microcode on CPU %d\n", VAR_8);
  VAR_10 = -1;
 } else if (VAR_9 == VAR_3 || VAR_9 == VAR_2) {
  VAR_10 = 1;
 }







 if (FUNC_0(&VAR_5, VAR_0 * FUNC_2()))
  FUNC_3("Timeout during microcode update!\n");

 return VAR_10;
}

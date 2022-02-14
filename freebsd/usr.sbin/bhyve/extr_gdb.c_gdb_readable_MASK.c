
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ssize_t ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;
struct TYPE_5__ {int len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int ,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(int VAR_5, enum ev_type VAR_6, void *VAR_7)
{
 ssize_t VAR_8;
 int VAR_9;

 if (FUNC_6(VAR_5, VAR_1, &VAR_9) == -1) {
  FUNC_10("FIONREAD on GDB socket");
  return;
 }





 if (VAR_9 == 0)
  VAR_9 = 1;


 FUNC_4(&VAR_2, VAR_9);
 FUNC_0(FUNC_3(&VAR_2) >= VAR_9);

 VAR_8 = FUNC_9(VAR_5, FUNC_5(&VAR_2), FUNC_3(&VAR_2));
 if (VAR_8 == 0) {
  FUNC_2();
 } else if (VAR_8 == -1) {
  if (VAR_3 == VAR_0)
   return;

  FUNC_10("Read from GDB socket");
  FUNC_2();
 } else {
  VAR_2.len += VAR_8;
  FUNC_7(&VAR_4);
  FUNC_1(VAR_5);
  FUNC_8(&VAR_4);
 }
}

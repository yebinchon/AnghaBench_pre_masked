
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ len; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(int VAR_2)
{
 ssize_t VAR_3;

 if (VAR_0.len == 0) {
  FUNC_3(VAR_1);
  return;
 }
 VAR_3 = FUNC_6(VAR_2, FUNC_2(&VAR_0), VAR_0.len);
 if (VAR_3 == -1) {
  FUNC_5("Write to GDB socket failed");
  FUNC_0();
 } else {
  FUNC_1(&VAR_0, VAR_3);
  if (VAR_0.len == 0)
   FUNC_3(VAR_1);
  else
   FUNC_4(VAR_1);
 }
}

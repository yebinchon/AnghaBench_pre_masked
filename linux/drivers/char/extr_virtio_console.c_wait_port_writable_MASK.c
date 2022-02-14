
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int guest_connected; int waitqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct port*) ;

__attribute__((used)) static int FUNC_2(struct port *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_2)) {
  if (VAR_3)
   return -VAR_0;

  VAR_4 = FUNC_0(VAR_2->waitqueue,
        !FUNC_1(VAR_2));
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (!VAR_2->guest_connected)
  return -VAR_1;

 return 0;
}

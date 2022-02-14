
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charlcd {int dev; scalar_t__ virtbase; int complete; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->complete,
       VAR_0);

 FUNC_2(0x00, VAR_2->virtbase + VAR_1);

 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev,
   "wait_for_completion_interruptible_timeout() "
   "returned %d waiting for ready\n", VAR_3);
  return;
 }

 if (VAR_3 == 0) {
  FUNC_0(VAR_2->dev, "charlcd controller timed out "
   "waiting for ready\n");
  return;
 }
}

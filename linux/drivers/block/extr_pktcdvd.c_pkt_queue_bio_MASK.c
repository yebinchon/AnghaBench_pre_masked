
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attention; int lock; int write_queue; int read_queue; } ;
struct pktcdvd_device {int wqueue; TYPE_1__ iosched; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pktcdvd_device *VAR_1, struct bio *VAR_2)
{
 FUNC_3(&VAR_1->iosched.lock);
 if (FUNC_1(VAR_2) == VAR_0)
  FUNC_2(&VAR_1->iosched.read_queue, VAR_2);
 else
  FUNC_2(&VAR_1->iosched.write_queue, VAR_2);
 FUNC_4(&VAR_1->iosched.lock);

 FUNC_0(&VAR_1->iosched.attention, 1);
 FUNC_5(&VAR_1->wqueue);
}

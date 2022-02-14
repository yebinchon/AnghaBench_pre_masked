
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_driver {int dummy; } ;
struct serio {int dev; struct serio_driver* drv; } ;
struct atkbd {scalar_t__ set; int mutex; scalar_t__ write; scalar_t__ emul; scalar_t__ xl_bit; int softrepeat; int extra; } ;


 int FUNC_0 (struct atkbd*) ;
 int FUNC_1 (struct atkbd*) ;
 int FUNC_2 (struct atkbd*) ;
 scalar_t__ FUNC_3 (struct atkbd*) ;
 scalar_t__ FUNC_4 (struct atkbd*,scalar_t__,int ) ;
 int FUNC_5 (struct atkbd*) ;
 int FUNC_6 (struct atkbd*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct atkbd* FUNC_10 (struct serio*) ;

__attribute__((used)) static int FUNC_11(struct serio *VAR_0)
{
 struct atkbd *VAR_1 = FUNC_10(VAR_0);
 struct serio_driver *VAR_2 = VAR_0->drv;
 int VAR_3 = -1;

 if (!VAR_1 || !VAR_2) {
  FUNC_7(&VAR_0->dev,
   "reconnect request, but serio is disconnected, ignoring...\n");
  return -1;
 }

 FUNC_8(&VAR_1->mutex);

 FUNC_1(VAR_1);

 if (VAR_1->write) {
  if (FUNC_3(VAR_1))
   goto out;

  if (VAR_1->set != FUNC_4(VAR_1, VAR_1->set, VAR_1->extra))
   goto out;
  FUNC_5(VAR_1);
  if (!VAR_1->softrepeat)
   FUNC_6(VAR_1);

 }





 VAR_1->xl_bit = 0;
 VAR_1->emul = 0;

 FUNC_2(VAR_1);
 if (VAR_1->write)
  FUNC_0(VAR_1);

 VAR_3 = 0;

 out:
 FUNC_9(&VAR_1->mutex);
 return VAR_3;
}

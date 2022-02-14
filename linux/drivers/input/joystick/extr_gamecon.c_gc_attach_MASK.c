
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport {scalar_t__ number; } ;
struct pardevice {int dummy; } ;
struct pardev_cb {int flags; } ;
struct gc {scalar_t__ parportno; TYPE_1__* pads; int timer; struct pardevice* pd; int mutex; } ;
typedef int gc_parport_cb ;
struct TYPE_4__ {int nargs; scalar_t__* args; } ;
struct TYPE_3__ {scalar_t__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gc** VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_0 (struct gc*,int,int) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gc*) ;
 struct gc* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pardev_cb*,int ,int) ;
 int FUNC_5 (int *) ;
 struct pardevice* FUNC_6 (struct parport*,char*,struct pardev_cb*,int) ;
 int FUNC_7 (struct pardevice*) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct parport *VAR_7)
{
 struct gc *VAR_8;
 struct pardevice *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;
 int *VAR_13, VAR_14;
 struct pardev_cb VAR_15;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (VAR_5[VAR_11].nargs == 0 || VAR_5[VAR_11].args[0] < 0)
   continue;

  if (VAR_5[VAR_11].args[0] == VAR_7->number)
   break;
 }

 if (VAR_11 == VAR_1) {
  FUNC_8("Not using parport%d.\n", VAR_7->number);
  return;
 }
 VAR_13 = VAR_5[VAR_11].args + 1;
 VAR_14 = VAR_5[VAR_11].nargs - 1;

 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.flags = VAR_3;

 VAR_9 = FUNC_6(VAR_7, "gamecon", &VAR_15,
     VAR_11);
 if (!VAR_9) {
  FUNC_9("parport busy already - lp.o loaded?\n");
  return;
 }

 VAR_8 = FUNC_3(sizeof(struct gc), VAR_2);
 if (!VAR_8) {
  FUNC_9("Not enough memory\n");
  goto err_unreg_pardev;
 }

 FUNC_5(&VAR_8->mutex);
 VAR_8->pd = VAR_9;
 VAR_8->parportno = VAR_7->number;
 FUNC_10(&VAR_8->timer, VAR_6, 0);

 for (VAR_10 = 0; VAR_10 < VAR_14 && VAR_10 < VAR_0; VAR_10++) {
  if (!VAR_13[VAR_10])
   continue;

  if (FUNC_0(VAR_8, VAR_10, VAR_13[VAR_10]))
   goto err_unreg_devs;

  VAR_12++;
 }

 if (VAR_12 == 0) {
  FUNC_9("No valid devices specified\n");
  goto err_free_gc;
 }

 VAR_4[VAR_11] = VAR_8;
 return;

 err_unreg_devs:
 while (--VAR_10 >= 0)
  if (VAR_8->pads[VAR_10].dev)
   FUNC_1(VAR_8->pads[VAR_10].dev);
 err_free_gc:
 FUNC_2(VAR_8);
 err_unreg_pardev:
 FUNC_7(VAR_9);
}

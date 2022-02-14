
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {scalar_t__ base; } ;
struct pardev_cb {int flags; } ;
typedef int ks0108_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct parport* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pardev_cb*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (struct parport*,int ,struct pardev_cb*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct parport *VAR_6)
{
 struct pardev_cb VAR_7;

 if (VAR_6->base != VAR_5)
  return;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.flags = VAR_1;
 VAR_3 = FUNC_2(VAR_6, VAR_0,
            &VAR_7, 0);
 if (!VAR_3) {
  FUNC_4("ERROR: parport didn't register new device\n");
  return;
 }
 if (FUNC_1(VAR_3)) {
  FUNC_4("could not claim access to parport %i. Aborting.\n",
         VAR_5);
  goto err_unreg_device;
 }

 VAR_4 = VAR_6;
 VAR_2 = 1;
 return;

err_unreg_device:
 FUNC_3(VAR_3);
 VAR_3 = ((void*)0);
}

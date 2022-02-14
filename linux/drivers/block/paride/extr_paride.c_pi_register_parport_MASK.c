
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parport {scalar_t__ name; } ;
struct pardev_cb {void* private; int wakeup; } ;
typedef int par_cb ;
struct TYPE_3__ {char* parname; int port; int device; int parq; int pardev; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pardev_cb*,int ,int) ;
 struct parport* FUNC_2 (int ) ;
 int FUNC_3 (struct parport*) ;
 int FUNC_4 (struct parport*,int ,struct pardev_cb*,int) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(PIA *VAR_1, int VAR_2, int VAR_3)
{
 struct parport *VAR_4;
 struct pardev_cb VAR_5;

 VAR_4 = FUNC_2(VAR_1->port);
 if (!VAR_4)
  return 0;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.wakeup = VAR_0;
 VAR_5.private = (void *)VAR_1;
 VAR_1->pardev = FUNC_4(VAR_4, VAR_1->device, &VAR_5,
      VAR_3);
 FUNC_3(VAR_4);
 if (!VAR_1->pardev)
  return 0;

 FUNC_0(&VAR_1->parq);

 if (VAR_2)
  FUNC_5("%s: 0x%x is %s\n", VAR_1->device, VAR_1->port, VAR_4->name);

 VAR_1->parname = (char *) VAR_4->name;

 return 1;
}

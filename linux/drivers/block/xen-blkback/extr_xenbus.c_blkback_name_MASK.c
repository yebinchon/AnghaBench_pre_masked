
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int nodename; } ;
struct xen_blkif {int domid; TYPE_1__* be; } ;
struct TYPE_2__ {struct xenbus_device* dev; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*,int,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ,int ,char*,int *) ;

__attribute__((used)) static int FUNC_7(struct xen_blkif *VAR_2, char *VAR_3)
{
 char *VAR_4, *VAR_5;
 struct xenbus_device *VAR_6 = VAR_2->be->dev;

 VAR_4 = FUNC_6(VAR_1, VAR_6->nodename, "dev", ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_5(VAR_4, "/dev/");
 if (VAR_5 != ((void*)0))
  VAR_5 += FUNC_4("/dev/");
 else
  VAR_5 = VAR_4;

 FUNC_3(VAR_3, VAR_0, "%d.%s", VAR_2->domid, VAR_5);
 FUNC_2(VAR_4);

 return 0;
}

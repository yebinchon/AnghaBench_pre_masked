
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfi1_devdata {TYPE_1__* pcidev; } ;
typedef int prefix_name ;
typedef int name ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int devfn; TYPE_2__* bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,unsigned long*,void**) ;
 int FUNC_5 (char*,int,char*,...) ;
 char FUNC_6 (char) ;

int FUNC_7(struct hfi1_devdata *VAR_0, const char *VAR_1,
        unsigned long *VAR_2, void **VAR_3)
{
 char VAR_4[64];
 char VAR_5[64];
 int VAR_6;
 int VAR_7;


 FUNC_5(VAR_4, sizeof(VAR_4), "%04x:%02x:%02x.%x",
   FUNC_3(VAR_0->pcidev->bus),
   VAR_0->pcidev->bus->number,
   FUNC_1(VAR_0->pcidev->devfn),
   FUNC_0(VAR_0->pcidev->devfn));
 FUNC_5(VAR_5, sizeof(VAR_5), "%s-%s", VAR_4, VAR_1);
 VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3);





 if (VAR_6) {

  for (VAR_7 = 0; VAR_4[VAR_7]; VAR_7++)
   if (FUNC_2(VAR_4[VAR_7]))
    VAR_4[VAR_7] = FUNC_6(VAR_4[VAR_7]);
  FUNC_5(VAR_5, sizeof(VAR_5), "%s-%s", VAR_4, VAR_1);
  VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3);
 }

 return VAR_6;
}

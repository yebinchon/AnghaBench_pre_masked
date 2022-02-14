
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read; int name; } ;
struct ccp_device {int dev; TYPE_1__ hwrng; int rngname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct ccp_device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1->dev, "Registering RNG...\n");

 VAR_1->hwrng.name = VAR_1->rngname;
 VAR_1->hwrng.read = VAR_0;
 VAR_2 = FUNC_2(&VAR_1->hwrng);
 if (VAR_2)
  FUNC_1(VAR_1->dev, "error registering hwrng (%d)\n", VAR_2);

 return VAR_2;
}

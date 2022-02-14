
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; } ;
struct parisc_device {TYPE_1__ hpa; } ;
struct find_data {scalar_t__ hpa; struct parisc_device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct parisc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device * VAR_0, void * VAR_1)
{
 struct parisc_device * VAR_2 = FUNC_1(VAR_0);
 struct find_data * VAR_3 = (struct find_data*)VAR_1;

 if (FUNC_0(VAR_0)) {
  if (VAR_2->hpa.start == VAR_3->hpa) {
   VAR_3->dev = VAR_2;
   return 1;
  }
 }
 return 0;
}

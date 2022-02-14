
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int*,int*) ;
 struct qib_devdata* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_3, int *VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7, VAR_8, VAR_9;

 *VAR_4 = -1;

 VAR_6 = FUNC_2(&VAR_7, &VAR_8);
 if (!VAR_7) {
  VAR_5 = -VAR_2;
  goto done;
 }
 if (!VAR_8) {
  VAR_5 = -VAR_1;
  goto done;
 }
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  struct qib_devdata *VAR_10 = FUNC_3(VAR_9);

  if (VAR_10) {
   if (FUNC_1(VAR_10->pcidev->bus) < 0) {
    VAR_5 = -VAR_0;
    goto done;
   }
   if (FUNC_0(VAR_3) ==
    FUNC_1(VAR_10->pcidev->bus)) {
    *VAR_4 = VAR_9;
    goto done;
   }
  }
 }
done:
 return VAR_5;
}

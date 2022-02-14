
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device {int dummy; } ;
struct TYPE_2__ {int nports; int * lldevs; } ;
struct cxio_rdev {TYPE_1__ port_info; } ;


 int FUNC_0 (struct ib_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_0, struct cxio_rdev *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->port_info.nports; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->port_info.lldevs[VAR_3],
        VAR_3 + 1);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}

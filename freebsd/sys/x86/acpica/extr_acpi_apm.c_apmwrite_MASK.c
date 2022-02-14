
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct cdev {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
 return (VAR_1->uio_resid);
}

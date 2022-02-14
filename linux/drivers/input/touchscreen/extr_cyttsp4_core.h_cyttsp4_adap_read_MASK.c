
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cyttsp4 {int xfer_buf; int dev; TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* read ) (int ,int ,int ,int,void*) ;} ;


 int FUNC_0 (int ,int ,int ,int,void*) ;

__attribute__((used)) static inline int FUNC_1(struct cyttsp4 *VAR_0, u16 VAR_1, int VAR_2,
  void *VAR_3)
{
 return VAR_0->bus_ops->read(VAR_0->dev, VAR_0->xfer_buf, VAR_1, VAR_2, VAR_3);
}

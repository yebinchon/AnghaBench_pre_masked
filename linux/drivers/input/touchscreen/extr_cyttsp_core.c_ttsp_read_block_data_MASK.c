
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cyttsp {int xfer_buf; int dev; TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* read ) (int ,int ,int ,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct cyttsp *VAR_3, u8 VAR_4,
    u8 VAR_5, void *VAR_6)
{
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = VAR_3->bus_ops->read(VAR_3->dev, VAR_3->xfer_buf, VAR_4,
    VAR_5, VAR_6);
  if (!VAR_7)
   return 0;

  FUNC_0(VAR_0);
 }

 return -VAR_2;
}

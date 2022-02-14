
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct geni_i2c_dev {TYPE_2__ se; TYPE_1__* cur; scalar_t__ err; } ;
struct TYPE_6__ {int msg; scalar_t__ err; } ;
struct TYPE_4__ {int flags; int addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct geni_i2c_dev*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct geni_i2c_dev *VAR_3, int VAR_4)
{
 if (!VAR_3->err)
  VAR_3->err = VAR_2[VAR_4].err;
 if (VAR_3->cur)
  FUNC_0(VAR_3->se.dev, "len:%d, slv-addr:0x%x, RD/WR:%d\n",
   VAR_3->cur->len, VAR_3->cur->addr, VAR_3->cur->flags);

 if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
  FUNC_1(VAR_3->se.dev, "%s\n", VAR_2[VAR_4].msg);
  FUNC_2(VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int i2c_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int,int ,int ,char*,int *) ;
 int FUNC_8 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_9, unsigned int VAR_10)
{
 FUNC_5(&VAR_8);

 FUNC_2(VAR_9, "i/o base %#08lx. irq %d\n", VAR_2, VAR_4);
 if (!FUNC_8(VAR_2, VAR_1, "i2c-pca-isa")) {
  FUNC_1(VAR_9, "I/O address %#08lx is in use\n", VAR_2);
  goto out;
 }

 if (VAR_4 > -1) {
  if (FUNC_7(VAR_4, VAR_5, 0, "i2c-pca-isa", &VAR_7) < 0) {
   FUNC_1(VAR_9, "Request irq%d failed\n", VAR_4);
   goto out_region;
  }
 }

 VAR_6.i2c_clock = VAR_3;
 if (FUNC_4(&VAR_7) < 0) {
  FUNC_1(VAR_9, "Failed to add i2c bus\n");
  goto out_irq;
 }

 return 0;

 out_irq:
 if (VAR_4 > -1)
  FUNC_3(VAR_4, &VAR_7);
 out_region:
 FUNC_6(VAR_2, VAR_1);
 out:
 return -VAR_0;
}

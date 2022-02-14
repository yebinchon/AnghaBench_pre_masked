
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ace_device {int id; int irq; int bus_width; scalar_t__ physaddr; struct device* dev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (struct device*,char*,struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,struct ace_device*) ;
 int FUNC_4 (struct ace_device*) ;
 struct ace_device* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, int VAR_4, resource_size_t VAR_5,
       int VAR_6, int VAR_7)
{
 struct ace_device *VAR_8;
 int VAR_9;
 FUNC_1(VAR_3, "ace_alloc(%p)\n", VAR_3);

 if (!VAR_5) {
  VAR_9 = -VAR_0;
  goto err_noreg;
 }


 VAR_8 = FUNC_5(sizeof(struct ace_device), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto err_alloc;
 }

 VAR_8->dev = VAR_3;
 VAR_8->id = VAR_4;
 VAR_8->physaddr = VAR_5;
 VAR_8->irq = VAR_6;
 VAR_8->bus_width = VAR_7;


 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9)
  goto err_setup;

 FUNC_3(VAR_3, VAR_8);
 return 0;

err_setup:
 FUNC_3(VAR_3, ((void*)0));
 FUNC_4(VAR_8);
err_alloc:
err_noreg:
 FUNC_2(VAR_3, "could not initialize device, err=%i\n", VAR_9);
 return VAR_9;
}

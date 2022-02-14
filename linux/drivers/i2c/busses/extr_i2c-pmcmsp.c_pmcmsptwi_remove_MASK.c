
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ iobase; scalar_t__ irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct resource *VAR_5;

 FUNC_1(&VAR_2);

 if (VAR_3.irq) {
  FUNC_4(0,
   VAR_3.iobase + VAR_1);
  FUNC_0(VAR_3.irq, &VAR_3);
 }

 FUNC_2(VAR_3.iobase);

 VAR_5 = FUNC_3(VAR_4, VAR_0, 0);
 FUNC_5(VAR_5->start, FUNC_6(VAR_5));

 return 0;
}

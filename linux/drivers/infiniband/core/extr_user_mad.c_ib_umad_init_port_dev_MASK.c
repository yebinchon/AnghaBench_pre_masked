
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_umad_port {int umad_dev; } ;
struct TYPE_2__ {int parent; } ;
struct ib_device {TYPE_1__ dev; } ;
struct device {int release; int parent; int * class; } ;


 int FUNC_0 (struct device*,struct ib_umad_port*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2,
      struct ib_umad_port *VAR_3,
      const struct ib_device *VAR_4)
{
 FUNC_1(VAR_2);
 FUNC_2(VAR_3->umad_dev);
 VAR_2->class = &VAR_1;
 VAR_2->parent = VAR_4->dev.parent;
 FUNC_0(VAR_2, VAR_3);
 VAR_2->release = VAR_0;
}

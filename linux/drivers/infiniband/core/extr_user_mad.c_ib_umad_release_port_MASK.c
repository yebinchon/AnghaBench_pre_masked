
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_port {struct ib_umad_device* umad_dev; } ;
struct ib_umad_device {int dummy; } ;
struct device {int dummy; } ;


 struct ib_umad_port* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ib_umad_device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct ib_umad_port *VAR_1 = FUNC_0(VAR_0);
 struct ib_umad_device *VAR_2 = VAR_1->umad_dev;

 FUNC_1(VAR_2);
}

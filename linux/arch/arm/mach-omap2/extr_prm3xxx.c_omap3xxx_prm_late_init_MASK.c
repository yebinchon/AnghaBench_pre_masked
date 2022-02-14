
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_3__ {int irq; int reconfigure_io_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device_node*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(void)
{
 struct device_node *VAR_8;
 int VAR_9;

 if (!(VAR_7 & VAR_2))
  return 0;

 if (FUNC_2())
  VAR_4.reconfigure_io_chain =
   VAR_6;
 else
  VAR_4.reconfigure_io_chain =
   VAR_3;

 VAR_8 = FUNC_0(((void*)0), VAR_5);
 if (!VAR_8) {
  FUNC_5("PRM: no device tree node for interrupt?\n");

  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_8, 0);
 if (VAR_9 == -VAR_1)
  return VAR_9;

 VAR_4.irq = VAR_9;

 FUNC_3();

 return FUNC_4(&VAR_4);
}

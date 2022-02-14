
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int dummy; } ;
struct hvc_struct {int irq_requested; int vtermno; } ;


 int VAR_0 ;
 struct port* FUNC_0 (int ) ;
 int FUNC_1 (struct port*) ;

__attribute__((used)) static int FUNC_2(struct hvc_struct *VAR_1, int VAR_2)
{
 struct port *VAR_3;

 VAR_3 = FUNC_0(VAR_1->vtermno);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->irq_requested = 1;
 FUNC_1(VAR_3);

 return 0;
}

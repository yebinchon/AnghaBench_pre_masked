
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xive_irq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xive_irq* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct xive_irq*,int ) ;

__attribute__((used)) static struct xive_irq *
FUNC_2(u_int VAR_2)
{
 struct xive_irq *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct xive_irq), VAR_1, VAR_0);

 FUNC_1(VAR_3, VAR_2);

 return (VAR_3);
}

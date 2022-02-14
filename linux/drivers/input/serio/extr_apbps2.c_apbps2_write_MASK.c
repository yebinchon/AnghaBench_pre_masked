
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {struct apbps2_priv* port_data; } ;
struct apbps2_priv {TYPE_1__* regs; } ;
struct TYPE_2__ {int ctrl; int data; int status; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_5, unsigned char VAR_6)
{
 struct apbps2_priv *VAR_7 = VAR_5->port_data;
 unsigned int VAR_8 = 10000;


 while ((FUNC_0(&VAR_7->regs->status) & VAR_3) && VAR_8--)
  FUNC_2(10);

 if ((FUNC_0(&VAR_7->regs->status) & VAR_3) == 0) {
  FUNC_1(VAR_6, &VAR_7->regs->data);

  FUNC_1(VAR_0 | VAR_1 | VAR_2,
    &VAR_7->regs->ctrl);
  return 0;
 }

 return -VAR_4;
}

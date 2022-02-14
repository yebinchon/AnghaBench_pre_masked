
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct ipoctal_channel {scalar_t__ board_id; TYPE_2__* regs; scalar_t__ rx_enable; } ;
struct TYPE_3__ {int cr; } ;
struct TYPE_4__ {TYPE_1__ w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (struct ipoctal_channel*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4,
        const unsigned char *VAR_5, int VAR_6)
{
 struct ipoctal_channel *VAR_7 = VAR_4->driver_data;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);


 if (VAR_7->board_id == VAR_3) {
  FUNC_0(VAR_1, &VAR_7->regs->w.cr);
  VAR_7->rx_enable = 0;
  FUNC_0(VAR_0, &VAR_7->regs->w.cr);
 }





 FUNC_0(VAR_2, &VAR_7->regs->w.cr);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {int device_name; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(MGSLPC_INFO *VAR_2, struct tty_struct *VAR_3)
{
 if (VAR_1 >= VAR_0)
  FUNC_0("bh_transmit() entry on %s\n", VAR_2->device_name);

 if (VAR_3)
  FUNC_1(VAR_3);
}

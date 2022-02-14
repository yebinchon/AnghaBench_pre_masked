
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mce {int status; int addr; void* synd; void* ipid; void* misc; } ;
struct TYPE_6__ {scalar_t__ ser; } ;
struct TYPE_5__ {scalar_t__ smca; } ;
struct TYPE_4__ {int (* addr ) (int) ;int (* misc ) (int) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 void* FUNC_4 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mce *VAR_6, int VAR_7)
{
 if (VAR_6->status & VAR_1)
  VAR_6->misc = FUNC_4(VAR_5.misc(VAR_7));

 if (VAR_6->status & VAR_0) {
  VAR_6->addr = FUNC_4(VAR_5.addr(VAR_7));




  if (VAR_3.ser && (VAR_6->status & VAR_1)) {
   u8 VAR_8 = FUNC_1(VAR_6->misc);
   VAR_6->addr >>= VAR_8;
   VAR_6->addr <<= VAR_8;
  }





  if (VAR_4.smca) {
   u8 VAR_9 = (VAR_6->addr >> 56) & 0x3f;

   VAR_6->addr &= FUNC_0(55, VAR_9);
  }
 }

 if (VAR_4.smca) {
  VAR_6->ipid = FUNC_4(FUNC_2(VAR_7));

  if (VAR_6->status & VAR_2)
   VAR_6->synd = FUNC_4(FUNC_3(VAR_7));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct mce {int status; unsigned int bank; int addr; int synd; int ipid; int tsc; void* misc; } ;
struct TYPE_2__ {scalar_t__ smca; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct mce*) ;
 int FUNC_4 (struct mce*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_3, u64 VAR_4, u64 VAR_5, u64 VAR_6)
{
 struct mce VAR_7;

 FUNC_4(&VAR_7);

 VAR_7.status = VAR_4;
 VAR_7.misc = VAR_6;
 VAR_7.bank = VAR_3;
 VAR_7.tsc = FUNC_6();

 if (VAR_7.status & VAR_0) {
  VAR_7.addr = VAR_5;





  if (VAR_2.smca) {
   u8 VAR_8 = (VAR_7.addr >> 56) & 0x3f;

   VAR_7.addr &= FUNC_0(55, VAR_8);
  }
 }

 if (VAR_2.smca) {
  FUNC_5(FUNC_1(VAR_3), VAR_7.ipid);

  if (VAR_7.status & VAR_1)
   FUNC_5(FUNC_2(VAR_3), VAR_7.synd);
 }

 FUNC_3(&VAR_7);
}

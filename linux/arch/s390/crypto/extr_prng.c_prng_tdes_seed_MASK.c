
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
typedef int __u64 ;
struct TYPE_3__ {scalar_t__ reseed_counter; scalar_t__ parm_block; } ;
struct TYPE_4__ {TYPE_1__ prngws; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
 char VAR_2[16];
 int VAR_3 = 0;

 FUNC_0(VAR_1 > sizeof(VAR_2));

 FUNC_1(VAR_2, VAR_1);


 while (VAR_1 >= 8) {
  *((__u64 *)VAR_0->prngws.parm_block) ^= *((__u64 *)(VAR_2+VAR_3));
  FUNC_2();
  VAR_3 += 8;
  VAR_1 -= 8;
 }
 FUNC_2();
 VAR_0->prngws.reseed_counter = 0;
}

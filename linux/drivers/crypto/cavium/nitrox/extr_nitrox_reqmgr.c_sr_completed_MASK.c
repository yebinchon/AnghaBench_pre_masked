
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int * completion; int * orh; } ;
struct nitrox_softreq {TYPE_1__ resp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct nitrox_softreq *VAR_2)
{
 u64 VAR_3 = FUNC_0(*VAR_2->resp.orh);
 unsigned long VAR_4 = VAR_1 + FUNC_1(1);

 if ((VAR_3 != VAR_0) && (VAR_3 & 0xff))
  return 1;

 while (FUNC_0(*VAR_2->resp.completion) == VAR_0) {
  if (FUNC_3(VAR_1, VAR_4)) {
   FUNC_2("comp not done\n");
   return 0;
  }
 }

 return 1;
}

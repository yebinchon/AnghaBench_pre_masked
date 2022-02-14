
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commLen; scalar_t__ comm; } ;
typedef TYPE_1__ Process ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(Process* VAR_0, const char* VAR_1, int VAR_2) {
   if (VAR_0->comm && VAR_0->commLen >= VAR_2) {
      FUNC_1(VAR_0->comm, VAR_1, VAR_2 + 1);
   } else {
      FUNC_0(VAR_0->comm);
      VAR_0->comm = FUNC_2(VAR_1);
   }
   VAR_0->commLen = VAR_2;
}

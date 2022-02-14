
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* ev_hw_idx; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2, char *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (FUNC_1(VAR_4, VAR_3)) {
   FUNC_2("mapping perf event %2d to h/w event \'%8s\' (idx %d)\n",
     VAR_4, VAR_3, VAR_2);
   VAR_0->ev_hw_idx[VAR_4] = VAR_2;
  }
 }
}

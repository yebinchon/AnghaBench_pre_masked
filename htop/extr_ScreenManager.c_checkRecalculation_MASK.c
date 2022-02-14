
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {int * pl; } ;
struct TYPE_6__ {TYPE_4__* header; TYPE_1__* settings; } ;
struct TYPE_5__ {double delay; scalar_t__ treeView; } ;
typedef TYPE_2__ ScreenManager ;
typedef int ProcessList ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct timeval*,int *) ;

__attribute__((used)) static void FUNC_5(ScreenManager* VAR_0, double* VAR_1, int* VAR_2, bool* VAR_3, bool *VAR_4, bool *VAR_5) {
   ProcessList* VAR_6 = VAR_0->header->pl;

   struct timeval VAR_7;
   FUNC_4(&VAR_7, ((void*)0));
   double VAR_8 = ((double)VAR_7.tv_sec * 10) + ((double)VAR_7.tv_usec / 100000);
   *VAR_5 = (VAR_8 - *VAR_1 > VAR_0->settings->delay);
   *VAR_4 = *VAR_4 || *VAR_5;
   if (VAR_8 < *VAR_1) *VAR_4 = 1;
   if (*VAR_4) {
      *VAR_1 = VAR_8;
      FUNC_2(VAR_6);
      if (*VAR_2 == 0 || VAR_0->settings->treeView) {
         FUNC_3(VAR_6);
         *VAR_2 = 1;
      }
      *VAR_3 = 1;
   }
   if (*VAR_3) {
      FUNC_1(VAR_6);
      FUNC_0(VAR_0->header);
   }
   *VAR_4 = 0;
}

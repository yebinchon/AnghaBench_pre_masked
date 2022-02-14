
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int super; int meters; scalar_t__ moving; } ;
typedef int Panel ;
typedef int Object ;
typedef TYPE_1__ MetersPanel ;
typedef int Meter ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static inline bool FUNC_8(MetersPanel* VAR_0, MetersPanel* VAR_1, int VAR_2) {
   Panel* VAR_3 = (Panel*) VAR_0;
   if (VAR_0->moving) {
      if (VAR_1) {
         if (VAR_2 < FUNC_6(VAR_0->meters)) {
            FUNC_1(VAR_0, 0);

            Meter* VAR_4 = (Meter*) FUNC_7(VAR_0->meters, VAR_2);
            FUNC_3(VAR_3, VAR_2);
            FUNC_5(VAR_1->meters, VAR_2, VAR_4);
            FUNC_2(&(VAR_1->super), VAR_2, (Object*) FUNC_0(VAR_4, 0));
            FUNC_4(&(VAR_1->super), VAR_2);

            FUNC_1(VAR_1, 1);
            return 1;
         }
      }
   }
   return 0;
}

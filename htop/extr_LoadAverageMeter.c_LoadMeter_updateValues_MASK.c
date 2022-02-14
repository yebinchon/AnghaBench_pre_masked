
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* values; scalar_t__ total; } ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (scalar_t__*,double*,double*) ;
 int FUNC_1 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0, char* VAR_1, int VAR_2) {
   double VAR_3, VAR_4;
   FUNC_0(&VAR_0->values[0], &VAR_3, &VAR_4);
   if (VAR_0->values[0] > VAR_0->total) {
      VAR_0->total = VAR_0->values[0];
   }
   FUNC_1(VAR_1, VAR_2, "%.2f", VAR_0->values[0]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * values; } ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0, char* VAR_1, int VAR_2) {
   FUNC_0(&VAR_0->values[0], &VAR_0->values[1], &VAR_0->values[2]);
   FUNC_1(VAR_1, VAR_2, "%.2f/%.2f/%.2f", VAR_0->values[0], VAR_0->values[1], VAR_0->values[2]);
}

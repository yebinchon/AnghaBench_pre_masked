
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int currentBar; } ;
typedef TYPE_1__ Panel ;
typedef int Object ;
typedef int MetersPanel ;
typedef int MeterClass ;
typedef int Meter ;
typedef int Header ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_7(Header* VAR_0, Panel* VAR_1, MeterClass* VAR_2, int VAR_3, int VAR_4) {
   Meter* VAR_5 = (Meter*) FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
   FUNC_4(VAR_1, (Object*) FUNC_2(VAR_5, 0));
   FUNC_5(VAR_1, FUNC_6(VAR_1) - 1);
   FUNC_3((MetersPanel*)VAR_1, 1);
   FUNC_0(VAR_1->currentBar, ((void*)0));
}

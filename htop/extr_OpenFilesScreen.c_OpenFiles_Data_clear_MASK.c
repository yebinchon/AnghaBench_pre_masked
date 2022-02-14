
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* data; } ;
typedef TYPE_1__ OpenFiles_Data ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(OpenFiles_Data* VAR_0) {
   for (int VAR_1 = 0; VAR_1 < 255; VAR_1++)
      if (VAR_0->data[VAR_1])
         FUNC_0(VAR_0->data[VAR_1]);
}

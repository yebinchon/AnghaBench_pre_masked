
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_hour; scalar_t__ tm_min; } ;
struct TYPE_3__ {scalar_t__* values; } ;
typedef TYPE_1__ Meter ;


 struct tm* FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (char*,int,char*,struct tm*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(Meter* VAR_0, char* VAR_1, int VAR_2) {
   time_t VAR_3 = FUNC_2(((void*)0));
   struct tm VAR_4;
   struct tm *VAR_5 = FUNC_0(&VAR_3, &VAR_4);
   VAR_0->values[0] = VAR_5->tm_hour * 60 + VAR_5->tm_min;
   FUNC_1(VAR_1, VAR_2, "%H:%M:%S", VAR_5);
}

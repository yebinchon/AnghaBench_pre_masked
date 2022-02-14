
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* observation ) (void*,int const,int *) ;} ;
typedef int EnvCApi_Observation ;
typedef TYPE_1__ EnvCApi ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_3 (void*,int const,int *) ;

__attribute__((used)) static void FUNC_4(EnvCApi* VAR_1, void* VAR_2,
                                  const char* VAR_3[],
                                  const int VAR_4[], int VAR_5) {
  for (int VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
    if (VAR_4[VAR_6] < 0) {
      continue;
    }
    EnvCApi_Observation VAR_7;
    VAR_1->observation(VAR_2, VAR_4[VAR_6], &VAR_7);
    FUNC_2("observation \"%s\" - ", VAR_3[VAR_6]);
    FUNC_1(&VAR_7);
    FUNC_0("\n", VAR_0);
  }
}

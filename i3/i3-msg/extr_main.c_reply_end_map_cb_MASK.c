
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* input; char* errorposition; char* error; int success; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void *VAR_3) {
    if (!VAR_1.success) {
        if (VAR_1.input) {
            FUNC_0(VAR_2, "ERROR: Your command: %s\n", VAR_1.input);
            FUNC_0(VAR_2, "ERROR:               %s\n", VAR_1.errorposition);
        }
        FUNC_0(VAR_2, "ERROR: %s\n", VAR_1.error);
        VAR_0 = 2;
    }
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cpu_type_t ;
typedef scalar_t__ cpu_subtype_t ;
struct TYPE_3__ {int has_neon; int has_armcrypto; } ;
typedef TYPE_1__ CPUFeatures ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(CPUFeatures * const VAR_7)
{
    VAR_7->has_neon = 0;
    VAR_7->has_armcrypto = 0;


    return -1;
    if (VAR_7->has_neon == 0) {
        return 0;
    }
    return 0;
}

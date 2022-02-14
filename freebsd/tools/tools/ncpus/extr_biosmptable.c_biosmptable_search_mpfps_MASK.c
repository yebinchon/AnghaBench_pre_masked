
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ off_t ;
typedef TYPE_1__* mpfps_t ;
struct TYPE_6__ {int length; int signature; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static mpfps_t
FUNC_6(off_t VAR_1, int VAR_2)
{
    mpfps_t VAR_3;
    u_int8_t *VAR_4, VAR_5;
    int VAR_6, VAR_7;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
 FUNC_5("unable to malloc space for MP Floating Pointer Structure");
 return (((void*)0));
    }

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 16) {
 if (!FUNC_2(VAR_1 + VAR_6, VAR_3, sizeof(*VAR_3)))
     break;


 if (!FUNC_4(VAR_3->signature, VAR_0, FUNC_3(VAR_0))) {
     VAR_4 = (u_int8_t *)VAR_3;
     VAR_5 = 0;

     if (VAR_3->length != 1) {
      FUNC_5("bad mpfps length (%d)", VAR_3->length);
  continue;
     }
     for (VAR_7 = 0; VAR_7 < VAR_3->length * 16; VAR_7++)
  VAR_5 += *(VAR_4 + VAR_7);
     if (VAR_5 != 0) {
  FUNC_5("bad mpfps checksum (%d)\n", VAR_5);
  continue;
     }
     return (VAR_3);
 }
    }
    FUNC_0(VAR_3);
    return (((void*)0));
}

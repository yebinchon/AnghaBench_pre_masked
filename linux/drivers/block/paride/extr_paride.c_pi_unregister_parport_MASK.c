
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pardevice {int dummy; } ;
struct TYPE_3__ {int * pardev; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (struct pardevice*) ;

__attribute__((used)) static void FUNC_1(PIA * VAR_0)
{
 if (VAR_0->pardev) {
  FUNC_0((struct pardevice *) (VAR_0->pardev));
  VAR_0->pardev = ((void*)0);
 }
}

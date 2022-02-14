
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pardevice {int dummy; } ;
struct TYPE_3__ {int claimed; scalar_t__ pardev; int parq; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (struct pardevice*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(PIA * VAR_0)
{
 if (VAR_0->claimed)
  return;
 VAR_0->claimed = 1;
 if (VAR_0->pardev)
  FUNC_1(VAR_0->parq,
      !FUNC_0((struct pardevice *) VAR_0->pardev));
}

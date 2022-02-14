
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int portdir; } ;
typedef TYPE_1__ PORT ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(PORT **VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;
 PORT * VAR_4;

top:

 if ((2 * VAR_2 + 1 < VAR_1) &&
     (FUNC_0(VAR_0[VAR_3]->portdir, VAR_0[2 * VAR_2 + 1]->portdir) < 0))
  VAR_3 = 2 * VAR_2 + 1;
 if ((2 * VAR_2 + 2 < VAR_1) &&
     (FUNC_0(VAR_0[VAR_3]->portdir, VAR_0[2 * VAR_2 + 2]->portdir) < 0))
  VAR_3 = 2 * VAR_2 + 2;


 if (VAR_3 != VAR_2) {
  VAR_4 = VAR_0[VAR_2];
  VAR_0[VAR_2] = VAR_0[VAR_3];
  VAR_0[VAR_3] = VAR_4;
  VAR_2 = VAR_3;
  goto top;
 }
}

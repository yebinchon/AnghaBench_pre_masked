
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int portdir; } ;
typedef TYPE_1__ PORT ;


 int FUNC_0 (int,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static PORT *
FUNC_3(PORT ** VAR_0, size_t VAR_1, size_t VAR_2, char * VAR_3, char * VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 if (VAR_1 == VAR_2)
  FUNC_0(1, "%s: no entry for %s", VAR_4, VAR_3);

 VAR_5 = (VAR_1 + VAR_2) / 2;
 VAR_6 = FUNC_2(VAR_0[VAR_5]->portdir, VAR_3);

 if (VAR_6 == 0) {
  FUNC_1(VAR_3);
  return VAR_0[VAR_5];
 } else if (VAR_6 < 0)
  return FUNC_3(VAR_0, VAR_5 + 1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_3(VAR_0, VAR_1, VAR_5, VAR_3, VAR_4);
}

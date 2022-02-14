
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char const*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(const char *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_3(VAR_5);
 int VAR_9 = FUNC_0(VAR_5, VAR_8);
 if (0 <= VAR_9) {
  FUNC_2(&VAR_4, VAR_2[VAR_9]);
  if (VAR_7)
   VAR_2[VAR_9]->ce_flags |= VAR_6;
  else
   VAR_2[VAR_9]->ce_flags &= ~VAR_6;
  VAR_2[VAR_9]->ce_flags |= VAR_1;
  FUNC_1(&VAR_4, VAR_5);
  VAR_3 |= VAR_0;
  return 0;
 }
 return -1;
}

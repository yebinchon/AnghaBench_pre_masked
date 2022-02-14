
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* key; } ;
typedef TYPE_2__ keymap_t ;
struct TYPE_4__ {int spcl; int* map; void* flgs; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(keymap_t *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;


 if (VAR_4 < 0 || VAR_4 >= VAR_0)
  return -1;
 VAR_9 = VAR_4;


 VAR_6->key[VAR_9].spcl = 0;
 for (VAR_7=0; VAR_7<VAR_1; VAR_7++) {
  if ((VAR_8 = FUNC_0()) == -1)
   return -1;
  if (VAR_8 & VAR_2)
   VAR_6->key[VAR_9].spcl |= (0x80 >> VAR_7);
  VAR_6->key[VAR_9].map[VAR_7] = VAR_8 & ~VAR_2;
 }

 if ((VAR_5 = FUNC_1()) != VAR_3)
  return -1;
 VAR_6->key[VAR_9].flgs = VAR_4;
 VAR_5 = FUNC_1();
 return (VAR_9 + 1);
}

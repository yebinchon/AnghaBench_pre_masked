
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* b; } ;
struct yealink_dev {int* lcdMap; TYPE_3__ master; } ;
struct TYPE_6__ {int a; int m; } ;
struct TYPE_7__ {TYPE_4__* s; TYPE_1__ p; } ;
struct TYPE_9__ {char type; int m; int a; TYPE_2__ u; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct yealink_dev *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_4 >= FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_5 == '\t' || VAR_5 == '\n')
     return 0;

 VAR_3->lcdMap[VAR_4] = VAR_5;

 if (VAR_1[VAR_4].type == '.') {
  VAR_7 = VAR_1[VAR_4].u.p.a;
  VAR_8 = VAR_1[VAR_4].u.p.m;
  if (VAR_5 != ' ')
   VAR_3->master.b[VAR_7] |= VAR_8;
  else
   VAR_3->master.b[VAR_7] &= ~VAR_8;
  return 0;
 }

 VAR_9 = FUNC_1(&VAR_2, VAR_5);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1[0].u.s); VAR_6++) {
  VAR_8 = VAR_1[VAR_4].u.s[VAR_6].m;

  if (VAR_8 == 0)
   continue;

  VAR_7 = VAR_1[VAR_4].u.s[VAR_6].a;
  if (VAR_9 & 1)
   VAR_3->master.b[VAR_7] |= VAR_8;
  else
   VAR_3->master.b[VAR_7] &= ~VAR_8;
  VAR_9 = VAR_9 >> 1;
 }
 return 0;
}

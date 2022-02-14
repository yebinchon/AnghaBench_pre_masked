
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int qboolean ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {float value; } ;
struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {float value; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {float value; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {float value; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {float value; } ;


 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 TYPE_10__* VAR_0 ;
 TYPE_9__* VAR_1 ;
 TYPE_8__* VAR_2 ;
 TYPE_7__* VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static qboolean FUNC_2(int VAR_11, int *VAR_12, int *VAR_13)
{
 char *VAR_14;

 if (!VAR_11)
  return VAR_10;

 VAR_14 = FUNC_0(VAR_11);

 if (!VAR_14 || *VAR_14 != '+')
  return VAR_10;

 *VAR_13 = 0;

 if (FUNC_1(VAR_14, "+forward") == 0)
 {
  *VAR_12 = VAR_1->integer;
  *VAR_13 = VAR_0->value > 0.0f ? 1 : -1;
 }
 else if (FUNC_1(VAR_14, "+back") == 0)
 {
  *VAR_12 = VAR_1->integer;
  *VAR_13 = VAR_0->value > 0.0f ? -1 : 1;
 }
 else if (FUNC_1(VAR_14, "+moveleft") == 0)
 {
  *VAR_12 = VAR_5->integer;
  *VAR_13 = VAR_4->value > 0.0f ? -1 : 1;
 }
 else if (FUNC_1(VAR_14, "+moveright") == 0)
 {
  *VAR_12 = VAR_5->integer;
  *VAR_13 = VAR_4->value > 0.0f ? 1 : -1;
 }
 else if (FUNC_1(VAR_14, "+lookup") == 0)
 {
  *VAR_12 = VAR_3->integer;
  *VAR_13 = VAR_2->value > 0.0f ? -1 : 1;
 }
 else if (FUNC_1(VAR_14, "+lookdown") == 0)
 {
  *VAR_12 = VAR_3->integer;
  *VAR_13 = VAR_2->value > 0.0f ? 1 : -1;
 }
 else if (FUNC_1(VAR_14, "+left") == 0)
 {
  *VAR_12 = VAR_9->integer;
  *VAR_13 = VAR_8->value > 0.0f ? 1 : -1;
 }
 else if (FUNC_1(VAR_14, "+right") == 0)
 {
  *VAR_12 = VAR_9->integer;
  *VAR_13 = VAR_8->value > 0.0f ? -1 : 1;
 }
 else if (FUNC_1(VAR_14, "+moveup") == 0)
 {
  *VAR_12 = VAR_7->integer;
  *VAR_13 = VAR_6->value > 0.0f ? 1 : -1;
 }
 else if (FUNC_1(VAR_14, "+movedown") == 0)
 {
  *VAR_12 = VAR_7->integer;
  *VAR_13 = VAR_6->value > 0.0f ? -1 : 1;
 }

 return *VAR_13 != 0;
}

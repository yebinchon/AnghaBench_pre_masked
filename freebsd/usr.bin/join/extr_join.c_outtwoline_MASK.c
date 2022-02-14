
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_11__ {int filenum; size_t fieldno; } ;
struct TYPE_10__ {size_t joinf; } ;
struct TYPE_9__ {size_t fieldcnt; } ;
typedef TYPE_1__ LINE ;
typedef TYPE_2__ INPUT ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_8__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_1__*,size_t,int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(INPUT *VAR_4, LINE *VAR_5, INPUT *VAR_6, LINE *VAR_7)
{
 u_long VAR_8;


 if (VAR_1)
  for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
   if (VAR_1[VAR_8].filenum == 0) {
    if (VAR_5->fieldcnt >= VAR_4->joinf)
     FUNC_2(VAR_5, VAR_4->joinf, 0);
    else
     FUNC_2(VAR_7, VAR_6->joinf, 0);
   } else if (VAR_1[VAR_8].filenum == 1)
    FUNC_2(VAR_5, VAR_1[VAR_8].fieldno, 0);
   else
    FUNC_2(VAR_7, VAR_1[VAR_8].fieldno, 0);
 else {




  FUNC_2(VAR_5, VAR_4->joinf, 0);
  for (VAR_8 = 0; VAR_8 < VAR_5->fieldcnt; ++VAR_8)
   if (VAR_4->joinf != VAR_8)
    FUNC_2(VAR_5, VAR_8, 0);
  for (VAR_8 = 0; VAR_8 < VAR_7->fieldcnt; ++VAR_8)
   if (VAR_6->joinf != VAR_8)
    FUNC_2(VAR_7, VAR_8, 0);
 }
 (void)FUNC_3("\n");
 if (FUNC_1(VAR_3))
  FUNC_0(1, "stdout");
 VAR_0 = 0;
}

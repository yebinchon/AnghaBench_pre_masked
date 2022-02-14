
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_9__ {unsigned int filenum; size_t fieldno; } ;
struct TYPE_8__ {size_t joinf; scalar_t__ number; } ;
struct TYPE_7__ {size_t fieldcnt; } ;
typedef TYPE_1__ LINE ;
typedef TYPE_2__ INPUT ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_1__*,size_t,int) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(INPUT *VAR_4, LINE *VAR_5)
{
 u_long VAR_6;






 if (VAR_1)
  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
   if (VAR_1[VAR_6].filenum == (unsigned)VAR_4->number)
    FUNC_2(VAR_5, VAR_1[VAR_6].fieldno, 0);
   else if (VAR_1[VAR_6].filenum == 0)
    FUNC_2(VAR_5, VAR_4->joinf, 0);
   else
    FUNC_2(VAR_5, 0, 1);
  }
 else {



  FUNC_2(VAR_5, VAR_4->joinf, 0);
  for (VAR_6 = 0; VAR_6 < VAR_5->fieldcnt; ++VAR_6)
   if (VAR_4->joinf != VAR_6)
    FUNC_2(VAR_5, VAR_6, 0);
 }
 (void)FUNC_3("\n");
 if (FUNC_1(VAR_3))
  FUNC_0(1, "stdout");
 VAR_0 = 0;
}

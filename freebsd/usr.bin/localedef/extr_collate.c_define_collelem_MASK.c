
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {char* symbol; int * ref; int * expand; } ;
typedef TYPE_1__ collelem_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;

void
FUNC_7(char *VAR_5, wchar_t *VAR_6)
{
 collelem_t *VAR_7;
 int VAR_8;

 if (FUNC_6(VAR_6) >= VAR_0) {
  FUNC_3(VAR_4,"expanded collation element too long");
  return;
 }

 if ((VAR_7 = FUNC_2(1, sizeof(*VAR_7))) == ((void*)0)) {
  FUNC_3(VAR_4, "out of memory");
  return;
 }
 VAR_7->expand = VAR_6;
 VAR_7->symbol = VAR_5;







 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7->ref[VAR_8] = FUNC_5();
 }


 if ((FUNC_0(VAR_3, &VAR_3, VAR_7) != ((void*)0)) ||
     (FUNC_0(VAR_2, &VAR_2, VAR_7) != ((void*)0))) {
  FUNC_3(VAR_4, "duplicate collating element definition");
  FUNC_4(VAR_7);
  return;
 }
 FUNC_1(VAR_3, &VAR_3, VAR_7);
 FUNC_1(VAR_2, &VAR_2, VAR_7);
}

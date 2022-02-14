
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash {int hstr; int hpt; scalar_t__ hnew; struct hash* hnext; } ;
struct TYPE_2__ {struct hash* hnext; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int,int *) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void)
{
 int VAR_4;
 struct hash *VAR_5;
 FILE *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5 = VAR_2[VAR_4].hnext; VAR_5 != ((void*)0); VAR_5 = VAR_5->hnext)
   if (VAR_5->hnew)
    VAR_8++;
   else
    VAR_7++;
 if (VAR_8 == 0 && VAR_7 != 0)
  return;
 VAR_6 = FUNC_3(VAR_3, VAR_7 ? "r+" : "w");
 if (VAR_6 == ((void*)0))
  FUNC_0(4, "%s", VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5 = VAR_2[VAR_4].hnext; VAR_5 != ((void*)0); VAR_5 = VAR_5->hnext) {
   FUNC_4(VAR_5->hnew, VAR_5->hpt, VAR_5->hstr);
   if (VAR_5->hnew) {
    FUNC_5(VAR_6, VAR_5->hpt, 0);
    FUNC_7(FUNC_6(VAR_5->hstr, FUNC_8(VAR_5->hstr) + 1, 1, VAR_6));
    if (FUNC_2(VAR_6))
     FUNC_0(4, "%s", VAR_3);
   }
  }
 if (FUNC_1(VAR_6) == VAR_1)
  FUNC_0(4, "%s", VAR_3);
}

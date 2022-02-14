
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {scalar_t__ pfik_tzero; } ;
struct epoch_tracker {int dummy; } ;


 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 struct pfi_kif* FUNC_2 (int ,int *) ;
 struct pfi_kif* FUNC_3 (int ,int *,struct pfi_kif*) ;
 int VAR_0 ;
 int FUNC_4 (struct pfi_kif*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char const*,struct pfi_kif*) ;
 scalar_t__ VAR_2 ;

void
FUNC_6(const char *VAR_3, struct pfi_kif *VAR_4, int *VAR_5)
{
 struct epoch_tracker VAR_6;
 struct pfi_kif *VAR_7, *VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_6);
 for (VAR_7 = FUNC_2(VAR_1, &VAR_0); VAR_7; VAR_7 = VAR_8) {
  VAR_8 = FUNC_3(VAR_1, &VAR_0, VAR_7);
  if (FUNC_5(VAR_3, VAR_7))
   continue;
  if (*VAR_5 <= VAR_9++)
   break;
  if (!VAR_7->pfik_tzero)
   VAR_7->pfik_tzero = VAR_2;
  FUNC_4(VAR_7, VAR_4++, sizeof(*VAR_4));
  VAR_8 = FUNC_3(VAR_1, &VAR_0, VAR_7);
 }
 *VAR_5 = VAR_9;
 FUNC_1(VAR_6);
}

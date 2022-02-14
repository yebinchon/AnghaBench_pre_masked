
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int cap_rights_t ;
struct TYPE_2__ {int cd_desc; int cd_right; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(cap_rights_t *VAR_2, u_int VAR_3)
{
 u_int VAR_4, VAR_5, VAR_6;

 VAR_4 = 0;
 VAR_6 = 0;
 for (VAR_5 = FUNC_2(VAR_2); VAR_5 < VAR_3; VAR_5++) {
  if (VAR_5 != 0)
   FUNC_4(" ");
  else
   FUNC_4("-");
 }
 FUNC_5("capabilities");
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_0(VAR_2, VAR_0[VAR_5].cd_right)) {
   FUNC_4("{D:/%s}{l:capabilities/%s}", VAR_4 ? "," : "",
       VAR_0[VAR_5].cd_desc);
   VAR_6 += FUNC_1(VAR_0[VAR_5].cd_desc);
   if (VAR_4)
    VAR_6++;
   VAR_4++;
  }
 }
 FUNC_3("capabilities");
}

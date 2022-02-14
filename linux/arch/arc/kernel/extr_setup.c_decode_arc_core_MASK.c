
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct id_to_str {int id; char* str; } ;
struct TYPE_4__ {int dual; } ;
struct TYPE_3__ {int family; } ;
struct cpuinfo_arc {char* release; char* name; TYPE_2__ extn; TYPE_1__ core; } ;
struct bcr_uarch_build_arcv2 {int prod; int maj; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bcr_uarch_build_arcv2) ;
 struct id_to_str* VAR_1 ;
 struct id_to_str* VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_arc *VAR_3)
{
 struct bcr_uarch_build_arcv2 VAR_4;
 const struct id_to_str *VAR_5;







 if (VAR_3->core.family < 0x54) {

  for (VAR_5 = &VAR_2[0]; VAR_5->id != 0; VAR_5++) {
   if (VAR_3->core.family == VAR_5->id) {
    VAR_3->release = VAR_5->str;
    break;
   }
  }

  if (FUNC_1())
   VAR_3->name = "ARC700";
  else if (VAR_5->str)
   VAR_3->name = "HS38";
  else
   VAR_3->name = VAR_3->release = "Unknown";

  return;
 }







 FUNC_0(VAR_0, VAR_4);

 if (VAR_4.prod == 4) {
  VAR_3->name = "HS48";
  VAR_3->extn.dual = 1;

 } else {
  VAR_3->name = "HS38";
 }

 for (VAR_5 = &VAR_1[0]; VAR_5->id != 0xFF; VAR_5++) {
  if (VAR_4.maj == VAR_5->id) {
   VAR_3->release = VAR_5->str;
   break;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct group_des {int custom_port; int nports; int pipename; } ;
struct TYPE_2__ {int num_groups; int output_rings; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;
 struct group_des* VAR_3 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (struct group_des*,int ,int) ;
 struct group_des* FUNC_5 (struct group_des*,size_t) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(char *VAR_4)
{
 char *VAR_5 = FUNC_3(VAR_4, ':');
 static int VAR_6 = 0;
 struct group_des *VAR_7;

 FUNC_1("spec %s num_groups %d", VAR_4, VAR_2.num_groups);
 if (VAR_6 < VAR_2.num_groups + 1) {
  size_t VAR_8 = sizeof(*VAR_7) * (VAR_2.num_groups + 1);
  VAR_3 = FUNC_5(VAR_3, VAR_8);
  if (VAR_3 == ((void*)0)) {
   FUNC_0("out of memory");
   return 1;
  }
 }
 VAR_7 = &VAR_3[VAR_2.num_groups];
 FUNC_4(VAR_7, 0, sizeof(*VAR_7));

 if (VAR_5 != ((void*)0)) {
  if (VAR_5 - VAR_4 > VAR_1 - 8) {
   FUNC_0("name '%s' too long", VAR_4);
   return 1;
  }
  if (VAR_5 == VAR_4) {
   FUNC_0("missing prefix before ':' in '%s'", VAR_4);
   return 1;
  }
  FUNC_6(VAR_7->pipename, VAR_4, VAR_5 - VAR_4);
  VAR_7->custom_port = 1;
  VAR_5++;
 } else {






  VAR_5 = VAR_4;
 }
 if (*VAR_5 == '\0') {
  VAR_7->nports = VAR_0;
 } else {
  VAR_7->nports = FUNC_2(VAR_5);
  if (VAR_7->nports < 1) {
   FUNC_0("invalid number of pipes '%s' (must be at least 1)", VAR_5);
   return 1;
  }
 }
 VAR_2.output_rings += VAR_7->nports;
 VAR_2.num_groups++;
 return 0;
}

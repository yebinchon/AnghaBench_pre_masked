
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* index; void* count; } ;
struct TYPE_4__ {void* drc_count; void* drc_index; TYPE_1__ ic; } ;
struct pseries_hp_errorlog {TYPE_2__ _drc_u; int id_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(char **VAR_4, struct pseries_hp_errorlog *VAR_5)
{
 char *VAR_6;
 u32 VAR_7, VAR_8;

 VAR_6 = FUNC_3(VAR_4, " ");
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_4(VAR_6, "indexed-count")) {
  VAR_5->id_type = VAR_2;
  VAR_6 = FUNC_3(VAR_4, " ");
  if (!VAR_6) {
   FUNC_2("No DRC count specified.\n");
   return -VAR_0;
  }

  if (FUNC_1(VAR_6, 0, &VAR_7)) {
   FUNC_2("Invalid DRC count specified.\n");
   return -VAR_0;
  }

  VAR_6 = FUNC_3(VAR_4, " ");
  if (!VAR_6) {
   FUNC_2("No DRC Index specified.\n");
   return -VAR_0;
  }

  if (FUNC_1(VAR_6, 0, &VAR_8)) {
   FUNC_2("Invalid DRC Index specified.\n");
   return -VAR_0;
  }

  VAR_5->_drc_u.ic.count = FUNC_0(VAR_7);
  VAR_5->_drc_u.ic.index = FUNC_0(VAR_8);
 } else if (FUNC_4(VAR_6, "index")) {
  VAR_5->id_type = VAR_3;
  VAR_6 = FUNC_3(VAR_4, " ");
  if (!VAR_6) {
   FUNC_2("No DRC Index specified.\n");
   return -VAR_0;
  }

  if (FUNC_1(VAR_6, 0, &VAR_8)) {
   FUNC_2("Invalid DRC Index specified.\n");
   return -VAR_0;
  }

  VAR_5->_drc_u.drc_index = FUNC_0(VAR_8);
 } else if (FUNC_4(VAR_6, "count")) {
  VAR_5->id_type = VAR_1;
  VAR_6 = FUNC_3(VAR_4, " ");
  if (!VAR_6) {
   FUNC_2("No DRC count specified.\n");
   return -VAR_0;
  }

  if (FUNC_1(VAR_6, 0, &VAR_7)) {
   FUNC_2("Invalid DRC count specified.\n");
   return -VAR_0;
  }

  VAR_5->_drc_u.drc_count = FUNC_0(VAR_7);
 } else {
  FUNC_2("Invalid id_type specified.\n");
  return -VAR_0;
 }

 return 0;
}

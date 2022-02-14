
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct snmp_oid2str {int var; int strlen; struct snmp_index_entry* string; } ;
struct snmp_index_entry {struct snmp_index_entry* string; int index_list; int var; int strlen; } ;
struct enum_pairs {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
struct TYPE_2__ {int lno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 struct snmp_index_entry* FUNC_2 (int,int) ;
 int FUNC_3 (struct enum_pairs*) ;
 int VAR_8 ;
 int FUNC_4 (struct snmp_index_entry*) ;
 int FUNC_5 (struct snmp_toolinfo*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (struct snmp_toolinfo*,int*,int*,struct enum_pairs**) ;
 int FUNC_7 (int ,struct snmp_index_entry*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,struct enum_pairs*,int,int) ;
 int FUNC_10 (struct snmp_toolinfo*,struct snmp_index_entry*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static int32_t
FUNC_14(struct snmp_toolinfo *VAR_10, struct snmp_oid2str *VAR_11)
{
 int32_t VAR_12, VAR_13;
 enum snmp_tc VAR_14;
 struct snmp_index_entry *VAR_15;

 if ((VAR_15 = FUNC_2(1, sizeof(struct snmp_index_entry))) == ((void*)0)) {
  FUNC_12(VAR_1, "malloc() failed: %s", FUNC_11(VAR_8));
  return (-1);
 }

 FUNC_0(&(VAR_15->index_list));

 for (VAR_12 = 0, VAR_13 = FUNC_5(VAR_10); VAR_12 < VAR_2; VAR_12++) {
  int32_t VAR_16;
  struct enum_pairs *VAR_17 = ((void*)0);

  if (VAR_13 != VAR_7 && VAR_13 != VAR_4 && VAR_13 != VAR_5 &&
      VAR_13 != VAR_3)
   break;

  if ((VAR_16 = FUNC_6(VAR_10, &VAR_13, &VAR_14, &VAR_17)) < 0) {
   FUNC_3(VAR_17);
   FUNC_8(&(VAR_15->index_list));
   FUNC_4(VAR_15);
   return (-1);
  }

  if (FUNC_9(&(VAR_15->index_list), VAR_17, VAR_16,
      VAR_14) < 0) {
   FUNC_8(&(VAR_15->index_list));
   FUNC_3(VAR_17);
   FUNC_4(VAR_15);
   return (-1);
  }
 }

 if (VAR_12 == 0 || VAR_12 > VAR_2) {
  FUNC_13("Bad number of indexes at line %d", VAR_9->lno);
  FUNC_8(&(VAR_15->index_list));
  FUNC_4(VAR_15);
  return (-1);
 }

 if (VAR_13 != VAR_6) {
  FUNC_13("String expected after indexes at line %d", VAR_9->lno);
  FUNC_8(&(VAR_15->index_list));
  FUNC_4(VAR_15);
  return (-1);
 }

 VAR_15->string = VAR_11->string;
 VAR_15->strlen = VAR_11->strlen;
 FUNC_1(&(VAR_15->var), &(VAR_11->var));

 if ((VAR_12 = FUNC_10(VAR_10, VAR_15)) < 0) {
  FUNC_8(&(VAR_15->index_list));
  FUNC_4(VAR_15);
  return (-1);
 } else if (VAR_12 == 0) {

  FUNC_4(VAR_15->string);
  FUNC_4(VAR_15);
  return (0);
 }

 (void) FUNC_7(VAR_0, VAR_15);

 return (1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_table_index {int dummy; } ;
struct snmp_index_entry {int index_list; struct snmp_index_entry* string; } ;


 struct snmp_index_entry* FUNC_0 (struct snmp_table_index*) ;
 int FUNC_1 (struct snmp_table_index*,int ) ;
 int FUNC_2 (struct snmp_index_entry*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct snmp_table_index *VAR_1)
{
 struct snmp_index_entry *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_0);

  if (VAR_2->string)
   FUNC_2(VAR_2->string);

  FUNC_3(&(VAR_2->index_list));
  FUNC_2(VAR_2);
 }
}

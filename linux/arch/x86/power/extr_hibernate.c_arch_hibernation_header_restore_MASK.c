
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct restore_data_record {scalar_t__ magic; int e820_digest; int cr3; int jump_address_phys; int jump_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(void *VAR_6)
{
 struct restore_data_record *VAR_7 = VAR_6;

 if (VAR_7->magic != VAR_2) {
  FUNC_1("Unrecognized hibernate image header format!\n");
  return -VAR_0;
 }

 VAR_5 = VAR_7->jump_address;
 VAR_3 = VAR_7->jump_address_phys;
 VAR_4 = VAR_7->cr3;

 if (FUNC_0(VAR_7->e820_digest)) {
  FUNC_1("Hibernate inconsistent memory map detected!\n");
  return -VAR_1;
 }

 return 0;
}

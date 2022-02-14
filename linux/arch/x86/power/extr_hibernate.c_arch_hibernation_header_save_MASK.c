
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct restore_data_record {unsigned long jump_address; int cr3; int e820_digest; int jump_address_phys; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_2(void *VAR_5, unsigned int VAR_6)
{
 struct restore_data_record *VAR_7 = VAR_5;

 if (VAR_6 < sizeof(struct restore_data_record))
  return -VAR_1;
 VAR_7->magic = VAR_2;
 VAR_7->jump_address = (unsigned long)VAR_4;
 VAR_7->jump_address_phys = FUNC_0(VAR_4);
 VAR_7->cr3 = VAR_3 & ~VAR_0;

 return FUNC_1(VAR_7->e820_digest);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fadump_crash_info_header {unsigned long elfcorehdr_addr; int crashing_cpu; int magic_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fadump_crash_info_header* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct fadump_crash_info_header*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_2)
{
 struct fadump_crash_info_header *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 VAR_2 += sizeof(struct fadump_crash_info_header);

 FUNC_1(VAR_3, 0, sizeof(struct fadump_crash_info_header));
 VAR_3->magic_number = VAR_1;
 VAR_3->elfcorehdr_addr = VAR_2;

 VAR_3->crashing_cpu = VAR_0;

 return VAR_2;
}

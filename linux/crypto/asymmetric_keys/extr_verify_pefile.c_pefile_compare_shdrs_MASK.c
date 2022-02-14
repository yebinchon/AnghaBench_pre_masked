
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_header {scalar_t__ data_addr; scalar_t__ virtual_address; scalar_t__ virtual_size; scalar_t__ raw_data_size; int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct section_header *VAR_2 = VAR_0;
 const struct section_header *VAR_3 = VAR_1;
 int VAR_4;

 if (VAR_2->data_addr > VAR_3->data_addr)
  return 1;
 if (VAR_3->data_addr > VAR_2->data_addr)
  return -1;

 if (VAR_2->virtual_address > VAR_3->virtual_address)
  return 1;
 if (VAR_3->virtual_address > VAR_2->virtual_address)
  return -1;

 VAR_4 = FUNC_0(VAR_2->name, VAR_3->name);
 if (VAR_4 != 0)
  return VAR_4;

 if (VAR_2->virtual_size > VAR_3->virtual_size)
  return 1;
 if (VAR_3->virtual_size > VAR_2->virtual_size)
  return -1;

 if (VAR_2->raw_data_size > VAR_3->raw_data_size)
  return 1;
 if (VAR_3->raw_data_size > VAR_2->raw_data_size)
  return -1;

 return 0;
}

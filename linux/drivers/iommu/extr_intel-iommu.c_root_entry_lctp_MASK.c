
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_entry {int lo; } ;
typedef int phys_addr_t ;


 int VAR_0 ;

__attribute__((used)) static phys_addr_t FUNC_0(struct root_entry *VAR_1)
{
 if (!(VAR_1->lo & 1))
  return 0;

 return VAR_1->lo & VAR_0;
}

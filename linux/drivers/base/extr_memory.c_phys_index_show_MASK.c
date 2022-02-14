
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {unsigned long start_section_nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long) ;
 struct memory_block* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct memory_block *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5;

 VAR_5 = VAR_4->start_section_nr / VAR_0;
 return FUNC_0(VAR_3, "%08lx\n", VAR_5);
}

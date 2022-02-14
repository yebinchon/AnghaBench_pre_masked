
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {scalar_t__ state; scalar_t__ start_section_nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,int) ;
 struct memory_block* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
         char *VAR_5)
{
 struct memory_block *VAR_6 = FUNC_4(VAR_3);
 unsigned long VAR_7;
 int VAR_8 = 1, VAR_9;

 if (VAR_6->state != VAR_0)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (!FUNC_1(VAR_6->start_section_nr + VAR_9))
   continue;
  VAR_7 = FUNC_2(VAR_6->start_section_nr + VAR_9);
  VAR_8 &= FUNC_0(VAR_7, VAR_1);
 }

out:
 return FUNC_3(VAR_5, "%d\n", VAR_8);
}

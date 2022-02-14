
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {scalar_t__ state; scalar_t__ section_count; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct memory_block*,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 struct memory_block* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4)
{
 struct memory_block *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->state == VAR_1)
  return 0;


 if (VAR_5->section_count != VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {scalar_t__ state; int online_type; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct memory_block*,scalar_t__,int ) ;
 struct memory_block* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 struct memory_block *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (VAR_4->state == VAR_1)
  return 0;






 if (VAR_4->online_type < 0)
  VAR_4->online_type = VAR_2;

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_0);


 VAR_4->online_type = -1;

 return VAR_5;
}

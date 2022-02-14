
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {unsigned long const* keybit; unsigned long const* swbit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const unsigned long *FUNC_1(struct input_dev *VAR_2,
        int VAR_3)
{
 FUNC_0(VAR_3 != VAR_1 && VAR_3 != VAR_0);

 return (VAR_3 == VAR_0) ? VAR_2->keybit : VAR_2->swbit;
}

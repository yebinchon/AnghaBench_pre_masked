
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __poll_t FUNC_0(struct file *VAR_2, poll_table *VAR_3)
{
        unsigned long VAR_4;

 VAR_4 = 0;
        if (VAR_4 != 0)
                return VAR_0 | VAR_1;
        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int private_data; } ;
typedef int __poll_t ;


 int FUNC_0 (int ,struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_0,
            struct poll_table_struct *VAR_1)
{
 return FUNC_0(VAR_0->private_data, VAR_0, VAR_1);
}

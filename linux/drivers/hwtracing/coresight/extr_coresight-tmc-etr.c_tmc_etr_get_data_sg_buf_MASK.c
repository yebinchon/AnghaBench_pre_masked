
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct etr_sg_table {int sg_table; } ;
struct etr_buf {struct etr_sg_table* private; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,size_t,char**) ;

__attribute__((used)) static ssize_t FUNC_1(struct etr_buf *VAR_0, u64 VAR_1,
           size_t VAR_2, char **VAR_3)
{
 struct etr_sg_table *VAR_4 = VAR_0->private;

 return FUNC_0(VAR_4->sg_table, VAR_1, VAR_2, VAR_3);
}

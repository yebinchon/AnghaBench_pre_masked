
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_sg_table {int sg_table; } ;
struct etr_buf {struct etr_sg_table* private; } ;


 int FUNC_0 (struct etr_sg_table*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct etr_buf *VAR_0)
{
 struct etr_sg_table *VAR_1 = VAR_0->private;

 if (VAR_1) {
  FUNC_1(VAR_1->sg_table);
  FUNC_0(VAR_1);
 }
}

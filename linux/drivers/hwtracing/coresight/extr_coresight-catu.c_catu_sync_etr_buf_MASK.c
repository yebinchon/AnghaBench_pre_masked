
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct tmc_sg_table {int dummy; } ;
struct etr_buf {scalar_t__ hwaddr; scalar_t__ len; scalar_t__ offset; scalar_t__ size; int full; struct catu_etr_buf* private; } ;
struct catu_etr_buf {struct tmc_sg_table* catu_table; } ;


 int FUNC_0 (struct tmc_sg_table*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct etr_buf *VAR_0, u64 VAR_1, u64 VAR_2)
{
 struct catu_etr_buf *VAR_3 = VAR_0->private;
 struct tmc_sg_table *VAR_4 = VAR_3->catu_table;
 u64 VAR_5, VAR_6;





 VAR_5 = VAR_1 - VAR_0->hwaddr;
 VAR_6 = VAR_2 - VAR_0->hwaddr;

 if (!VAR_0->full) {
  VAR_0->len = VAR_6 - VAR_5;
  if (VAR_6 < VAR_5)
   VAR_0->len += VAR_0->size;
 } else {
  VAR_0->len = VAR_0->size;
 }

 VAR_0->offset = VAR_5;
 FUNC_0(VAR_4, VAR_5, VAR_0->len);
}

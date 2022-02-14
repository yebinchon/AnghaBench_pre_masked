
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_mapping_info {int offset; int page_flag; int alloc_pgt_page; } ;
typedef int pgd_t ;
struct TYPE_2__ {unsigned long start; unsigned long end; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct x86_mapping_info*,int *,unsigned long,unsigned long) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct x86_mapping_info VAR_9 = {
  .alloc_pgt_page = VAR_5,
  .page_flag = VAR_3,
  .offset = VAR_4,
 };
 unsigned long VAR_10, VAR_11;
 pgd_t *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = (pgd_t *)FUNC_1(VAR_1);
 if (!VAR_12)
  return -VAR_0;


 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13)
  return VAR_13;


 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  VAR_10 = VAR_7[VAR_14].start << VAR_2;
  VAR_11 = VAR_7[VAR_14].end << VAR_2;

  VAR_13 = FUNC_2(&VAR_9, VAR_12, VAR_10, VAR_11);
  if (VAR_13)
   return VAR_13;
 }

 VAR_8 = FUNC_0(VAR_12);
 return 0;
}

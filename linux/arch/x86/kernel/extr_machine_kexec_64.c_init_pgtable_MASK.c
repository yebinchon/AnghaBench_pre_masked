
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_mapping_info {int direct_gbpages; int kernpg_flag; int page_flag; struct kimage* context; int alloc_pgt_page; } ;
struct kimage {int nr_segments; TYPE_1__* segment; } ;
typedef int pgd_t ;
struct TYPE_4__ {unsigned long start; unsigned long end; } ;
struct TYPE_3__ {unsigned long mem; unsigned long memsz; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct kimage*,int *) ;
 int FUNC_3 (struct x86_mapping_info*,int *,unsigned long,unsigned long) ;
 int FUNC_4 (struct x86_mapping_info*,int *) ;
 int FUNC_5 (struct x86_mapping_info*,int *) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct kimage *VAR_8, unsigned long VAR_9)
{
 struct x86_mapping_info VAR_10 = {
  .alloc_pgt_page = VAR_4,
  .context = VAR_8,
  .page_flag = VAR_3,
  .kernpg_flag = VAR_1,
 };
 unsigned long VAR_11, VAR_12;
 pgd_t *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_13 = (pgd_t *)FUNC_0(VAR_9);
 FUNC_1(VAR_13);

 if (FUNC_6()) {
  VAR_10.page_flag |= VAR_2;
  VAR_10.kernpg_flag |= VAR_2;
 }

 if (VAR_5)
  VAR_10.direct_gbpages = 1;

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_11 = VAR_7[VAR_15].start << VAR_0;
  VAR_12 = VAR_7[VAR_15].end << VAR_0;

  VAR_14 = FUNC_3(&VAR_10,
       VAR_13, VAR_11, VAR_12);
  if (VAR_14)
   return VAR_14;
 }







 for (VAR_15 = 0; VAR_15 < VAR_8->nr_segments; VAR_15++) {
  VAR_11 = VAR_8->segment[VAR_15].mem;
  VAR_12 = VAR_11 + VAR_8->segment[VAR_15].memsz;

  VAR_14 = FUNC_3(&VAR_10,
       VAR_13, VAR_11, VAR_12);

  if (VAR_14)
   return VAR_14;
 }





 VAR_14 = FUNC_5(&VAR_10, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(&VAR_10, VAR_13);
 if (VAR_14)
  return VAR_14;

 return FUNC_2(VAR_8, VAR_13);
}

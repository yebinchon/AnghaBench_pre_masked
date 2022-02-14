
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hd_struct {scalar_t__ start_sect; } ;
struct TYPE_3__ {scalar_t__ bi_sector; int bi_size; } ;
struct bio {scalar_t__ bi_partno; TYPE_1__ bi_iter; TYPE_2__* bi_disk; } ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hd_struct* FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*,struct hd_struct*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct hd_struct*) ;
 int FUNC_6 (struct hd_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct hd_struct*,int ) ;
 int FUNC_10 (int ,struct bio*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static inline int FUNC_12(struct bio *VAR_2)
{
 struct hd_struct *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_7();
 VAR_3 = FUNC_0(VAR_2->bi_disk, VAR_2->bi_partno);
 if (FUNC_11(!VAR_3))
  goto out;
 if (FUNC_11(FUNC_9(VAR_3, VAR_2->bi_iter.bi_size)))
  goto out;
 if (FUNC_11(FUNC_2(VAR_2, VAR_3)))
  goto out;





 if (FUNC_4(VAR_2) || FUNC_3(VAR_2) == VAR_1) {
  if (FUNC_1(VAR_2, FUNC_6(VAR_3)))
   goto out;
  VAR_2->bi_iter.bi_sector += VAR_3->start_sect;
  FUNC_10(VAR_2->bi_disk->queue, VAR_2, FUNC_5(VAR_3),
          VAR_2->bi_iter.bi_sector - VAR_3->start_sect);
 }
 VAR_2->bi_partno = 0;
 VAR_4 = 0;
out:
 FUNC_8();
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line {int lock; TYPE_2__* w_err_gc; int vsc; int invalid_bitmap; int nr_valid_lbas; int left_msecs; int map_bitmap; TYPE_1__* emeta; } ;
struct pblk {int dev; } ;
typedef scalar_t__ __le64 ;
struct TYPE_4__ {int has_write_err; } ;
struct TYPE_3__ {int buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (struct pblk*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct ppa_addr*) ;
 size_t FUNC_4 (struct pblk*,struct ppa_addr) ;
 struct pblk_line* FUNC_5 (struct pblk*,struct ppa_addr) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (size_t,int ) ;

__attribute__((used)) static void FUNC_9(struct pblk *VAR_1, struct ppa_addr *VAR_2,
  int VAR_3)
{
 struct pblk_line *VAR_4;
 struct ppa_addr VAR_5 = *VAR_2;
 __le64 VAR_6 = FUNC_0(VAR_0);
 __le64 *VAR_7;
 u64 VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 VAR_4 = FUNC_5(VAR_1, *VAR_2);
 VAR_7 = FUNC_1(VAR_1, VAR_4->emeta->buf);

 FUNC_6(&VAR_4->lock);

 while (!VAR_9) {
  VAR_8 = FUNC_4(VAR_1, VAR_5);

  if (!FUNC_8(VAR_8, VAR_4->map_bitmap))
   VAR_4->left_msecs--;

  if (VAR_10 < VAR_3 && VAR_7[VAR_8] != VAR_6)
   VAR_4->nr_valid_lbas--;

  VAR_7[VAR_8] = VAR_6;

  if (!FUNC_8(VAR_8, VAR_4->invalid_bitmap))
   FUNC_2(VAR_4->vsc, -1);

  VAR_9 = FUNC_3(VAR_1->dev, &VAR_5);

  VAR_10++;
 }

 VAR_4->w_err_gc->has_write_err = 1;
 FUNC_7(&VAR_4->lock);
}

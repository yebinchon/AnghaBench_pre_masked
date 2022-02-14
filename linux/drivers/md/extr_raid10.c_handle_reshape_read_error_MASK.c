
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {int copies; TYPE_1__* mirrors; int prev; } ;
struct r10bio {int sectors; TYPE_2__* devs; int sector; } ;
struct page {int dummy; } ;
struct mddev {int recovery; struct r10conf* private; } ;
struct md_rdev {int nr_pending; int flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {struct page** pages; } ;
struct TYPE_5__ {int devnum; scalar_t__ addr; int bio; } ;
struct TYPE_4__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct r10bio*) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (struct r10bio*) ;
 struct r10bio* FUNC_4 (int ,int ) ;
 struct md_rdev* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct md_rdev*,struct mddev*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct r10bio*,int ,int) ;
 int FUNC_11 (struct md_rdev*,scalar_t__,int,struct page*,int ,int ,int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct mddev *VAR_9,
         struct r10bio *VAR_10)
{

 int VAR_11 = VAR_10->sectors;
 struct r10conf *VAR_12 = VAR_9->private;
 struct r10bio *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 struct page **VAR_16;

 VAR_13 = FUNC_4(FUNC_10(VAR_13, VAR_8, VAR_12->copies), VAR_3);
 if (!VAR_13) {
  FUNC_9(VAR_5, &VAR_9->recovery);
  return -VAR_1;
 }


 VAR_16 = FUNC_2(VAR_10->devs[0].bio)->pages;

 VAR_13->sector = VAR_10->sector;
 FUNC_0(&VAR_12->prev, VAR_13);

 while (VAR_11) {
  int VAR_17 = VAR_11;
  int VAR_18 = 0;
  int VAR_19 = VAR_14;

  if (VAR_17 > (VAR_6 >> 9))
   VAR_17 = VAR_6 >> 9;

  FUNC_6();
  while (!VAR_18) {
   int VAR_20 = VAR_13->devs[VAR_14].devnum;
   struct md_rdev *VAR_21 = FUNC_5(VAR_12->mirrors[VAR_20].rdev);
   sector_t VAR_22;
   if (VAR_21 == ((void*)0) ||
       FUNC_12(VAR_2, &VAR_21->flags) ||
       !FUNC_12(VAR_4, &VAR_21->flags))
    goto failed;

   VAR_22 = VAR_13->devs[VAR_14].addr + VAR_15 * VAR_6;
   FUNC_1(&VAR_21->nr_pending);
   FUNC_7();
   VAR_18 = FUNC_11(VAR_21,
            VAR_22,
            VAR_17 << 9,
            VAR_16[VAR_15],
            VAR_7, 0, 0);
   FUNC_8(VAR_21, VAR_9);
   FUNC_6();
   if (VAR_18)
    break;
  failed:
   VAR_14++;
   if (VAR_14 >= VAR_12->copies)
    VAR_14 = 0;
   if (VAR_14 == VAR_19)
    break;
  }
  FUNC_7();
  if (!VAR_18) {

   FUNC_9(VAR_5,
    &VAR_9->recovery);
   FUNC_3(VAR_13);
   return -VAR_0;
  }
  VAR_11 -= VAR_17;
  VAR_15++;
 }
 FUNC_3(VAR_13);
 return 0;
}

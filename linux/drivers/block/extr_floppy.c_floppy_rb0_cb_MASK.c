
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb0_cbdata {int drive; int complete; } ;
struct bio {scalar_t__ bi_status; scalar_t__ bi_private; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_2)
{
 struct rb0_cbdata *VAR_3 = (struct rb0_cbdata *)VAR_2->bi_private;
 int VAR_4 = VAR_3->drive;

 if (VAR_2->bi_status) {
  FUNC_1("floppy: error %d while reading block 0\n",
   VAR_2->bi_status);
  FUNC_2(VAR_0, &VAR_1->flags);
 }
 FUNC_0(&VAR_3->complete);
}

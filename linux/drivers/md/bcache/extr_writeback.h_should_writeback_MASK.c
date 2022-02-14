
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; TYPE_3__* c; } ;
struct cached_dev {scalar_t__ partial_stripes_expensive; TYPE_4__ disk; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
struct TYPE_6__ {unsigned int in_use; } ;
struct TYPE_7__ {TYPE_2__ gc_stats; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct cached_dev*,int ,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_5(struct cached_dev *VAR_7, struct bio *VAR_8,
        unsigned int VAR_9, bool VAR_10)
{
 unsigned int VAR_11 = VAR_7->disk.c->gc_stats.in_use;

 if (VAR_9 != VAR_1 ||
     FUNC_4(VAR_0, &VAR_7->disk.flags) ||
     VAR_11 > VAR_6)
  return 0;

 if (FUNC_1(VAR_8) == VAR_3)
  return 0;

 if (VAR_7->partial_stripes_expensive &&
     FUNC_0(VAR_7, VAR_8->bi_iter.bi_sector,
        FUNC_2(VAR_8)))
  return 1;

 if (VAR_10)
  return 0;

 return (FUNC_3(VAR_8->bi_opf) ||
  VAR_8->bi_opf & (VAR_2|VAR_4) ||
  VAR_11 <= VAR_5);
}

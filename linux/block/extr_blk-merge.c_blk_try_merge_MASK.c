
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef enum elv_merge { ____Placeholder_elv_merge } elv_merge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;

enum elv_merge FUNC_4(struct request *VAR_4, struct bio *VAR_5)
{
 if (FUNC_1(VAR_4))
  return VAR_1;
 else if (FUNC_2(VAR_4) + FUNC_3(VAR_4) == VAR_5->bi_iter.bi_sector)
  return VAR_0;
 else if (FUNC_2(VAR_4) - FUNC_0(VAR_5) == VAR_5->bi_iter.bi_sector)
  return VAR_2;
 return VAR_3;
}

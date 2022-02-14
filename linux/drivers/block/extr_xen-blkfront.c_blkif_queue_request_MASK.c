
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct blkfront_ring_info {TYPE_1__* dev_info; } ;
struct TYPE_2__ {scalar_t__ connected; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*,struct blkfront_ring_info*) ;
 int FUNC_1 (struct request*,struct blkfront_ring_info*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct request *VAR_3, struct blkfront_ring_info *VAR_4)
{
 if (FUNC_3(VAR_4->dev_info->connected != VAR_0))
  return 1;

 if (FUNC_3(FUNC_2(VAR_3) == VAR_1 ||
       FUNC_2(VAR_3) == VAR_2))
  return FUNC_0(VAR_3, VAR_4);
 else
  return FUNC_1(VAR_3, VAR_4);
}

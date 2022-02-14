
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; } ;
struct blkfront_info {int feature_fua; int feature_flush; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;

__attribute__((used)) static inline bool FUNC_2(struct request *VAR_2,
            struct blkfront_info *VAR_3)
{
 return (FUNC_0(VAR_2) ||
  ((FUNC_1(VAR_2) == VAR_1) &&
   !VAR_3->feature_flush) ||
  ((VAR_2->cmd_flags & VAR_0) &&
   !VAR_3->feature_fua));
}

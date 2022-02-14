
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; scalar_t__ rq_disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;

__attribute__((used)) static inline bool FUNC_1(struct request *VAR_1)
{
 return VAR_1->rq_disk &&
        (VAR_1->rq_flags & VAR_0) &&
  !FUNC_0(VAR_1);
}

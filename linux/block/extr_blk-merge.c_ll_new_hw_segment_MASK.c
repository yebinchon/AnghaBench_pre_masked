
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ nr_phys_segments; int q; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ,struct request*,struct bio*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct request*) ;

__attribute__((used)) static inline int FUNC_3(struct request *VAR_0, struct bio *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_0->nr_phys_segments + VAR_2 > FUNC_1(VAR_0->q))
  goto no_merge;

 if (FUNC_0(VAR_0->q, VAR_0, VAR_1) == 0)
  goto no_merge;





 VAR_0->nr_phys_segments += VAR_2;
 return 1;

no_merge:
 FUNC_2(VAR_0->q, VAR_0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cblock_range {scalar_t__ begin; scalar_t__ end; } ;
struct cache {int commit_requested; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cache*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cache *VAR_0, struct cblock_range *VAR_1)
{
 int VAR_2 = 0;







 while (VAR_1->begin != VAR_1->end) {
  VAR_2 = FUNC_1(VAR_0, VAR_1->begin);
  if (VAR_2)
   return VAR_2;

  VAR_1->begin = FUNC_0(VAR_1->begin);
 }

 VAR_0->commit_requested = 1;
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct cache*,struct bio*) ;
 scalar_t__ FUNC_2 (struct cache*,struct bio*,int ,int*) ;

__attribute__((used)) static bool FUNC_3(struct cache *VAR_1, struct bio *VAR_2)
{
 bool VAR_3;

 if (FUNC_2(VAR_1, VAR_2, FUNC_1(VAR_1, VAR_2), &VAR_3) == VAR_0)
  FUNC_0(VAR_2);

 return VAR_3;
}

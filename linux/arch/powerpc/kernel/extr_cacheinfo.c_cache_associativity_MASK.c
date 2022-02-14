
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache const*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct cache const*,unsigned int*) ;
 scalar_t__ FUNC_2 (struct cache const*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(const struct cache *VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 if (FUNC_1(VAR_1, &VAR_4))
  goto err;




 if (VAR_4 == 1) {
  *VAR_2 = 0;
  return 0;
 }

 if (FUNC_0(VAR_1, &VAR_3))
  goto err;
 if (FUNC_2(VAR_1, &VAR_5))
  goto err;

 if (!(VAR_4 > 0 && VAR_5 > 0 && VAR_3 > 0))
  goto err;

 *VAR_2 = (VAR_5 / VAR_4) / VAR_3;
 return 0;
err:
 return -VAR_0;
}

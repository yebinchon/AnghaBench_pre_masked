
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int dummy; } ;


 int FUNC_0 (struct dm_cache_metadata*,int ,int ) ;
 int FUNC_1 (unsigned int,unsigned long*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dm_cache_metadata *VAR_0, unsigned VAR_1, unsigned long *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0, FUNC_2(VAR_4), FUNC_1(VAR_4, VAR_2));
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}

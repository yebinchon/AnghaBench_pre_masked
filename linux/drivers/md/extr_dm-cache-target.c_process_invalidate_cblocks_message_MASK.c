
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cblock_range {int dummy; } ;
struct cache {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct cache*,char const*,struct cblock_range*) ;
 int FUNC_3 (struct cache*) ;
 int FUNC_4 (struct cache*,struct cblock_range*) ;
 int FUNC_5 (struct cache*,struct cblock_range*) ;

__attribute__((used)) static int FUNC_6(struct cache *VAR_1, unsigned VAR_2,
           const char **VAR_3)
{
 int VAR_4 = 0;
 unsigned VAR_5;
 struct cblock_range VAR_6;

 if (!FUNC_3(VAR_1)) {
  FUNC_0("%s: cache has to be in passthrough mode for invalidation",
        FUNC_1(VAR_1));
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_2(VAR_1, VAR_3[VAR_5], &VAR_6);
  if (VAR_4)
   break;

  VAR_4 = FUNC_5(VAR_1, &VAR_6);
  if (VAR_4)
   break;




  VAR_4 = FUNC_4(VAR_1, &VAR_6);
  if (VAR_4)
   break;
 }

 return VAR_4;
}

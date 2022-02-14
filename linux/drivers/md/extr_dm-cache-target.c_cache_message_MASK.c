
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct cache* private; } ;
struct cache {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cache*) ;
 scalar_t__ FUNC_2 (struct cache*) ;
 int FUNC_3 (struct cache*,unsigned int,char const**) ;
 int FUNC_4 (struct cache*,char*,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_3, unsigned VAR_4, char **VAR_5,
    char *VAR_6, unsigned VAR_7)
{
 struct cache *VAR_8 = VAR_3->private;

 if (!VAR_4)
  return -VAR_1;

 if (FUNC_2(VAR_8) >= VAR_0) {
  FUNC_0("%s: unable to service cache target messages in READ_ONLY or FAIL mode",
        FUNC_1(VAR_8));
  return -VAR_2;
 }

 if (!FUNC_5(VAR_5[0], "invalidate_cblocks"))
  return FUNC_3(VAR_8, VAR_4 - 1, (const char **) VAR_5 + 1);

 if (VAR_4 != 2)
  return -VAR_1;

 return FUNC_4(VAR_8, VAR_5[0], VAR_5[1]);
}

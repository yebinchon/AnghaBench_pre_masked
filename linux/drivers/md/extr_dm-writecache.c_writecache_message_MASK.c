
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int dummy; } ;
struct dm_target {struct dm_writecache* private; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,char**,struct dm_writecache*) ;
 int FUNC_2 (unsigned int,char**,struct dm_writecache*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_1, unsigned VAR_2, char **VAR_3,
         char *VAR_4, unsigned VAR_5)
{
 int VAR_6 = -VAR_0;
 struct dm_writecache *VAR_7 = VAR_1->private;

 if (!FUNC_3(VAR_3[0], "flush"))
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_7);
 else if (!FUNC_3(VAR_3[0], "flush_on_suspend"))
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_7);
 else
  FUNC_0("unrecognised message received: %s", VAR_3[0]);

 return VAR_6;
}

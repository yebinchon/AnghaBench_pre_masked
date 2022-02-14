
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {int dummy; } ;
struct dm_target {struct switch_ctx* private; } ;
typedef int DEFINE_MUTEX ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct switch_ctx*,unsigned int,char**) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_1, unsigned VAR_2, char **VAR_3,
     char *VAR_4, unsigned VAR_5)
{
 static DEFINE_MUTEX(VAR_6);

 struct switch_ctx *VAR_7 = VAR_1->private;
 int VAR_8 = -VAR_0;

 FUNC_1(&VAR_6);

 if (!FUNC_4(VAR_3[0], "set_region_mappings"))
  VAR_8 = FUNC_3(VAR_7, VAR_2, VAR_3);
 else
  FUNC_0("Unrecognised message received.");

 FUNC_2(&VAR_6);

 return VAR_8;
}

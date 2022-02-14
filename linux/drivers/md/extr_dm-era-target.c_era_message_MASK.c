
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era {int dummy; } ;
struct dm_target {struct era* private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct era*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_4, unsigned VAR_5, char **VAR_6,
         char *VAR_7, unsigned VAR_8)
{
 struct era *VAR_9 = VAR_4->private;

 if (VAR_5 != 1) {
  FUNC_0("incorrect number of message arguments");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_6[0], "checkpoint"))
  return FUNC_1(VAR_9, VAR_1);

 if (!FUNC_2(VAR_6[0], "take_metadata_snap"))
  return FUNC_1(VAR_9, VAR_3);

 if (!FUNC_2(VAR_6[0], "drop_metadata_snap"))
  return FUNC_1(VAR_9, VAR_2);

 FUNC_0("unsupported message '%s'", VAR_6[0]);
 return -VAR_0;
}

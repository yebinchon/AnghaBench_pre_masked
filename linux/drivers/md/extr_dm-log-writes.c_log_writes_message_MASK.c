
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {int dummy; } ;
struct dm_target {struct log_writes_c* private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct log_writes_c*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_1, unsigned VAR_2, char **VAR_3,
         char *VAR_4, unsigned VAR_5)
{
 int VAR_6 = -VAR_0;
 struct log_writes_c *VAR_7 = VAR_1->private;

 if (VAR_2 != 2) {
  FUNC_0("Invalid log-writes message arguments, expect 2 arguments, got %d", VAR_2);
  return VAR_6;
 }

 if (!FUNC_2(VAR_3[0], "mark"))
  VAR_6 = FUNC_1(VAR_7, VAR_3[1]);
 else
  FUNC_0("Unrecognised log writes target message received: %s", VAR_3[0]);

 return VAR_6;
}

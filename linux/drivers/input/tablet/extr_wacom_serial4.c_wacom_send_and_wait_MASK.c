
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wacom {int result; scalar_t__ expect; int cmd_done; } ;
struct serio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wacom*) ;
 int FUNC_2 (struct serio*,scalar_t__ const*) ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct wacom *VAR_1, struct serio *VAR_2,
          const u8 *VAR_3, const char *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 VAR_1->expect = VAR_3[1];
 FUNC_0(&VAR_1->cmd_done);

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_3(&VAR_1->cmd_done, VAR_0);
 if (VAR_6 == 0) {

  FUNC_1(VAR_1);
 }

 VAR_1->expect = 0;
 return VAR_1->result;
}

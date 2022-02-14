
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int timeout; } ;
struct gendisk {int dummy; } ;
struct TYPE_2__ {int* cmd; int cmd_len; scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int VAR_2 ;
 int FUNC_2 (struct request_queue*,struct gendisk*,struct request*,int ) ;
 struct request* FUNC_3 (struct request_queue*,int ,int ) ;
 int FUNC_4 (struct request*) ;
 TYPE_1__* FUNC_5 (struct request*) ;

__attribute__((used)) static int FUNC_6(struct request_queue *VAR_3, struct gendisk *VAR_4,
         int VAR_5, int VAR_6)
{
 struct request *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_3, VAR_2, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 VAR_7->timeout = VAR_0;
 FUNC_5(VAR_7)->cmd[0] = VAR_5;
 FUNC_5(VAR_7)->cmd[4] = VAR_6;
 FUNC_5(VAR_7)->cmd_len = 6;
 FUNC_2(VAR_3, VAR_4, VAR_7, 0);
 VAR_8 = FUNC_5(VAR_7)->result ? -VAR_1 : 0;
 FUNC_4(VAR_7);

 return VAR_8;
}

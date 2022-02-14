
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adb_request {int reply_len; int* reply; } ;
struct TYPE_2__ {int handler_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct adb_request*,int *,int,int,int ,...) ;

__attribute__((used)) static int FUNC_3(int VAR_3, int VAR_4)
{
 struct adb_request VAR_5;

 if (VAR_2[VAR_3].handler_id == VAR_4)
     return 1;
 FUNC_2(&VAR_5, ((void*)0), VAR_1, 3,
     FUNC_1(VAR_3, 3), VAR_3 | 0x20, VAR_4);
 FUNC_2(&VAR_5, ((void*)0), VAR_1 | VAR_0, 1,
     FUNC_0(VAR_3, 3));
 if (VAR_5.reply_len < 2)
     return 0;
 if (VAR_5.reply[2] != VAR_4)
     return 0;
 VAR_2[VAR_3].handler_id = VAR_5.reply[2];

 return 1;
}

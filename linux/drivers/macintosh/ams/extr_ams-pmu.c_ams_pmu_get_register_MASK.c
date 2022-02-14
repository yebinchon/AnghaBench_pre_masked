
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adb_request {scalar_t__ reply_len; int * reply; int * arg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct adb_request*,int ,int,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u8 FUNC_3(u8 VAR_3)
{
 static struct adb_request VAR_4;
 FUNC_0(VAR_2);

 VAR_4.arg = &VAR_2;
 if (FUNC_1(&VAR_4, VAR_1, 3, VAR_0, 0x01, VAR_3))
  return 0;

 FUNC_2(&VAR_2);

 if (VAR_4.reply_len > 0)
  return VAR_4.reply[0];
 else
  return 0;
}

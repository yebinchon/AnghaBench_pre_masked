
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct request {int dummy; } ;
struct TYPE_2__ {int* cmd; int cmd_len; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct request*) ;

__attribute__((used)) static bool FUNC_1(struct request *VAR_6)
{
 u8 *VAR_7 = FUNC_0(VAR_6)->cmd;


 if (VAR_7[0] == VAR_4 || VAR_7[0] == VAR_5) {
  VAR_7[8] = VAR_7[4];
  VAR_7[5] = VAR_7[3];
  VAR_7[4] = VAR_7[2];
  VAR_7[3] = VAR_7[1] & 0x1f;
  VAR_7[2] = 0;
  VAR_7[1] &= 0xe0;
  VAR_7[0] += (VAR_3 - VAR_4);
  FUNC_0(VAR_6)->cmd_len = 10;
  return 1;
 }






 if (VAR_7[0] == VAR_2 || VAR_7[0] == VAR_1) {
  FUNC_0(VAR_6)->result = VAR_0;
  return 0;
 }

 return 1;
}

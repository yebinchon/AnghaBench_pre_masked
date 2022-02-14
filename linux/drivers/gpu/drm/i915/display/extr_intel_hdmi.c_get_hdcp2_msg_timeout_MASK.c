
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ msg_id; int timeout; int timeout2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(u8 VAR_3, bool VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_2[VAR_5].msg_id == VAR_3 &&
      (VAR_3 != VAR_1 || VAR_4))
   return VAR_2[VAR_5].timeout;
  else if (VAR_2[VAR_5].msg_id == VAR_3)
   return VAR_2[VAR_5].timeout2;

 return -VAR_0;
}

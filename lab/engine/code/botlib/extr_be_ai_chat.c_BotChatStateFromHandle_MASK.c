
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bot_chatstate_t ;
struct TYPE_2__ {int (* Print ) (int ,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

bot_chatstate_t *FUNC_2(int VAR_4)
{
 if (VAR_4 <= 0 || VAR_4 > VAR_0)
 {
  VAR_3.Print(VAR_1, "chat state handle %d out of range\n", VAR_4);
  return ((void*)0);
 }
 if (!VAR_2[VAR_4])
 {
  VAR_3.Print(VAR_1, "invalid chat state %d\n", VAR_4);
  return ((void*)0);
 }
 return VAR_2[VAR_4];
}

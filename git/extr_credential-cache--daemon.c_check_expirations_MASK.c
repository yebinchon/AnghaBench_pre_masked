
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct TYPE_4__ {scalar_t__ expiration; int item; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static timestamp_t FUNC_3(void)
{
 static timestamp_t VAR_3;
 int VAR_4 = 0;
 timestamp_t VAR_5 = FUNC_2(((void*)0));
 timestamp_t VAR_6 = VAR_0;






 if (!VAR_3)
  VAR_3 = VAR_5 + 30;

 while (VAR_4 < VAR_2) {
  if (VAR_1[VAR_4].expiration <= VAR_5) {
   VAR_2--;
   FUNC_0(&VAR_1[VAR_4].item);
   if (VAR_4 != VAR_2)
    FUNC_1(&VAR_1[VAR_4], &VAR_1[VAR_2], sizeof(*VAR_1));





   VAR_3 = VAR_5 + 30;
  }
  else {
   if (VAR_1[VAR_4].expiration < VAR_6)
    VAR_6 = VAR_1[VAR_4].expiration;
   VAR_4++;
  }
 }

 if (!VAR_2) {
  if (VAR_3 <= VAR_5)
   return 0;
  VAR_6 = VAR_3;
 }

 return VAR_6 - VAR_5;
}

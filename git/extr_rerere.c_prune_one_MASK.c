
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct rerere_id {int dummy; } ;


 scalar_t__ FUNC_0 (struct rerere_id*) ;
 scalar_t__ FUNC_1 (struct rerere_id*) ;
 int FUNC_2 (struct rerere_id*) ;

__attribute__((used)) static void FUNC_3(struct rerere_id *VAR_0,
        timestamp_t VAR_1, timestamp_t VAR_2)
{
 timestamp_t VAR_3;
 timestamp_t VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  VAR_4 = VAR_1;
 else {
  VAR_3 = FUNC_0(VAR_0);
  if (!VAR_3)
   return;
  VAR_4 = VAR_2;
 }
 if (VAR_3 < VAR_4)
  FUNC_2(VAR_0);
}

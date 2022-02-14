
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dc_link {scalar_t__ sync_lt_in_progress; } ;
typedef int state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_link*,int ,int *,int) ;

void FUNC_1(struct dc_link *VAR_3, bool VAR_4)
{
 uint8_t VAR_5;

 VAR_5 = VAR_4 ? VAR_0 : VAR_1;

 if (VAR_3->sync_lt_in_progress)
  return;

 FUNC_0(VAR_3, VAR_2, &VAR_5,
   sizeof(VAR_5));
}

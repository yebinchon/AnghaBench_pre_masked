
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link {int sync_lt_in_progress; int connector_signal; } ;


 int FUNC_0 (struct dc_link*,int ) ;
 int FUNC_1 (struct dc_link*,int) ;

bool FUNC_2(struct dc_link *VAR_0, bool VAR_1)
{



 if (VAR_1 == 1) {
  FUNC_0(VAR_0, VAR_0->connector_signal);



 }

 VAR_0->sync_lt_in_progress = 0;
 return 1;
}

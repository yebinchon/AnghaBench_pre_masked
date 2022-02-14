
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pack_progress_calls; } ;
typedef TYPE_1__ record_callbacks_data ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(
 int VAR_0, unsigned int VAR_1, unsigned int VAR_2, void* VAR_3)
{
 record_callbacks_data *VAR_4 = (record_callbacks_data *) VAR_3;
 FUNC_0(VAR_0); FUNC_0(VAR_1); FUNC_0(VAR_2);
 if (VAR_4->pack_progress_calls < 0)
  return VAR_4->pack_progress_calls;

 VAR_4->pack_progress_calls++;
 return 0;
}

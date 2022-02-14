
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ date_spec_hr; } ;
struct TYPE_4__ {int date; int time; } ;
typedef TYPE_1__ GLogItem ;
typedef int GKeyData ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2 (GKeyData * VAR_1, GLogItem * VAR_2)
{
  if (!VAR_2->date || !VAR_2->time)
    return 1;


  if (VAR_0.date_spec_hr)
    FUNC_1 (&VAR_2->date, VAR_2->time);

  FUNC_0 (VAR_1, VAR_2->date, VAR_2->date);

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_type; } ;


 int FUNC_0 (size_t*) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static unsigned FUNC_1(int VAR_3)
{
 if (VAR_3 >= FUNC_0(VAR_1))
  return VAR_0;

 return VAR_2[VAR_1[VAR_3]].event_type;
}

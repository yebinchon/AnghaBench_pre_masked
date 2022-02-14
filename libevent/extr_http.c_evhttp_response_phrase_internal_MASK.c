
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; char const** responses; scalar_t__ num_responses; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(int VAR_1)
{
 int VAR_2 = VAR_1 / 100 - 1;
 int VAR_3 = VAR_1 % 100;


 if (VAR_2 < 0 || VAR_2 >= (int) FUNC_0(VAR_0))
  return "Unknown Status Class";


 if (VAR_3 >= (int) VAR_0[VAR_2].num_responses)
  return VAR_0[VAR_2].name;

 return VAR_0[VAR_2].responses[VAR_3];
}

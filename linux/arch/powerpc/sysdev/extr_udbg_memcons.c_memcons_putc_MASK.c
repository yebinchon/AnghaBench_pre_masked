
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* output_pos; char* output_end; char* output_start; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(char VAR_1)
{
 char *VAR_2;

 *VAR_0.output_pos = VAR_1;
 FUNC_0();
 VAR_2 = VAR_0.output_pos + 1;
 if (VAR_2 >= VAR_0.output_end)
  VAR_2 = VAR_0.output_start;

 VAR_0.output_pos = VAR_2;
}

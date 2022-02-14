
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* input_pos; char* input_end; char* input_start; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

int FUNC_1(void)
{
 char VAR_1;
 char *VAR_2;

 if (*VAR_0.input_pos) {
  VAR_1 = *VAR_0.input_pos;

  VAR_2 = VAR_0.input_pos + 1;
  if (VAR_2 >= VAR_0.input_end)
   VAR_2 = VAR_0.input_start;
  else if (*VAR_2 == '\0')
   VAR_2 = VAR_0.input_start;

  *VAR_0.input_pos = '\0';
  FUNC_0();
  VAR_0.input_pos = VAR_2;
  return VAR_1;
 }

 return -1;
}

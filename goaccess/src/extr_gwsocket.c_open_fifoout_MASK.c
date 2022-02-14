
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* fifo_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*) ;

int
FUNC_2 (void)
{
  const char *VAR_4 = VAR_3.fifo_out ? VAR_3.fifo_out : VAR_2;
  int VAR_5;


  FUNC_1 (VAR_4);
  if ((VAR_5 = FUNC_0 (VAR_4, VAR_1 | VAR_0)) == -1)
    return -1;

  return VAR_5;
}

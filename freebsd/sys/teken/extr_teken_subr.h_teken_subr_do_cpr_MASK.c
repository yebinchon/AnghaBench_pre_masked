
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tp_col; scalar_t__ tp_row; } ;
struct TYPE_5__ {scalar_t__ ts_begin; } ;
struct TYPE_7__ {TYPE_2__ t_cursor; TYPE_1__ t_originreg; } ;
typedef TYPE_3__ teken_t ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t
FUNC_3(const teken_t *VAR_0, unsigned int VAR_1, char VAR_2[16])
{

 switch (VAR_1) {
 case 5:
  FUNC_1(VAR_2, "0n");
  return (2);
 case 6: {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_2, 16, "%u;%uR",
      (VAR_0->t_cursor.tp_row - VAR_0->t_originreg.ts_begin) + 1,
      VAR_0->t_cursor.tp_col + 1);

  if (VAR_3 >= 16)
   return (-1);
  return (VAR_3);
 }
 case 15:
  FUNC_1(VAR_2, "13n");
  return (3);
 case 25:
  FUNC_1(VAR_2, "20n");
  return (3);
 case 26:
  FUNC_1(VAR_2, "27;1n");
  return (5);
 default:
  FUNC_2("Unknown DSR\n");
  return (-1);
 }
}

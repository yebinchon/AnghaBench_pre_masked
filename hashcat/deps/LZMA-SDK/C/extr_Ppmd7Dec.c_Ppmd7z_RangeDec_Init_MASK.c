
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Code; int Range; int Stream; } ;
typedef TYPE_1__ CPpmd7z_RangeDec ;
typedef int BoolInt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

BoolInt FUNC_1(CPpmd7z_RangeDec *VAR_1)
{
  unsigned VAR_2;
  VAR_1->Code = 0;
  VAR_1->Range = 0xFFFFFFFF;
  if (FUNC_0(VAR_1->Stream) != 0)
    return VAR_0;
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
    VAR_1->Code = (VAR_1->Code << 8) | FUNC_0(VAR_1->Stream);
  return (VAR_1->Code < 0xFFFFFFFF);
}

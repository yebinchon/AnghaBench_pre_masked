
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Range; int Code; int Stream; } ;
typedef TYPE_1__ CPpmd7z_RangeDec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(CPpmd7z_RangeDec *VAR_1)
{
  if (VAR_1->Range < VAR_0)
  {
    VAR_1->Code = (VAR_1->Code << 8) | FUNC_0(VAR_1->Stream);
    VAR_1->Range <<= 8;
    if (VAR_1->Range < VAR_0)
    {
      VAR_1->Code = (VAR_1->Code << 8) | FUNC_0(VAR_1->Stream);
      VAR_1->Range <<= 8;
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int ver; } ;
typedef TYPE_1__ Cx86cpuid ;
typedef int BoolInt ;





 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

BoolInt FUNC_4()
{
  Cx86cpuid VAR_1;
  int VAR_2;
  UInt32 VAR_3, VAR_4;
  if (!FUNC_0(&VAR_1))
    return VAR_0;

  VAR_3 = FUNC_1(VAR_1.ver);
  VAR_4 = FUNC_3(VAR_1.ver);

  VAR_2 = FUNC_2(&VAR_1);

  switch (VAR_2)
  {
    case 129: return (VAR_3 < 6 || (VAR_3 == 6 && (

           VAR_4 == 0x1C
        || VAR_4 == 0x26
        || VAR_4 == 0x27
        || VAR_4 == 0x35
        || VAR_4 == 0x36
        )));
    case 130: return (VAR_3 < 5 || (VAR_3 == 5 && (VAR_4 < 6 || VAR_4 == 0xA)));
    case 128: return (VAR_3 < 6 || (VAR_3 == 6 && VAR_4 < 0xF));
  }
  return VAR_0;
}

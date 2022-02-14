
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int s8 ;
struct TYPE_3__ {int irq; scalar_t__ channel; } ;
typedef TYPE_1__ ide_hwif_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int*) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_1)
{
 u8 VAR_2, VAR_3;
 s8 VAR_4[] = { -1, 9, 3, 10, 4, 5, 7, 6,
          1, 11, 0, 12, 0, 14, 0, 15 };
 int VAR_5 = -1;

 if (VAR_0) {



  FUNC_0(VAR_0, 0x58, &VAR_2);


  VAR_2 = VAR_2 & 0x03;


  if ((VAR_1->channel && VAR_2 == 0x03) ||
      (!VAR_1->channel && !VAR_2)) {



   FUNC_0(VAR_0, 0x44, &VAR_3);
   VAR_3 = VAR_3 & 0x0f;
   VAR_5 = VAR_4[VAR_3];
  } else if (VAR_1->channel && !(VAR_2 & 0x01)) {



   FUNC_0(VAR_0, 0x75, &VAR_3);
   VAR_3 = VAR_3 & 0x0f;
   VAR_5 = VAR_4[VAR_3];
  }
  if(VAR_5 >= 0)
   VAR_1->irq = VAR_5;
 }
}

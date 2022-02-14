
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {int family; } ;
struct atom_context {int io_attr; TYPE_2__* card; } ;
struct TYPE_6__ {int (* ioreg_read ) (TYPE_2__*,int ) ;int (* ioreg_write ) (TYPE_2__*,int ,int) ;TYPE_1__* dev; } ;
struct TYPE_5__ {struct radeon_device* dev_private; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_6(struct atom_context *VAR_1, int VAR_2,
     uint32_t VAR_3, uint32_t VAR_4)
{
 struct radeon_device *VAR_5 = VAR_1->card->dev->dev_private;
 uint32_t VAR_6 = 0xCDCDCDCD;

 while (1)
  switch (FUNC_1(VAR_2)) {
  case 131:
   VAR_2++;
   break;
  case 130:
   VAR_6 = VAR_1->card->ioreg_read(VAR_1->card, FUNC_0(VAR_2 + 1));
   VAR_2 += 3;
   break;
  case 128:
   if (VAR_5->family == VAR_0)
    (void)VAR_1->card->ioreg_read(VAR_1->card, FUNC_0(VAR_2 + 1));
   VAR_1->card->ioreg_write(VAR_1->card, FUNC_0(VAR_2 + 1), VAR_6);
   VAR_2 += 3;
   break;
  case 136:
   VAR_6 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1))) <<
         FUNC_1(VAR_2 + 2));
   VAR_2 += 3;
   break;
  case 129:
   VAR_6 |=
       (0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1))) << FUNC_1(VAR_2 +
         2);
   VAR_2 += 3;
   break;
  case 132:
   VAR_6 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1))) <<
         FUNC_1(VAR_2 + 3));
   VAR_6 |=
       ((VAR_3 >> FUNC_1(VAR_2 + 2)) &
        (0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1)))) << FUNC_1(VAR_2 +
           3);
   VAR_2 += 4;
   break;
  case 133:
   VAR_6 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1))) <<
         FUNC_1(VAR_2 + 3));
   VAR_6 |=
       ((VAR_4 >> FUNC_1(VAR_2 + 2)) &
        (0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1)))) << FUNC_1(VAR_2 +
           3);
   VAR_2 += 4;
   break;
  case 134:
   VAR_6 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_2 + 1))) <<
         FUNC_1(VAR_2 + 3));
   VAR_6 |=
       ((VAR_1->
         io_attr >> FUNC_1(VAR_2 + 2)) & (0xFFFFFFFF >> (32 -
           FUNC_1
           (VAR_2
            +
            1))))
       << FUNC_1(VAR_2 + 3);
   VAR_2 += 4;
   break;
  case 135:
   return VAR_6;
  default:
   FUNC_2("Unknown IIO opcode\n");
   return 0;
  }
}

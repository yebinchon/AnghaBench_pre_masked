
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct atom_context {int io_attr; TYPE_1__* card; } ;
struct TYPE_3__ {int (* ioreg_read ) (TYPE_1__*,int ) ;int (* ioreg_write ) (TYPE_1__*,int ,int) ;} ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_5(struct atom_context *VAR_0, int VAR_1,
     uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0xCDCDCDCD;

 while (1)
  switch (FUNC_1(VAR_1)) {
  case 131:
   VAR_1++;
   break;
  case 130:
   VAR_4 = VAR_0->card->ioreg_read(VAR_0->card, FUNC_0(VAR_1 + 1));
   VAR_1 += 3;
   break;
  case 128:
   VAR_0->card->ioreg_write(VAR_0->card, FUNC_0(VAR_1 + 1), VAR_4);
   VAR_1 += 3;
   break;
  case 136:
   VAR_4 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1))) <<
         FUNC_1(VAR_1 + 2));
   VAR_1 += 3;
   break;
  case 129:
   VAR_4 |=
       (0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1))) << FUNC_1(VAR_1 +
         2);
   VAR_1 += 3;
   break;
  case 132:
   VAR_4 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1))) <<
         FUNC_1(VAR_1 + 3));
   VAR_4 |=
       ((VAR_2 >> FUNC_1(VAR_1 + 2)) &
        (0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1)))) << FUNC_1(VAR_1 +
           3);
   VAR_1 += 4;
   break;
  case 133:
   VAR_4 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1))) <<
         FUNC_1(VAR_1 + 3));
   VAR_4 |=
       ((VAR_3 >> FUNC_1(VAR_1 + 2)) &
        (0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1)))) << FUNC_1(VAR_1 +
           3);
   VAR_1 += 4;
   break;
  case 134:
   VAR_4 &=
       ~((0xFFFFFFFF >> (32 - FUNC_1(VAR_1 + 1))) <<
         FUNC_1(VAR_1 + 3));
   VAR_4 |=
       ((VAR_0->
         io_attr >> FUNC_1(VAR_1 + 2)) & (0xFFFFFFFF >> (32 -
           FUNC_1
           (VAR_1
            +
            1))))
       << FUNC_1(VAR_1 + 3);
   VAR_1 += 4;
   break;
  case 135:
   return VAR_4;
  default:
   FUNC_2("Unknown IIO opcode\n");
   return 0;
  }
}

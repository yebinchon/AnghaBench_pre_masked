
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int partial ;
struct TYPE_9__ {int sum; int offset; int o; TYPE_3__* member_0; } ;
typedef TYPE_2__ ocb_hash ;
struct TYPE_10__ {int L_star; TYPE_1__* prp; } ;
typedef TYPE_3__ ocb ;
struct TYPE_8__ {int blocksz; } ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t*,int ,int const*,size_t,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int*,int ,int ) ;

__attribute__((used)) static void FUNC_7(ocb *VAR_2, const uint8_t *VAR_3, size_t VAR_4,
                               uint8_t VAR_5[VAR_0])
{
  ocb_hash VAR_6 = { VAR_2 };
  FUNC_5(&VAR_6);

  uint8_t VAR_7[VAR_0];
  size_t VAR_8 = 0;

  FUNC_0(VAR_7, &VAR_8,
                          VAR_2->prp->blocksz,
                          VAR_3, VAR_4,
                          VAR_1,
                          &VAR_6);

  if (VAR_8)
  {

    FUNC_1(VAR_6.offset, VAR_2->L_star, VAR_6.offset);


    FUNC_4(VAR_7 + VAR_8, 0, sizeof(VAR_7) - VAR_8);
    VAR_7[VAR_8] = 0x80;


    FUNC_6(VAR_6.o, VAR_7, VAR_6.sum, VAR_6.offset);
  }

  FUNC_2(VAR_6.sum, VAR_5);
  FUNC_3(&VAR_6, sizeof VAR_6);
}

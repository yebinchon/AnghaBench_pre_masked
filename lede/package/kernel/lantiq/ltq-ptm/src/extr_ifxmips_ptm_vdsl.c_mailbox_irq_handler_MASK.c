
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_descriptor {scalar_t__ own; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* itf; } ;
struct TYPE_3__ {size_t rx_desc_pos; int napi; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rx_descriptor* VAR_4 ;
 int FUNC_4 (char*) ;
 int * VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
    unsigned int VAR_10;
    int VAR_11;

    VAR_10 = FUNC_1(VAR_2);
    FUNC_2(VAR_10, VAR_3);
    VAR_10 &= FUNC_1(VAR_1);

            if (VAR_10 & FUNC_0(0)) {
                FUNC_3(1, 0, VAR_1);
                FUNC_5(&VAR_6.itf[0].napi);
            }
    if (VAR_10 & FUNC_0(16)) {
                FUNC_3(1 << 16, 0, VAR_1);
                FUNC_7(&VAR_7);
            }
     if (VAR_10 & FUNC_0(17)) {
                FUNC_3(1 << 17, 0, VAR_1);
                FUNC_6(VAR_5[0]);
         }

    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcmsptwi_data {int lock; scalar_t__ iobase; } ;
struct pmcmsptwi_cfg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct pmcmsptwi_cfg*) ;

__attribute__((used)) static void FUNC_4(struct pmcmsptwi_cfg *VAR_1,
     struct pmcmsptwi_data *VAR_2)
{
 FUNC_0(&VAR_2->lock);
 FUNC_3(FUNC_2(
    VAR_2->iobase + VAR_0), VAR_1);
 FUNC_1(&VAR_2->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcmsptwi_data {int lock; scalar_t__ iobase; } ;
struct pmcmsptwi_clockcfg {int highspeed; int standard; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(const struct pmcmsptwi_clockcfg *VAR_2,
     struct pmcmsptwi_data *VAR_3)
{
 FUNC_0(&VAR_3->lock);
 FUNC_3(FUNC_2(&VAR_2->standard),
    VAR_3->iobase + VAR_1);
 FUNC_3(FUNC_2(&VAR_2->highspeed),
    VAR_3->iobase + VAR_0);
 FUNC_1(&VAR_3->lock);
}

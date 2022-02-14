
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ,int) ;

__attribute__((used)) static inline void FUNC_5(int VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_3->dma_read(VAR_0, VAR_4);


 FUNC_2(VAR_4);

 if (FUNC_0()) {

  VAR_5 |= 1 << 14;
 }

 if (FUNC_1()) {

  VAR_5 &= ~(1 << 15);
 }

 VAR_3->dma_write(VAR_5, VAR_0, VAR_4);
 VAR_2[VAR_4].flags &= ~VAR_1;
}

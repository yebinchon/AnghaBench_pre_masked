
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ map; } ;
struct pvrdma_dev {TYPE_1__ driver_uar; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct pvrdma_dev *VAR_1, u32 VAR_2)
{
 FUNC_1(FUNC_0(VAR_2), VAR_1->driver_uar.map + VAR_0);
}

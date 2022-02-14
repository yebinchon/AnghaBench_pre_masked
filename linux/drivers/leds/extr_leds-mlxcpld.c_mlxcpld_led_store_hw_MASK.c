
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5, VAR_6;
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0, VAR_3, 1,
        &VAR_6);
 VAR_5 = (VAR_2 == 0xf0) ? VAR_4 : (VAR_4 << 4);
 VAR_6 = (VAR_6 & VAR_2) | VAR_5;
 FUNC_0(VAR_0, VAR_3, 0,
        &VAR_6);
 FUNC_2(&VAR_1->lock);
}

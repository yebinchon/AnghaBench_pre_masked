
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int (* read_pic ) (int ) ;int (* write_pic ) (int ,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;

 VAR_4 = 0;
 if (VAR_2 == VAR_0)
  VAR_4 = 32;

 VAR_5 = ((u64) 0xffffffff) << VAR_4;
 VAR_3 <<= VAR_4;

 VAR_6 = VAR_1->read_pic(0);
 VAR_6 &= ~VAR_5;
 VAR_6 |= VAR_3;
 VAR_1->write_pic(0, VAR_6);
}

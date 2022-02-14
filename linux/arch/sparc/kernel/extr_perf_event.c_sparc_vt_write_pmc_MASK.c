
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int (* read_pcr ) (int) ;int (* write_pcr ) (int,int) ;int (* write_pic ) (int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_3, u64 VAR_4)
{
 u64 VAR_5;

 VAR_5 = VAR_2->read_pcr(VAR_3);

 VAR_5 &= ~(VAR_1 | VAR_0);

 VAR_2->write_pic(VAR_3, VAR_4 & 0xffffffff);

 VAR_2->write_pcr(VAR_3, VAR_5);
}

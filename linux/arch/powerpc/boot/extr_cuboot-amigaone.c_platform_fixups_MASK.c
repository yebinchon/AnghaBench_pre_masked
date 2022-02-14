
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_busfreq; int bi_intfreq; int bi_memsize; int bi_memstart; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_0.bi_memstart, VAR_0.bi_memsize);
 FUNC_0(VAR_0.bi_intfreq, VAR_0.bi_busfreq / 4, VAR_0.bi_busfreq);
}

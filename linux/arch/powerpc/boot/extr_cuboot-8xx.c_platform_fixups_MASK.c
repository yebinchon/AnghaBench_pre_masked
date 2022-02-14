
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_busfreq; int bi_intfreq; int bi_enet1addr; int bi_enetaddr; int bi_memsize; int bi_memstart; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (void*,char*,int*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 void *VAR_1;

 FUNC_2(VAR_0.bi_memstart, VAR_0.bi_memsize);
 FUNC_1(VAR_0.bi_enetaddr, VAR_0.bi_enet1addr);
 FUNC_0(VAR_0.bi_intfreq, VAR_0.bi_busfreq / 16, VAR_0.bi_busfreq);

 VAR_1 = FUNC_3("/soc/cpm");
 if (VAR_1)
  FUNC_4(VAR_1, "clock-frequency", &VAR_0.bi_busfreq, 4);

 VAR_1 = FUNC_3("/soc/cpm/brg");
 if (VAR_1)
  FUNC_4(VAR_1, "clock-frequency", &VAR_0.bi_busfreq, 4);
}

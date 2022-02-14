
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int sysfreq ;
struct TYPE_2__ {int bi_busfreq; int bi_ipbfreq; int bi_intfreq; int bi_enetaddr; int bi_memsize; int bi_memstart; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,int ,void*,int *) ;
 void* FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,char*,int*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
 void *VAR_1, *VAR_2;
 int VAR_3;
 u32 VAR_4;


 FUNC_2(VAR_0.bi_memstart, VAR_0.bi_memsize);
 FUNC_1(VAR_0.bi_enetaddr);
 FUNC_0(VAR_0.bi_intfreq, VAR_0.bi_busfreq / 4, VAR_0.bi_busfreq);





 VAR_1 = FUNC_5(((void*)0), "soc");
 if (!VAR_1)
  VAR_1 = FUNC_4(((void*)0), "fsl,mpc5200-immr");
 if (!VAR_1)
  VAR_1 = FUNC_4(((void*)0), "fsl,mpc5200b-immr");
 if (VAR_1) {
  FUNC_7(VAR_1, "bus-frequency", &VAR_0.bi_ipbfreq,
   sizeof(VAR_0.bi_ipbfreq));

  if (!FUNC_3(VAR_1, 0, (void*)&VAR_2, ((void*)0)))
   return;
  VAR_3 = FUNC_6(VAR_2 + 0x204) & 0x0020 ? 8 : 4;
  VAR_4 = VAR_0.bi_busfreq * VAR_3;
  FUNC_7(VAR_1, "system-frequency", &VAR_4, sizeof(VAR_4));
 }
}

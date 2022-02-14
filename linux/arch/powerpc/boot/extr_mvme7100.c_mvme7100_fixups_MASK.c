
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int busfreq ;
struct TYPE_2__ {int bi_busfreq; int bi_intfreq; int bi_enet3addr; int bi_enet2addr; int bi_enet1addr; int bi_enetaddr; int bi_memsize; int bi_memstart; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,unsigned long,unsigned long) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (void*,char*,unsigned long*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 void *VAR_1;
 unsigned long VAR_2 = VAR_0.bi_busfreq * 1000000;

 FUNC_0(VAR_0.bi_intfreq * 1000000, VAR_2 / 4, VAR_2);

 VAR_1 = FUNC_3("/soc@f1000000");
 if (VAR_1)
  FUNC_4(VAR_1, "bus-frequency", &VAR_2, sizeof(VAR_2));

 VAR_1 = FUNC_3("/soc/serial@4500");
 if (VAR_1)
  FUNC_4(VAR_1, "clock-frequency", &VAR_2, sizeof(VAR_2));

 FUNC_2(VAR_0.bi_memstart, VAR_0.bi_memsize);

 FUNC_1("ethernet0", VAR_0.bi_enetaddr);
 FUNC_1("ethernet1", VAR_0.bi_enet1addr);
 FUNC_1("ethernet2", VAR_0.bi_enet2addr);
 FUNC_1("ethernet3", VAR_0.bi_enet3addr);
}

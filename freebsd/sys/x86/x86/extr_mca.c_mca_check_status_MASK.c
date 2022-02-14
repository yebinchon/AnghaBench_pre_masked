
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct mca_record {int mr_status; int mr_bank; void* mr_cpu; int mr_cpu_vendor_id; int mr_cpu_id; void* mr_mcg_status; void* mr_mcg_cap; void* mr_apic_id; int mr_tsc; void* mr_misc; void* mr_addr; } ;
struct TYPE_2__ {int (* status ) (int) ;int (* misc ) (int) ;int (* addr ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__ VAR_11 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(int VAR_12, struct mca_record *VAR_13)
{
 uint64_t VAR_14;
 u_int VAR_15[4];

 VAR_14 = FUNC_2(VAR_11.status(VAR_12));
 if (!(VAR_14 & VAR_4))
  return (0);


 VAR_13->mr_status = VAR_14;
 VAR_13->mr_bank = VAR_12;
 VAR_13->mr_addr = 0;
 if (VAR_14 & VAR_0)
  VAR_13->mr_addr = FUNC_2(VAR_11.addr(VAR_12));
 VAR_13->mr_misc = 0;
 if (VAR_14 & VAR_1)
  VAR_13->mr_misc = FUNC_2(VAR_11.misc(VAR_12));
 VAR_13->mr_tsc = FUNC_3();
 VAR_13->mr_apic_id = FUNC_0(VAR_7);
 VAR_13->mr_mcg_cap = FUNC_2(VAR_5);
 VAR_13->mr_mcg_status = FUNC_2(VAR_6);
 VAR_13->mr_cpu_id = VAR_8;
 VAR_13->mr_cpu_vendor_id = VAR_9;
 VAR_13->mr_cpu = FUNC_0(VAR_10);





 if (!(VAR_13->mr_status & (VAR_2 | VAR_3))) {
  FUNC_8(VAR_11.status(VAR_12), 0);
  FUNC_1(0, VAR_15);
 }
 return (1);
}

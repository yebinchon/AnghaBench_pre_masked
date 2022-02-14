
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct slimpro_i2c_dev {int mbox_idx; struct acpi_pcct_shared_memory* pcc_comm_addr; } ;
struct acpi_pcct_shared_memory {int signature; int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct slimpro_i2c_dev *VAR_4, u32 *VAR_5)
{
 struct acpi_pcct_shared_memory *VAR_6 = VAR_4->pcc_comm_addr;
 u32 *VAR_7 = (void *)(VAR_6 + 1);
 u16 VAR_8;
 int VAR_9;

 FUNC_2(VAR_6->signature,
     FUNC_4(VAR_1 | VAR_4->mbox_idx));

 FUNC_2(VAR_6->command,
     FUNC_3(FUNC_1(VAR_5[0]) | VAR_0));

 VAR_8 = FUNC_5(FUNC_0(VAR_6->status));
 VAR_8 &= ~VAR_2;
 FUNC_2(VAR_6->status, FUNC_3(VAR_8));


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_2(VAR_7[VAR_9], FUNC_4(VAR_5[VAR_9]));
}

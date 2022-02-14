
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slimpro_i2c_dev {int rd_complete; int * resp_msg; struct acpi_pcct_shared_memory* pcc_comm_addr; } ;
struct mbox_client {int dummy; } ;
struct acpi_pcct_shared_memory {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct slimpro_i2c_dev* FUNC_1 (struct mbox_client*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct mbox_client *VAR_2, void *VAR_3)
{
 struct slimpro_i2c_dev *VAR_4 = FUNC_1(VAR_2);
 struct acpi_pcct_shared_memory *VAR_5 = VAR_4->pcc_comm_addr;


 if (!FUNC_2(&VAR_5->status,
        VAR_1))
  return;

 if (FUNC_2(&VAR_5->status,
       VAR_0)) {
  VAR_3 = VAR_5 + 1;


  if (VAR_4->resp_msg)
   *VAR_4->resp_msg = ((u32 *)VAR_3)[1];

  FUNC_0(&VAR_4->rd_complete);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rmi_device {int dev; } ;
struct pdt_entry {int page_start; int query_base_addr; int command_base_addr; int control_base_addr; int data_base_addr; int interrupt_source_count; int function_version; int function_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct rmi_device*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct rmi_device *VAR_4,
         struct pdt_entry *VAR_5, u16 VAR_6)
{
 u8 VAR_7[VAR_1];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7, VAR_1);
 if (VAR_8) {
  FUNC_0(&VAR_4->dev, "Read PDT entry at %#06x failed, code: %d.\n",
    VAR_6, VAR_8);
  return VAR_8;
 }

 VAR_5->page_start = VAR_6 & VAR_0;
 VAR_5->query_base_addr = VAR_7[0];
 VAR_5->command_base_addr = VAR_7[1];
 VAR_5->control_base_addr = VAR_7[2];
 VAR_5->data_base_addr = VAR_7[3];
 VAR_5->interrupt_source_count = VAR_7[4] & VAR_3;
 VAR_5->function_version = (VAR_7[4] & VAR_2) >> 5;
 VAR_5->function_number = VAR_7[5];

 return 0;
}

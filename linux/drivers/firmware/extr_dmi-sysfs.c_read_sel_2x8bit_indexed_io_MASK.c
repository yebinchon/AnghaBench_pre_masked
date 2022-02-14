
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int data_addr; scalar_t__ index_addr; } ;
struct dmi_system_event_log {TYPE_1__ io; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_4(const struct dmi_system_event_log *VAR_1,
         loff_t VAR_2)
{
 u8 VAR_3;

 FUNC_1(&VAR_0);
 FUNC_3((u8)VAR_2, VAR_1->io.index_addr);
 FUNC_3((u8)(VAR_2 >> 8), VAR_1->io.index_addr + 1);
 VAR_3 = FUNC_0(VAR_1->io.data_addr);
 FUNC_2(&VAR_0);
 return VAR_3;
}

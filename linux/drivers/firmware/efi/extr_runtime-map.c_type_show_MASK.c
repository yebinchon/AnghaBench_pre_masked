
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct efi_runtime_map_entry {TYPE_1__ md; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct efi_runtime_map_entry *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0, "0x%x\n", VAR_1->md.type);
}

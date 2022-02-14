
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahci_port {int dummy; } ;
typedef int fis ;


 int VAR_0 ;
 int FUNC_0 (struct ahci_port*,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ahci_port *VAR_1)
{
 uint8_t VAR_2[20];

 FUNC_1(VAR_2, 0, sizeof(VAR_2));
 VAR_2[0] = VAR_0;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}

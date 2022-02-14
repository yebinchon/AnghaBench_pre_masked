
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_io {int pi_width; void* pi_data; void* pi_reg; int pi_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int,int ,struct pci_io*) ;
 int FUNC_4 (int ,int ,int ) ;
 void* FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7;
 struct pci_io VAR_8;

 VAR_8.pi_sel = FUNC_2(VAR_3);
 VAR_8.pi_reg = FUNC_5(VAR_4, (char **)0, 0);
 VAR_8.pi_width = VAR_6;
 VAR_8.pi_data = FUNC_5(VAR_5, (char **)0, 0);

 VAR_7 = FUNC_4(VAR_2, VAR_0, 0);
 if (VAR_7 < 0)
  FUNC_1(1, "%s", VAR_2);

 if (FUNC_3(VAR_7, VAR_1, &VAR_8) < 0)
  FUNC_1(1, "ioctl(PCIOCWRITE)");
 FUNC_0(VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_io {scalar_t__ pi_data; int pi_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int,int ,struct pci_io*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char const*,char*,char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4)
{
 int VAR_5;
 struct pci_io VAR_6;

 VAR_6.pi_sel = FUNC_2(VAR_4);

 VAR_5 = FUNC_4(VAR_2, VAR_0, 0);
 if (VAR_5 < 0)
  FUNC_1(1, "%s", VAR_2);

 if (FUNC_3(VAR_5, VAR_1, &VAR_6) < 0)
  FUNC_1(1, "ioctl(PCIOCATTACHED)");

 VAR_3 = VAR_6.pi_data ? 0 : 2;
 FUNC_5("%s: %s%s\n", VAR_4, VAR_6.pi_data == 0 ? "not " : "", "attached");
 FUNC_0(VAR_5);
}

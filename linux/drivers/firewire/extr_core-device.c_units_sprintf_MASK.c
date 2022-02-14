
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_csr_iterator {int dummy; } ;




 int FUNC_0 (struct fw_csr_iterator*,int const*) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;
 int FUNC_2 (char*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, const u32 *VAR_1)
{
 struct fw_csr_iterator VAR_2;
 int VAR_3, VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_0(&VAR_2, VAR_1);
 while (FUNC_1(&VAR_2, &VAR_3, &VAR_4)) {
  switch (VAR_3) {
  case 129:
   VAR_5 = VAR_4;
   break;
  case 128:
   VAR_6 = VAR_4;
   break;
  }
 }

 return FUNC_2(VAR_0, "0x%06x:0x%06x ", VAR_5, VAR_6);
}

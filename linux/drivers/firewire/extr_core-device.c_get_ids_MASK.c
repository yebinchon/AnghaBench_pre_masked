
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_csr_iterator {int dummy; } ;






 int FUNC_0 (struct fw_csr_iterator*,int const*) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;

__attribute__((used)) static void FUNC_2(const u32 *VAR_0, int *VAR_1)
{
 struct fw_csr_iterator VAR_2;
 int VAR_3, VAR_4;

 FUNC_0(&VAR_2, VAR_0);
 while (FUNC_1(&VAR_2, &VAR_3, &VAR_4)) {
  switch (VAR_3) {
  case 129: VAR_1[0] = VAR_4; break;
  case 131: VAR_1[1] = VAR_4; break;
  case 130: VAR_1[2] = VAR_4; break;
  case 128: VAR_1[3] = VAR_4; break;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tpm_space {scalar_t__* session_tbl; } ;
struct tpm_chip {struct tpm_space work_space; } ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct tpm_chip *VAR_0, u32 VAR_1)
{
 struct tpm_space *VAR_2 = &VAR_0->work_space;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->session_tbl); VAR_3++)
  if (VAR_2->session_tbl[VAR_3] == 0)
   break;

 if (VAR_3 == FUNC_0(VAR_2->session_tbl))
  return 0;

 VAR_2->session_tbl[VAR_3] = VAR_1;
 return 1;
}

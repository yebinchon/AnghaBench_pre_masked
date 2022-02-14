
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int run_to_completion; } ;


 int FUNC_0 (struct smi_info*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool VAR_1)
{
 struct smi_info *VAR_2 = VAR_0;

 VAR_2->run_to_completion = VAR_1;
 if (VAR_1)
  FUNC_0(VAR_2);
}

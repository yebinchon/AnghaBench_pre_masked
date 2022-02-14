
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_key {int dummy; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {struct tpm_key** data; } ;
struct key {TYPE_1__ payload; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_1(const struct key *VAR_1,
         struct seq_file *VAR_2)
{
 struct tpm_key *VAR_3 = VAR_1->payload.data[VAR_0];

 if (!VAR_3)
  return;

 FUNC_0(VAR_2, "TPM1.2/Blob");
}

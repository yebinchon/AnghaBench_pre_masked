
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smca_bank {TYPE_1__* hwid; } ;
typedef enum smca_bank_types { ____Placeholder_smca_bank_types } smca_bank_types ;
struct TYPE_2__ {int bank_type; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct smca_bank* VAR_2 ;

__attribute__((used)) static enum smca_bank_types FUNC_0(unsigned int VAR_3)
{
 struct smca_bank *VAR_4;

 if (VAR_3 >= VAR_0)
  return VAR_1;

 VAR_4 = &VAR_2[VAR_3];
 if (!VAR_4->hwid)
  return VAR_1;

 return VAR_4->hwid->bank_type;
}

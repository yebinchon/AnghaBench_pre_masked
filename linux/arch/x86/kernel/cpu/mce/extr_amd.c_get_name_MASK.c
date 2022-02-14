
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct threshold_block {size_t block; } ;
typedef enum smca_bank_types { ____Placeholder_smca_bank_types } smca_bank_types ;
struct TYPE_6__ {int smca; } ;
struct TYPE_5__ {int sysfs_id; TYPE_1__* hwid; } ;
struct TYPE_4__ {int count; } ;


 size_t FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_1 (struct threshold_block*) ;
 char const* VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (unsigned int) ;
 char* FUNC_3 (int) ;
 char const** VAR_6 ;
 int FUNC_4 (char const*,int ,char*,char*,int) ;
 char const** VAR_7 ;

__attribute__((used)) static const char *FUNC_5(unsigned int VAR_8, struct threshold_block *VAR_9)
{
 enum smca_bank_types VAR_10;

 if (!VAR_4.smca) {
  if (VAR_9 && VAR_8 == 4)
   return FUNC_1(VAR_9);

  return VAR_7[VAR_8];
 }

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 >= VAR_1)
  return ((void*)0);

 if (VAR_9 && VAR_10 == VAR_2) {
  if (VAR_9->block < FUNC_0(VAR_6))
   return VAR_6[VAR_9->block];
  return ((void*)0);
 }

 if (VAR_5[VAR_8].hwid->count == 1)
  return FUNC_3(VAR_10);

 FUNC_4(VAR_3, VAR_0,
   "%s_%x", FUNC_3(VAR_10),
     VAR_5[VAR_8].sysfs_id);
 return VAR_3;
}

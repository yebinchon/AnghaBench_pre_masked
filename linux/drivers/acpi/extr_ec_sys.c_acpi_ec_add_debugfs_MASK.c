
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct dentry {int dummy; } ;
struct acpi_ec {int dummy; } ;
struct TYPE_2__ {int global_lock; int gpe; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,struct dentry*,int *) ;
 void* FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,struct acpi_ec*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (char*,char*,unsigned int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(struct acpi_ec *VAR_4, unsigned int VAR_5)
{
 struct dentry *VAR_6;
 char VAR_7[64];
 umode_t VAR_8 = 0400;

 if (VAR_5 == 0)
  VAR_0 = FUNC_1("ec", ((void*)0));

 FUNC_4(VAR_7, "ec%u", VAR_5);
 VAR_6 = FUNC_1(VAR_7, VAR_0);

 FUNC_3("gpe", 0444, VAR_6, &VAR_2->gpe);
 FUNC_0("use_global_lock", 0444, VAR_6,
       &VAR_2->global_lock);

 if (VAR_3)
  VAR_8 = 0600;
 FUNC_2("io", VAR_8, VAR_6, VAR_4, &VAR_1);
}

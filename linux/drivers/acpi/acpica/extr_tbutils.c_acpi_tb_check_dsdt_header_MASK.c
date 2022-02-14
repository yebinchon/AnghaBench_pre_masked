
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ checksum; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*) ;

void FUNC_3(void)
{



 if (VAR_2.length != VAR_1->length ||
     VAR_2.checksum != VAR_1->checksum) {
  FUNC_0((VAR_0,
     "The DSDT has been corrupted or replaced - "
     "old, new headers below"));

  FUNC_2(0, &VAR_2);
  FUNC_2(0, VAR_1);

  FUNC_1((VAR_0,
       "Please send DMI info to linux-acpi@vger.kernel.org\n"
       "If system does not work as expected, please boot with acpi=copy_dsdt"));



  VAR_2.length = VAR_1->length;
  VAR_2.checksum =
      VAR_1->checksum;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,char*,unsigned int) ;
 unsigned int FUNC_1 (struct ata_device*,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_device *VAR_1)
{
 unsigned int VAR_2;

 if (!FUNC_2(VAR_1->id))
  return;

 if (FUNC_3(VAR_1->id))
  return;

 VAR_2 = FUNC_1(VAR_1, VAR_0, 0x1);
 if (VAR_2) {
  FUNC_0(VAR_1,
       "failed to enable Sense Data Reporting, Emask 0x%x\n",
       VAR_2);
 }
}

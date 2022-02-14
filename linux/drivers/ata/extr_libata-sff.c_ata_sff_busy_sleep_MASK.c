
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct ata_port*,int) ;
 int FUNC_3 (struct ata_port*,char*,int ,int) ;
 int FUNC_4 (struct ata_port*,char*,int) ;
 int FUNC_5 (struct ata_port*,int,int) ;
 unsigned long VAR_3 ;
 int FUNC_6 (struct ata_port*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct ata_port *VAR_4,
         unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;
 u8 VAR_9;

 VAR_9 = FUNC_5(VAR_4, VAR_0, 300);
 VAR_7 = VAR_3;
 VAR_8 = FUNC_1(VAR_7, VAR_5);
 while (VAR_9 != 0xff && (VAR_9 & VAR_0) &&
        FUNC_7(VAR_3, VAR_8)) {
  FUNC_2(VAR_4, 50);
  VAR_9 = FUNC_5(VAR_4, VAR_0, 3);
 }

 if (VAR_9 != 0xff && (VAR_9 & VAR_0))
  FUNC_4(VAR_4,
         "port is slow to respond, please be patient (Status 0x%x)\n",
         VAR_9);

 VAR_8 = FUNC_1(VAR_7, VAR_6);
 while (VAR_9 != 0xff && (VAR_9 & VAR_0) &&
        FUNC_7(VAR_3, VAR_8)) {
  FUNC_2(VAR_4, 50);
  VAR_9 = VAR_4->ops->sff_check_status(VAR_4);
 }

 if (VAR_9 == 0xff)
  return -VAR_2;

 if (VAR_9 & VAR_0) {
  FUNC_3(VAR_4,
        "port failed to respond (%lu secs, Status 0x%x)\n",
        FUNC_0(VAR_6, 1000), VAR_9);
  return -VAR_1;
 }

 return 0;
}

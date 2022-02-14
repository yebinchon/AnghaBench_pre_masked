
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int quiet; int buflen; } ;
struct cdrom_device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdrom_device_info*,struct packet_command*,int ,int ) ;
 int FUNC_1 (struct packet_command*,char**,int,int ) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_3)
{
 struct packet_command VAR_4;
 char VAR_5[255];
 int VAR_6;

 FUNC_1(&VAR_4, &VAR_5, 4, VAR_0);
 VAR_4.quiet = 1;






 VAR_6 = FUNC_0(VAR_3, &VAR_4, VAR_1, 0);
 if (VAR_6)
  VAR_6 = FUNC_0(VAR_3, &VAR_4, VAR_2, 0);
 if (VAR_6) {
  VAR_4.buflen = 255;
  VAR_6 = FUNC_0(VAR_3, &VAR_4, VAR_1, 0);
 }


 if (VAR_6)
  return 0;

 return VAR_5[3] & 0x80;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {int quiet; int timeout; } ;
struct cdrom_device_info {void* mrw_mode_page; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct cdrom_device_info*,struct packet_command*,void*,int ) ;
 int FUNC_1 (struct packet_command*,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_4)
{
 struct packet_command VAR_5;
 char VAR_6[16];

 FUNC_1(&VAR_5, VAR_6, sizeof(VAR_6), VAR_0);

 VAR_5.timeout = VAR_1;
 VAR_5.quiet = 1;

 if (!FUNC_0(VAR_4, &VAR_5, VAR_2, 0)) {
  VAR_4->mrw_mode_page = VAR_2;
  return 0;
 } else if (!FUNC_0(VAR_4, &VAR_5, VAR_3, 0)) {
  VAR_4->mrw_mode_page = VAR_3;
  return 0;
 }

 return 1;
}

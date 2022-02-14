
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_command {char* buffer; int buflen; } ;
struct mode_page_header {int mode_data_length; int desc_length; } ;
struct cdrom_device_info {int name; int mrw_mode_page; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cdrom_device_info*,struct packet_command*) ;
 int FUNC_2 (struct cdrom_device_info*,struct packet_command*,int ,int ) ;
 int FUNC_3 (struct packet_command*,char*,int,int ) ;
 int * VAR_1 ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cdrom_device_info *VAR_2, int VAR_3)
{
 struct packet_command VAR_4;
 struct mode_page_header *VAR_5;
 char VAR_6[16];
 int VAR_7, VAR_8, VAR_9;

 FUNC_3(&VAR_4, VAR_6, sizeof(VAR_6), VAR_0);

 VAR_4.buffer = VAR_6;
 VAR_4.buflen = sizeof(VAR_6);

 VAR_7 = FUNC_2(VAR_2, &VAR_4, VAR_2->mrw_mode_page, 0);
 if (VAR_7)
  return VAR_7;

 VAR_5 = (struct mode_page_header *)VAR_6;
 VAR_8 = FUNC_0(VAR_5->desc_length);
 VAR_9 = FUNC_0(VAR_5->mode_data_length) + 2;

 VAR_6[VAR_8 + 3] = VAR_3;
 VAR_4.buflen = VAR_9;

 VAR_7 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_4("%s: mrw address space %s selected\n",
  VAR_2->name, VAR_1[VAR_3]);
 return 0;
}

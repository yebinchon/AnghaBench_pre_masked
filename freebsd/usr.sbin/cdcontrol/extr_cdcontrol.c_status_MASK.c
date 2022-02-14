
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct ioc_read_subchannel {int data_len; struct cd_sub_channel_info* data; int data_format; int address_format; } ;
struct TYPE_10__ {int audio_status; } ;
struct TYPE_6__ {int minute; int second; int frame; } ;
struct TYPE_7__ {int lba; TYPE_1__ msf; } ;
struct TYPE_8__ {int track_number; TYPE_2__ reladdr; } ;
struct TYPE_9__ {TYPE_3__ position; } ;
struct cd_sub_channel_info {TYPE_5__ header; TYPE_4__ what; } ;
typedef int s ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ioc_read_subchannel*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int*,int*,int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
 struct ioc_read_subchannel VAR_10;
 struct cd_sub_channel_info VAR_11;
 u_char VAR_12, VAR_13, VAR_14;

 FUNC_0 (&VAR_10, sizeof (VAR_10));
 VAR_10.data = &VAR_11;
 VAR_10.data_len = sizeof (VAR_11);
 VAR_10.address_format = VAR_5 ? VAR_3 : VAR_2;
 VAR_10.data_format = VAR_1;

 if (FUNC_1 (VAR_4, VAR_0, (char *) &VAR_10) < 0)
  return -1;

 *VAR_6 = VAR_10.data->what.position.track_number;
 if (VAR_5) {
  *VAR_7 = VAR_10.data->what.position.reladdr.msf.minute;
  *VAR_8 = VAR_10.data->what.position.reladdr.msf.second;
  *VAR_9 = VAR_10.data->what.position.reladdr.msf.frame;
 } else {
  FUNC_2(FUNC_3(VAR_10.data->what.position.reladdr.lba),
   &VAR_12, &VAR_13, &VAR_14);
  *VAR_7 = VAR_12;
  *VAR_8 = VAR_13;
  *VAR_9 = VAR_14;
 }

 return VAR_10.data->header.audio_status;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_cl_data {int multi_packet_cnt; int bad_recv_cnt; } ;
struct ishtp_cl {int dummy; } ;
struct TYPE_2__ {int command; } ;
struct hostif_msg {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl_data*) ;
 int FUNC_1 (int ,char*,int,int ,unsigned int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned int,int ,int) ;
 struct ishtp_cl_data* FUNC_2 (struct ishtp_cl*) ;

__attribute__((used)) static void FUNC_3(struct ishtp_cl *VAR_1, void *VAR_2,
         size_t VAR_3, size_t VAR_4)
{
 struct hostif_msg *VAR_5 = VAR_2;
 struct ishtp_cl_data *VAR_6 = FUNC_2(VAR_1);

 FUNC_1(FUNC_0(VAR_6), "[hid-ish]: BAD packet %02X\n"
  "total_bad=%u cur_pos=%u\n"
  "[%02X %02X %02X %02X]\n"
  "payload_len=%u\n"
  "multi_packet_cnt=%u\n"
  "is_response=%02X\n",
  VAR_5->hdr.command, VAR_6->bad_recv_cnt,
  (unsigned int)VAR_3,
  ((unsigned char *)VAR_5)[0], ((unsigned char *)VAR_5)[1],
  ((unsigned char *)VAR_5)[2], ((unsigned char *)VAR_5)[3],
  (unsigned int)VAR_4, VAR_6->multi_packet_cnt,
  VAR_5->hdr.command & ~VAR_0);
}

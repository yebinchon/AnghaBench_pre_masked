
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {int line_peeked; int status; } ;
typedef enum packet_read_status { ____Placeholder_packet_read_status } packet_read_status ;


 int FUNC_0 (struct packet_reader*) ;

enum packet_read_status FUNC_1(struct packet_reader *VAR_0)
{

 if (VAR_0->line_peeked)
  return VAR_0->status;


 FUNC_0(VAR_0);
 VAR_0->line_peeked = 1;
 return VAR_0->status;
}

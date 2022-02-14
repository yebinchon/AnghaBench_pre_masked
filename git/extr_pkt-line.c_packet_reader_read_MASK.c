
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct packet_reader {int status; int * line; int * buffer; scalar_t__ use_sideband; int pktlen; int me; int options; int buffer_size; int src_len; int src_buffer; int fd; scalar_t__ line_peeked; } ;
typedef enum sideband_type { ____Placeholder_sideband_type } sideband_type ;
typedef enum packet_read_status { ____Placeholder_packet_read_status } packet_read_status ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int,struct strbuf*,int*) ;
 int FUNC_1 (int ,int *,int *,int *,int ,int *,int ) ;

enum packet_read_status FUNC_2(struct packet_reader *VAR_2)
{
 struct strbuf VAR_3 = VAR_1;

 if (VAR_2->line_peeked) {
  VAR_2->line_peeked = 0;
  return VAR_2->status;
 }





 while (1) {
  enum sideband_type VAR_4;
  VAR_2->status = FUNC_1(VAR_2->fd,
        &VAR_2->src_buffer,
        &VAR_2->src_len,
        VAR_2->buffer,
        VAR_2->buffer_size,
        &VAR_2->pktlen,
        VAR_2->options);
  if (!VAR_2->use_sideband)
   break;
  if (FUNC_0(VAR_2->me, VAR_2->buffer,
      VAR_2->pktlen, 1, &VAR_3,
      &VAR_4))
   break;
 }

 if (VAR_2->status == VAR_0)

  VAR_2->line = VAR_2->use_sideband ?
   VAR_2->buffer + 1 : VAR_2->buffer;
 else
  VAR_2->line = ((void*)0);

 return VAR_2->status;
}

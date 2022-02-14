
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct sctp_stream_queue_pending {int * data; int tail_mbuf; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct uio*,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct sctp_stream_queue_pending *VAR_3,
    struct uio *VAR_4,
    int VAR_5)
{
 VAR_3->data = FUNC_2(VAR_4, VAR_1, VAR_3->length,
     VAR_5, 0);
 if (VAR_3->data == ((void*)0)) {
  FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_0);
  return (VAR_0);
 }

 VAR_3->tail_mbuf = FUNC_1(VAR_3->data);
 return (0);
}

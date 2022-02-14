
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_iovec {int dummy; } ;
struct evbuffer_chain {unsigned char* buffer; int misalign; int off; struct evbuffer_chain* next; } ;
struct evbuffer {int total_len; int n_add_for_cb; struct evbuffer_chain** last_with_datap; scalar_t__ max_read; scalar_t__ freeze_end; } ;
typedef int evutil_socket_t ;
typedef int ev_ssize_t ;
typedef struct evbuffer_iovec IOV_TYPE ;
typedef int DWORD ;


 int FUNC_0 (struct evbuffer_chain*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*) ;
 int VAR_1 ;
 int FUNC_3 (struct evbuffer_iovec*,struct evbuffer_iovec*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,struct evbuffer_iovec*,int,int*,int*,int *,int *) ;
 int FUNC_6 (struct evbuffer*) ;
 int FUNC_7 (struct evbuffer*,int,int) ;
 struct evbuffer_chain* FUNC_8 (struct evbuffer*,int) ;
 int FUNC_9 (struct evbuffer*) ;
 int FUNC_10 (struct evbuffer*,int,struct evbuffer_iovec*,int,struct evbuffer_chain***,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int FUNC_13 (int ,struct evbuffer_iovec*,int) ;
 int FUNC_14 (int ,unsigned char*,int,int ) ;

int
FUNC_15(struct evbuffer *VAR_3, evutil_socket_t VAR_4, int VAR_5)
{
 struct evbuffer_chain **VAR_6;
 int VAR_7;
 int VAR_8;




 struct evbuffer_chain *VAR_9;
 unsigned char *VAR_10;


 FUNC_1(VAR_3);

 if (VAR_3->freeze_end) {
  VAR_8 = -1;
  goto done;
 }

 VAR_7 = FUNC_11(VAR_4);
 if (VAR_7 <= 0 || VAR_7 > (int)VAR_3->max_read)
  VAR_7 = (int)VAR_3->max_read;
 if (VAR_5 < 0 || VAR_5 > VAR_7)
  VAR_5 = VAR_7;
 if ((VAR_9 = FUNC_8(VAR_3, VAR_5)) == ((void*)0)) {
  VAR_8 = -1;
  goto done;
 }


 VAR_10 = VAR_9->buffer + VAR_9->misalign + VAR_9->off;


 VAR_7 = FUNC_12(VAR_4, VAR_10, VAR_5);





 if (VAR_7 == -1) {
  VAR_8 = -1;
  goto done;
 }
 if (VAR_7 == 0) {
  VAR_8 = 0;
  goto done;
 }
 VAR_9->off += VAR_7;
 FUNC_6(VAR_3);

 VAR_3->total_len += VAR_7;
 VAR_3->n_add_for_cb += VAR_7;


 FUNC_9(VAR_3);
 VAR_8 = VAR_7;
done:
 FUNC_2(VAR_3);
 return VAR_8;
}

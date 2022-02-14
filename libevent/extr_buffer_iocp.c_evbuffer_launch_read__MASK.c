
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_overlapped {int overlapped; } ;
struct evbuffer_overlapped {int read_in_progress; int n_buffers; int * buffers; int fd; struct evbuffer_chain* first_pinned; int write_in_progress; } ;
struct evbuffer_iovec {int dummy; } ;
struct evbuffer_chain {struct evbuffer_chain* next; } ;
struct evbuffer {scalar_t__ freeze_end; } ;
typedef int DWORD ;


 int FUNC_0 (struct evbuffer*) ;
 int VAR_0 ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct evbuffer_iovec*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *,int,int *,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_6 (struct evbuffer_chain*,int ) ;
 int FUNC_7 (struct evbuffer*,size_t,int) ;
 int FUNC_8 (struct evbuffer*) ;
 int FUNC_9 (struct evbuffer*,int ) ;
 int FUNC_10 (struct evbuffer*) ;
 int FUNC_11 (struct evbuffer*,size_t,struct evbuffer_iovec*,int,struct evbuffer_chain***,int) ;
 int FUNC_12 (struct evbuffer*,int ) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (struct evbuffer_overlapped*,int ) ;
 struct evbuffer_overlapped* FUNC_15 (struct evbuffer*) ;

int
FUNC_16(struct evbuffer *VAR_3, size_t VAR_4,
  struct event_overlapped *VAR_5)
{
 struct evbuffer_overlapped *VAR_6 = FUNC_15(VAR_3);
 int VAR_7 = -1, VAR_8;
 int VAR_9;
 int VAR_10=0;
 struct evbuffer_chain *VAR_11=((void*)0), **VAR_12;
 DWORD VAR_13;
 DWORD VAR_14 = 0;
 struct evbuffer_iovec VAR_15[VAR_1];

 if (!VAR_6)
  return -1;
 FUNC_0(VAR_3);
 FUNC_2(!VAR_6->write_in_progress);
 if (VAR_3->freeze_end || VAR_6->read_in_progress)
  goto done;

 VAR_6->first_pinned = ((void*)0);
 VAR_6->n_buffers = 0;
 FUNC_13(VAR_6->buffers, 0, sizeof(VAR_6->buffers));

 if (FUNC_7(VAR_3, VAR_4, VAR_1) == -1)
  goto done;
 FUNC_9(VAR_3, 0);

 VAR_9 = FUNC_11(VAR_3, VAR_4,
     VAR_15, VAR_1, &VAR_12, 1);
 for (VAR_8=0;VAR_8<VAR_9;++VAR_8) {
  FUNC_3(
   &VAR_6->buffers[VAR_8],
   &VAR_15[VAR_8]);
 }

 VAR_6->n_buffers = VAR_9;
 VAR_6->first_pinned = VAR_11 = *VAR_12;

 VAR_10=0;
 for ( ; VAR_11; VAR_11 = VAR_11->next) {
  FUNC_6(VAR_11, VAR_0);
  ++VAR_10;
 }
 FUNC_2(VAR_10 == VAR_9);

 FUNC_10(VAR_3);
 if (FUNC_5(VAR_6->fd, VAR_6->buffers, VAR_9, &VAR_13, &VAR_14,
      &VAR_5->overlapped, ((void*)0))) {
  int VAR_16 = FUNC_4();
  if (VAR_16 != VAR_2) {

   FUNC_14(VAR_6, VAR_0);
   FUNC_12(VAR_3, 0);
   FUNC_8(VAR_3);
   goto done;
  }
 }

 VAR_6->read_in_progress = 1;
 VAR_7 = 0;
done:
 FUNC_1(VAR_3);
 return VAR_7;
}

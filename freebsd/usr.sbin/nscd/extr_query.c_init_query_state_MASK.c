
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_3__ {scalar_t__ tv_usec; int tv_sec; } ;
struct query_state {int sockfd; size_t kevent_watermark; int uid; int gid; TYPE_1__ timeout; int creation_time; int read_func; int write_func; int destroy_func; int process_func; int response; int request; int eid_str; int eid_str_length; int egid; int euid; int kevent_filter; } ;
typedef int gid_t ;
struct TYPE_4__ {int query_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct query_state* (*) (int,size_t,int ,int )) ;
 int FUNC_1 (struct query_state* (*) (int,size_t,int ,int )) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int ) ;
 struct query_state* FUNC_4 (int,int) ;
 int FUNC_5 (struct query_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_8 (int ) ;

struct query_state *
FUNC_9(int VAR_7, size_t VAR_8, uid_t VAR_9, gid_t VAR_10)
{
 struct query_state *VAR_11;

 FUNC_0(FUNC_9);
 VAR_11 = FUNC_4(1, sizeof(*VAR_11));
 FUNC_3(VAR_11 != ((void*)0));

 VAR_11->sockfd = VAR_7;
 VAR_11->kevent_filter = VAR_1;
 VAR_11->kevent_watermark = VAR_8;

 VAR_11->euid = VAR_9;
 VAR_11->egid = VAR_10;
 VAR_11->uid = VAR_11->gid = -1;

 if (FUNC_2(&VAR_11->eid_str, "%d_%d_", VAR_11->euid,
  VAR_11->egid) == -1) {
  FUNC_5(VAR_11);
  return (((void*)0));
 }
 VAR_11->eid_str_length = FUNC_8(VAR_11->eid_str);

 FUNC_7(&VAR_11->request, VAR_0);
 FUNC_7(&VAR_11->response, VAR_0);
 VAR_11->process_func = VAR_3;
 VAR_11->destroy_func = VAR_2;

 VAR_11->write_func = VAR_5;
 VAR_11->read_func = VAR_4;

 FUNC_6(&VAR_11->creation_time);
 VAR_11->timeout.tv_sec = VAR_6->query_timeout;
 VAR_11->timeout.tv_usec = 0;

 FUNC_1(FUNC_9);
 return (VAR_11);
}

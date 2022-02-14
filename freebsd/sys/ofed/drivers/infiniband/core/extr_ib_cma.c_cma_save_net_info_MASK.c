
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
struct TYPE_3__ {int * primary_path; } ;
struct TYPE_4__ {TYPE_1__ req_rcvd; } ;
struct ib_cm_event {scalar_t__ event; TYPE_2__ param; } ;
typedef scalar_t__ sa_family_t ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*,struct rdma_cm_id*,int *) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,struct ib_cm_event*,int ) ;

__attribute__((used)) static int FUNC_2(struct sockaddr *VAR_3,
        struct sockaddr *VAR_4,
        struct rdma_cm_id *VAR_5,
        struct ib_cm_event *VAR_6,
        sa_family_t VAR_7, __be64 VAR_8)
{
 if (VAR_7 == VAR_0) {
  if (VAR_6->event == VAR_1)
   FUNC_0(VAR_3, VAR_4, VAR_5,
      VAR_6->param.req_rcvd.primary_path);
  else if (VAR_6->event == VAR_2)
   FUNC_0(VAR_3, VAR_4, VAR_5, ((void*)0));
  return 0;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_6, VAR_8);
}

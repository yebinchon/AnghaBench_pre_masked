
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {int (* release ) (struct ib_sa_query*) ;scalar_t__ client; int id; int (* callback ) (struct ib_sa_query*,int ,int *) ;} ;
struct ib_mad_send_wc {int status; TYPE_1__* send_buf; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {struct ib_sa_query** context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ib_sa_query*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (struct ib_sa_query*,int ,int *) ;
 int FUNC_4 (struct ib_sa_query*,int ,int *) ;
 int FUNC_5 (struct ib_sa_query*,int ,int *) ;
 int FUNC_6 (struct ib_sa_query*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct ib_mad_agent *VAR_4,
    struct ib_mad_send_wc *VAR_5)
{
 struct ib_sa_query *VAR_6 = VAR_5->send_buf->context[0];
 unsigned long VAR_7;

 if (VAR_6->callback)
  switch (VAR_5->status) {
  case 129:

   break;
  case 130:
   VAR_6->callback(VAR_6, -VAR_2, ((void*)0));
   break;
  case 128:
   VAR_6->callback(VAR_6, -VAR_0, ((void*)0));
   break;
  default:
   VAR_6->callback(VAR_6, -VAR_1, ((void*)0));
   break;
  }

 FUNC_7(&VAR_3, VAR_7);
 FUNC_0(&VAR_3, VAR_6->id);
 FUNC_8(&VAR_3, VAR_7);

 FUNC_1(VAR_6);
 if (VAR_6->client)
  FUNC_2(VAR_6->client);
 VAR_6->release(VAR_6);
}

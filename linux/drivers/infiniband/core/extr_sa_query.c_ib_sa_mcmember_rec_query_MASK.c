
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_sa_query {struct ib_sa_client* client; int release; int * callback; TYPE_1__* mad_buf; struct ib_sa_port* port; } ;
struct ib_sa_port {struct ib_mad_agent* agent; } ;
struct ib_sa_mcmember_rec {int dummy; } ;
struct ib_sa_mcmember_query {void (* callback ) (int,struct ib_sa_mcmember_rec*,void*) ;struct ib_sa_query sa_query; void* context; } ;
struct TYPE_6__ {int comp_mask; } ;
struct TYPE_5__ {size_t method; int attr_id; } ;
struct ib_sa_mad {int data; TYPE_3__ sa_hdr; TYPE_2__ mad_hdr; } ;
struct ib_sa_device {size_t start_port; struct ib_sa_port* port; } ;
struct ib_sa_client {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
typedef int gfp_t ;
struct TYPE_4__ {struct ib_sa_mad* mad; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ib_sa_query*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_sa_query*) ;
 struct ib_sa_device* FUNC_4 (struct ib_device*,int *) ;
 int FUNC_5 (int ,int ,struct ib_sa_mcmember_rec*,int ) ;
 int FUNC_6 (struct ib_sa_client*) ;
 int FUNC_7 (struct ib_sa_client*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct ib_sa_query*,struct ib_mad_agent*) ;
 int FUNC_9 (struct ib_sa_mcmember_query*) ;
 struct ib_sa_mcmember_query* FUNC_10 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct ib_sa_query*,unsigned long,int ) ;

int FUNC_12(struct ib_sa_client *VAR_7,
        struct ib_device *VAR_8, u8 VAR_9,
        u8 VAR_10,
        struct ib_sa_mcmember_rec *VAR_11,
        ib_sa_comp_mask VAR_12,
        unsigned long VAR_13, gfp_t VAR_14,
        void (*VAR_15)(int VAR_16,
           struct ib_sa_mcmember_rec *VAR_17,
           void *VAR_18),
        void *VAR_19,
        struct ib_sa_query **VAR_20)
{
 struct ib_sa_mcmember_query *VAR_21;
 struct ib_sa_device *VAR_22 = FUNC_4(VAR_8, &VAR_6);
 struct ib_sa_port *VAR_23;
 struct ib_mad_agent *VAR_24;
 struct ib_sa_mad *VAR_25;
 int VAR_26;

 if (!VAR_22)
  return -VAR_0;

 VAR_23 = &VAR_22->port[VAR_9 - VAR_22->start_port];
 VAR_24 = VAR_23->agent;

 VAR_21 = FUNC_10(sizeof(*VAR_21), VAR_14);
 if (!VAR_21)
  return -VAR_1;

 VAR_21->sa_query.port = VAR_23;
 VAR_26 = FUNC_1(&VAR_21->sa_query, VAR_14);
 if (VAR_26)
  goto err1;

 FUNC_6(VAR_7);
 VAR_21->sa_query.client = VAR_7;
 VAR_21->callback = VAR_15;
 VAR_21->context = VAR_19;

 VAR_25 = VAR_21->sa_query.mad_buf->mad;
 FUNC_8(&VAR_21->sa_query, VAR_24);

 VAR_21->sa_query.callback = VAR_15 ? VAR_3 : ((void*)0);
 VAR_21->sa_query.release = VAR_4;
 VAR_25->mad_hdr.method = VAR_10;
 VAR_25->mad_hdr.attr_id = FUNC_2(VAR_2);
 VAR_25->sa_hdr.comp_mask = VAR_12;

 FUNC_5(VAR_5, FUNC_0(VAR_5),
  VAR_11, VAR_25->data);

 *VAR_20 = &VAR_21->sa_query;

 VAR_26 = FUNC_11(&VAR_21->sa_query, VAR_13, VAR_14);
 if (VAR_26 < 0)
  goto err2;

 return VAR_26;

err2:
 *VAR_20 = ((void*)0);
 FUNC_7(VAR_21->sa_query.client);
 FUNC_3(&VAR_21->sa_query);

err1:
 FUNC_9(VAR_21);
 return VAR_26;
}

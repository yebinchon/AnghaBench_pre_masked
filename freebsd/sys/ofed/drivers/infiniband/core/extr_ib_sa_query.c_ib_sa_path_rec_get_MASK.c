
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_sa_query {struct ib_sa_client* client; TYPE_3__* mad_buf; int flags; int release; int * callback; struct ib_sa_port* port; } ;
struct ib_sa_port {struct ib_mad_agent* agent; } ;
struct ib_sa_path_rec {int dummy; } ;
struct ib_sa_path_query {void (* callback ) (int,struct ib_sa_path_rec*,void*) ;struct ib_sa_query sa_query; void* context; } ;
struct TYPE_5__ {int comp_mask; } ;
struct TYPE_4__ {int attr_id; int method; } ;
struct ib_sa_mad {int data; TYPE_2__ sa_hdr; TYPE_1__ mad_hdr; } ;
struct ib_sa_device {size_t start_port; struct ib_sa_port* port; } ;
struct ib_sa_client {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
typedef int gfp_t ;
struct TYPE_6__ {struct ib_sa_path_rec** context; struct ib_sa_mad* mad; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ib_sa_query*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_sa_query*) ;
 struct ib_sa_device* FUNC_4 (struct ib_device*,int *) ;
 int FUNC_5 (int ,int ,struct ib_sa_path_rec*,int ) ;
 int FUNC_6 (struct ib_sa_client*) ;
 int FUNC_7 (struct ib_sa_client*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct ib_sa_mad*,struct ib_mad_agent*) ;
 int FUNC_9 (struct ib_sa_path_query*) ;
 struct ib_sa_path_query* FUNC_10 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct ib_sa_query*,int,int ) ;

int FUNC_12(struct ib_sa_client *VAR_9,
         struct ib_device *VAR_10, u8 VAR_11,
         struct ib_sa_path_rec *VAR_12,
         ib_sa_comp_mask VAR_13,
         int VAR_14, gfp_t VAR_15,
         void (*VAR_16)(int VAR_17,
     struct ib_sa_path_rec *VAR_18,
     void *VAR_19),
         void *VAR_20,
         struct ib_sa_query **VAR_21)
{
 struct ib_sa_path_query *VAR_22;
 struct ib_sa_device *VAR_23 = FUNC_4(VAR_10, &VAR_8);
 struct ib_sa_port *VAR_24;
 struct ib_mad_agent *VAR_25;
 struct ib_sa_mad *VAR_26;
 int VAR_27;

 if (!VAR_23)
  return -VAR_0;

 VAR_24 = &VAR_23->port[VAR_11 - VAR_23->start_port];
 VAR_25 = VAR_24->agent;

 VAR_22 = FUNC_10(sizeof(*VAR_22), VAR_15);
 if (!VAR_22)
  return -VAR_1;

 VAR_22->sa_query.port = VAR_24;
 VAR_27 = FUNC_1(&VAR_22->sa_query, VAR_15);
 if (VAR_27)
  goto err1;

 FUNC_6(VAR_9);
 VAR_22->sa_query.client = VAR_9;
 VAR_22->callback = VAR_16;
 VAR_22->context = VAR_20;

 VAR_26 = VAR_22->sa_query.mad_buf->mad;
 FUNC_8(VAR_26, VAR_25);

 VAR_22->sa_query.callback = VAR_16 ? VAR_5 : ((void*)0);
 VAR_22->sa_query.release = VAR_6;
 VAR_26->mad_hdr.method = VAR_2;
 VAR_26->mad_hdr.attr_id = FUNC_2(VAR_3);
 VAR_26->sa_hdr.comp_mask = VAR_13;

 FUNC_5(VAR_7, FUNC_0(VAR_7), VAR_12, VAR_26->data);

 *VAR_21 = &VAR_22->sa_query;

 VAR_22->sa_query.flags |= VAR_4;
 VAR_22->sa_query.mad_buf->context[1] = VAR_12;

 VAR_27 = FUNC_11(&VAR_22->sa_query, VAR_14, VAR_15);
 if (VAR_27 < 0)
  goto err2;

 return VAR_27;

err2:
 *VAR_21 = ((void*)0);
 FUNC_7(VAR_22->sa_query.client);
 FUNC_3(&VAR_22->sa_query);

err1:
 FUNC_9(VAR_22);
 return VAR_27;
}

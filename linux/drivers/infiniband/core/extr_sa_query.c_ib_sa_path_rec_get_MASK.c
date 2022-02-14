
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_sa_query {int flags; struct ib_sa_client* client; TYPE_3__* mad_buf; int release; int * callback; struct ib_sa_port* port; } ;
struct sa_path_rec {scalar_t__ rec_type; void (* callback ) (int,struct sa_path_rec*,void*) ;struct sa_path_rec* conv_pr; struct ib_sa_query sa_query; void* context; } ;
struct ib_sa_port {struct ib_mad_agent* agent; } ;
struct ib_sa_path_query {scalar_t__ rec_type; void (* callback ) (int,struct sa_path_rec*,void*) ;struct ib_sa_path_query* conv_pr; struct ib_sa_query sa_query; void* context; } ;
struct TYPE_5__ {int comp_mask; } ;
struct TYPE_4__ {int attr_id; int method; } ;
struct ib_sa_mad {int data; TYPE_2__ sa_hdr; TYPE_1__ mad_hdr; } ;
struct ib_sa_device {size_t start_port; struct ib_sa_port* port; } ;
struct ib_sa_client {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int ib_sa_comp_mask ;
typedef int gfp_t ;
typedef enum opa_pr_supported { ____Placeholder_opa_pr_supported } opa_pr_supported ;
struct TYPE_6__ {struct sa_path_rec** context; struct ib_sa_mad* mad; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ib_sa_query*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_sa_query*) ;
 struct ib_sa_device* FUNC_4 (struct ib_device*,int *) ;
 int FUNC_5 (int ,int ,struct sa_path_rec*,int ) ;
 int FUNC_6 (struct ib_sa_client*) ;
 int FUNC_7 (struct ib_sa_client*) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct ib_sa_query*,struct ib_mad_agent*) ;
 int FUNC_9 (struct sa_path_rec*) ;
 struct sa_path_rec* FUNC_10 (int,int ) ;
 struct sa_path_rec* FUNC_11 (int,int ) ;
 int VAR_13 ;
 int FUNC_12 (struct ib_sa_client*,struct ib_device*,size_t,struct sa_path_rec*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (struct sa_path_rec*,struct sa_path_rec*) ;
 int FUNC_14 (struct ib_sa_query*,unsigned long,int ) ;

int FUNC_15(struct ib_sa_client *VAR_16,
         struct ib_device *VAR_17, u8 VAR_18,
         struct sa_path_rec *VAR_19,
         ib_sa_comp_mask VAR_20,
         unsigned long VAR_21, gfp_t VAR_22,
         void (*VAR_23)(int VAR_24,
     struct sa_path_rec *VAR_25,
     void *VAR_26),
         void *VAR_27,
         struct ib_sa_query **VAR_28)
{
 struct ib_sa_path_query *VAR_29;
 struct ib_sa_device *VAR_30 = FUNC_4(VAR_17, &VAR_15);
 struct ib_sa_port *VAR_31;
 struct ib_mad_agent *VAR_32;
 struct ib_sa_mad *VAR_33;
 enum opa_pr_supported VAR_34;
 int VAR_35;

 if (!VAR_30)
  return -VAR_1;

 if ((VAR_19->rec_type != VAR_9) &&
     (VAR_19->rec_type != VAR_10))
  return -VAR_0;

 VAR_31 = &VAR_30->port[VAR_18 - VAR_30->start_port];
 VAR_32 = VAR_31->agent;

 VAR_29 = FUNC_11(sizeof(*VAR_29), VAR_22);
 if (!VAR_29)
  return -VAR_2;

 VAR_29->sa_query.port = VAR_31;
 if (VAR_19->rec_type == VAR_10) {
  VAR_34 = FUNC_12(VAR_16, VAR_17, VAR_18, VAR_19);
  if (VAR_34 == VAR_7) {
   VAR_35 = -VAR_0;
   goto err1;
  } else if (VAR_34 == VAR_8) {
   VAR_29->sa_query.flags |= VAR_6;
  } else {
   VAR_29->conv_pr =
    FUNC_10(sizeof(*VAR_29->conv_pr), VAR_22);
   if (!VAR_29->conv_pr) {
    VAR_35 = -VAR_2;
    goto err1;
   }
  }
 }

 VAR_35 = FUNC_1(&VAR_29->sa_query, VAR_22);
 if (VAR_35)
  goto err2;

 FUNC_6(VAR_16);
 VAR_29->sa_query.client = VAR_16;
 VAR_29->callback = VAR_23;
 VAR_29->context = VAR_27;

 VAR_33 = VAR_29->sa_query.mad_buf->mad;
 FUNC_8(&VAR_29->sa_query, VAR_32);

 VAR_29->sa_query.callback = VAR_23 ? VAR_11 : ((void*)0);
 VAR_29->sa_query.release = VAR_12;
 VAR_33->mad_hdr.method = VAR_3;
 VAR_33->mad_hdr.attr_id = FUNC_2(VAR_4);
 VAR_33->sa_hdr.comp_mask = VAR_20;

 if (VAR_29->sa_query.flags & VAR_6) {
  FUNC_5(VAR_13, FUNC_0(VAR_13),
   VAR_19, VAR_33->data);
 } else if (VAR_29->conv_pr) {
  FUNC_13(VAR_29->conv_pr, VAR_19);
  FUNC_5(VAR_14, FUNC_0(VAR_14),
   VAR_29->conv_pr, VAR_33->data);
 } else {
  FUNC_5(VAR_14, FUNC_0(VAR_14),
   VAR_19, VAR_33->data);
 }

 *VAR_28 = &VAR_29->sa_query;

 VAR_29->sa_query.flags |= VAR_5;
 VAR_29->sa_query.mad_buf->context[1] = (VAR_29->conv_pr) ?
      VAR_29->conv_pr : VAR_19;

 VAR_35 = FUNC_14(&VAR_29->sa_query, VAR_21, VAR_22);
 if (VAR_35 < 0)
  goto err3;

 return VAR_35;

err3:
 *VAR_28 = ((void*)0);
 FUNC_7(VAR_29->sa_query.client);
 FUNC_3(&VAR_29->sa_query);
err2:
 FUNC_9(VAR_29->conv_pr);
err1:
 FUNC_9(VAR_29);
 return VAR_35;
}

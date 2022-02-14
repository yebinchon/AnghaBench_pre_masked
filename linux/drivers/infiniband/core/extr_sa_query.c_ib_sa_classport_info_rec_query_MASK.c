
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_sa_query {int release; int callback; TYPE_1__* mad_buf; int flags; struct ib_sa_port* port; } ;
struct ib_sa_port {int port_num; struct ib_mad_agent* agent; } ;
struct TYPE_6__ {scalar_t__ comp_mask; } ;
struct TYPE_5__ {int attr_id; int method; } ;
struct ib_sa_mad {TYPE_3__ sa_hdr; TYPE_2__ mad_hdr; } ;
struct ib_sa_classport_info_query {void (* callback ) (void*) ;struct ib_sa_query sa_query; void* context; } ;
struct ib_mad_agent {int device; } ;
typedef int gfp_t ;
struct TYPE_4__ {struct ib_sa_mad* mad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ib_sa_query*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_sa_query*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ib_sa_query*,struct ib_mad_agent*) ;
 int FUNC_4 (struct ib_sa_classport_info_query*) ;
 struct ib_sa_classport_info_query* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ib_sa_query*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_8(struct ib_sa_port *VAR_7,
       unsigned long VAR_8,
       void (*VAR_9)(void *VAR_10),
       void *VAR_11,
       struct ib_sa_query **VAR_12)
{
 struct ib_mad_agent *VAR_13;
 struct ib_sa_classport_info_query *VAR_14;
 struct ib_sa_mad *VAR_15;
 gfp_t VAR_16 = VAR_1;
 int VAR_17;

 VAR_13 = VAR_7->agent;

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_16);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->sa_query.port = VAR_7;
 VAR_14->sa_query.flags |= FUNC_6(VAR_7->agent->device,
       VAR_7->port_num) ?
     VAR_4 : 0;
 VAR_17 = FUNC_0(&VAR_14->sa_query, VAR_16);
 if (VAR_17)
  goto err_free;

 VAR_14->callback = VAR_9;
 VAR_14->context = VAR_11;

 VAR_15 = VAR_14->sa_query.mad_buf->mad;
 FUNC_3(&VAR_14->sa_query, VAR_13);

 VAR_14->sa_query.callback = VAR_5;
 VAR_14->sa_query.release = VAR_6;
 VAR_15->mad_hdr.method = VAR_2;
 VAR_15->mad_hdr.attr_id = FUNC_1(VAR_3);
 VAR_15->sa_hdr.comp_mask = 0;
 *VAR_12 = &VAR_14->sa_query;

 VAR_17 = FUNC_7(&VAR_14->sa_query, VAR_8, VAR_16);
 if (VAR_17 < 0)
  goto err_free_mad;

 return VAR_17;

err_free_mad:
 *VAR_12 = ((void*)0);
 FUNC_2(&VAR_14->sa_query);

err_free:
 FUNC_4(VAR_14);
 return VAR_17;
}

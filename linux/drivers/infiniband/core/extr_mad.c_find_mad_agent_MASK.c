
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ib_vendor_mad {int oui; } ;
struct ib_mad_port_private {int port_num; TYPE_2__* device; int reg_lock; TYPE_1__* version; } ;
struct ib_mad_mgmt_vendor_class_table {struct ib_mad_mgmt_vendor_class** vendor_class; } ;
struct ib_mad_mgmt_vendor_class {struct ib_mad_mgmt_method_table** method_table; } ;
struct ib_mad_mgmt_method_table {struct ib_mad_agent_private** agent; } ;
struct ib_mad_mgmt_class_table {struct ib_mad_mgmt_method_table** method_table; } ;
struct ib_mad_hdr {size_t class_version; size_t method; int mgmt_class; int tid; } ;
struct TYPE_6__ {int recv_handler; } ;
struct ib_mad_agent_private {TYPE_3__ agent; int refcount; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct ib_mad_mgmt_vendor_class_table* vendor; struct ib_mad_mgmt_class_table* class; } ;


 size_t FUNC_0 (struct ib_mad_mgmt_method_table**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct ib_mad_agent_private*) ;
 int FUNC_6 (int *,char*,TYPE_3__*,int ) ;
 int FUNC_7 (struct ib_mad_mgmt_vendor_class*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct ib_mad_hdr const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 size_t FUNC_14 (int ) ;
 struct ib_mad_agent_private* FUNC_15 (int *,int) ;

__attribute__((used)) static struct ib_mad_agent_private *
FUNC_16(struct ib_mad_port_private *VAR_3,
        const struct ib_mad_hdr *VAR_4)
{
 struct ib_mad_agent_private *VAR_5 = ((void*)0);
 unsigned long VAR_6;

 if (FUNC_8(VAR_4)) {
  u32 VAR_7;





  VAR_7 = FUNC_3(VAR_4->tid) >> 32;
  FUNC_10();
  VAR_5 = FUNC_15(&VAR_2, VAR_7);
  if (VAR_5 && !FUNC_2(&VAR_5->refcount))
   VAR_5 = ((void*)0);
  FUNC_11();
 } else {
  struct ib_mad_mgmt_class_table *VAR_8;
  struct ib_mad_mgmt_method_table *VAR_9;
  struct ib_mad_mgmt_vendor_class_table *VAR_10;
  struct ib_mad_mgmt_vendor_class *VAR_11;
  const struct ib_vendor_mad *VAR_12;
  int VAR_13;

  FUNC_12(&VAR_3->reg_lock, VAR_6);




  if (VAR_4->class_version >= VAR_1)
   goto out;
  if (!FUNC_9(VAR_4->mgmt_class)) {
   VAR_8 = VAR_3->version[
     VAR_4->class_version].class;
   if (!VAR_8)
    goto out;
   if (FUNC_4(VAR_4->mgmt_class) >=
       FUNC_0(VAR_8->method_table))
    goto out;
   VAR_9 = VAR_8->method_table[FUNC_4(
       VAR_4->mgmt_class)];
   if (VAR_9)
    VAR_5 = VAR_9->agent[VAR_4->method &
         ~VAR_0];
  } else {
   VAR_10 = VAR_3->version[
     VAR_4->class_version].vendor;
   if (!VAR_10)
    goto out;
   VAR_11 = VAR_10->vendor_class[FUNC_14(
      VAR_4->mgmt_class)];
   if (!VAR_11)
    goto out;

   VAR_12 = (const struct ib_vendor_mad *)VAR_4;
   VAR_13 = FUNC_7(VAR_11, VAR_12->oui);
   if (VAR_13 == -1)
    goto out;
   VAR_9 = VAR_11->method_table[VAR_13];
   if (VAR_9) {
    VAR_5 = VAR_9->agent[VAR_4->method &
         ~VAR_0];
   }
  }
  if (VAR_5)
   FUNC_1(&VAR_5->refcount);
out:
  FUNC_13(&VAR_3->reg_lock, VAR_6);
 }

 if (VAR_5 && !VAR_5->agent.recv_handler) {
  FUNC_6(&VAR_3->device->dev,
      "No receive handler for client %p on port %d\n",
      &VAR_5->agent, VAR_3->port_num);
  FUNC_5(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}

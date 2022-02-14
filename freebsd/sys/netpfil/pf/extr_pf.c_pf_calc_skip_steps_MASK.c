
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pf_rulequeue {int dummy; } ;
struct TYPE_4__ {scalar_t__ neg; scalar_t__* port; scalar_t__ port_op; int addr; } ;
struct TYPE_3__ {scalar_t__ neg; scalar_t__* port; scalar_t__ port_op; int addr; } ;
struct pf_rule {scalar_t__ kif; scalar_t__ ifnot; scalar_t__ direction; scalar_t__ af; scalar_t__ proto; TYPE_2__ dst; TYPE_1__ src; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pf_rule* FUNC_1 (struct pf_rulequeue*) ;
 struct pf_rule* FUNC_2 (struct pf_rule*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *,int *) ;

void
FUNC_4(struct pf_rulequeue *VAR_10)
{
 struct pf_rule *VAR_11, *VAR_12, *VAR_13[VAR_1];
 int VAR_14;

 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = VAR_11;
 for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14)
  VAR_13[VAR_14] = VAR_11;
 while (VAR_11 != ((void*)0)) {

  if (VAR_11->kif != VAR_12->kif || VAR_11->ifnot != VAR_12->ifnot)
   FUNC_0(VAR_5);
  if (VAR_11->direction != VAR_12->direction)
   FUNC_0(VAR_2);
  if (VAR_11->af != VAR_12->af)
   FUNC_0(VAR_0);
  if (VAR_11->proto != VAR_12->proto)
   FUNC_0(VAR_6);
  if (VAR_11->src.neg != VAR_12->src.neg ||
      FUNC_3(&VAR_11->src.addr, &VAR_12->src.addr))
   FUNC_0(VAR_7);
  if (VAR_11->src.port[0] != VAR_12->src.port[0] ||
      VAR_11->src.port[1] != VAR_12->src.port[1] ||
      VAR_11->src.port_op != VAR_12->src.port_op)
   FUNC_0(VAR_8);
  if (VAR_11->dst.neg != VAR_12->dst.neg ||
      FUNC_3(&VAR_11->dst.addr, &VAR_12->dst.addr))
   FUNC_0(VAR_3);
  if (VAR_11->dst.port[0] != VAR_12->dst.port[0] ||
      VAR_11->dst.port[1] != VAR_12->dst.port[1] ||
      VAR_11->dst.port_op != VAR_12->dst.port_op)
   FUNC_0(VAR_4);

  VAR_12 = VAR_11;
  VAR_11 = FUNC_2(VAR_11, VAR_9);
 }
 for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14)
  FUNC_0(VAR_14);
}

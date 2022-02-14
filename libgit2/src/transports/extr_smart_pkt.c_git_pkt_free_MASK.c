
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* symref_target; TYPE_5__* name; } ;
struct TYPE_9__ {TYPE_1__ head; } ;
typedef TYPE_2__ git_pkt_ref ;
struct TYPE_10__ {TYPE_5__* ref; } ;
typedef TYPE_3__ git_pkt_ok ;
struct TYPE_11__ {TYPE_5__* msg; TYPE_5__* ref; } ;
typedef TYPE_4__ git_pkt_ng ;
struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_5__ git_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;

void FUNC_1(git_pkt *VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  return;
 }
 if (VAR_3->type == VAR_2) {
  git_pkt_ref *VAR_4 = (git_pkt_ref *) VAR_3;
  FUNC_0(VAR_4->head.name);
  FUNC_0(VAR_4->head.symref_target);
 }

 if (VAR_3->type == VAR_1) {
  git_pkt_ok *VAR_5 = (git_pkt_ok *) VAR_3;
  FUNC_0(VAR_5->ref);
 }

 if (VAR_3->type == VAR_0) {
  git_pkt_ng *VAR_6 = (git_pkt_ng *) VAR_3;
  FUNC_0(VAR_6->ref);
  FUNC_0(VAR_6->msg);
 }

 FUNC_0(VAR_3);
}

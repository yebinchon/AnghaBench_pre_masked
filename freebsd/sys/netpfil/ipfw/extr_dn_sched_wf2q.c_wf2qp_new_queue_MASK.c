
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wf2qp_queue {int inv_w; scalar_t__ F; scalar_t__ S; } ;
struct TYPE_8__ {int * head; } ;
struct TYPE_9__ {int subtype; } ;
struct TYPE_10__ {TYPE_4__ oid; } ;
struct dn_queue {TYPE_3__ mq; int _si; TYPE_2__* fs; TYPE_5__ ni; } ;
struct TYPE_6__ {int* par; } ;
struct TYPE_7__ {TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dn_queue*,int *) ;

__attribute__((used)) static int
FUNC_1(struct dn_queue *VAR_2)
{
 struct wf2qp_queue *VAR_3 = (struct wf2qp_queue *)VAR_2;

 VAR_2->ni.oid.subtype = VAR_0;
 VAR_3->F = 0;
 VAR_3->S = VAR_3->F + 1;
        VAR_3->inv_w = VAR_1 / VAR_2->fs->fs.par[0];
 if (VAR_2->mq.head != ((void*)0)) {
  FUNC_0(VAR_2->_si, VAR_2, VAR_2->mq.head);
 }
 return 0;
}

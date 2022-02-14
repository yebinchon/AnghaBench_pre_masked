
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int num_sge; TYPE_1__* sge; } ;
struct ib_sge {scalar_t__ length; scalar_t__ addr; } ;
struct ib_send_wr {int num_sge; struct ib_sge* sg_list; } ;
struct TYPE_2__ {uintptr_t laddr; int length; scalar_t__ lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct ib_send_wr *VAR_2,
          struct siw_sqe *VAR_3)
{
 struct ib_sge *VAR_4 = VAR_2->sg_list;
 void *VAR_5 = &VAR_3->sge[1];
 int VAR_6 = VAR_2->num_sge, VAR_7 = 0;

 VAR_3->sge[0].laddr = (uintptr_t)VAR_5;
 VAR_3->sge[0].lkey = 0;

 while (VAR_6--) {
  if (!VAR_4->length) {
   VAR_4++;
   continue;
  }
  VAR_7 += VAR_4->length;
  if (VAR_7 > VAR_1) {
   VAR_7 = -VAR_0;
   break;
  }
  FUNC_0(VAR_5, (void *)(uintptr_t)VAR_4->addr,
         VAR_4->length);

  VAR_5 += VAR_4->length;
  VAR_4++;
 }
 VAR_3->sge[0].length = VAR_7 > 0 ? VAR_7 : 0;
 VAR_3->num_sge = VAR_7 > 0 ? 1 : 0;

 return VAR_7;
}

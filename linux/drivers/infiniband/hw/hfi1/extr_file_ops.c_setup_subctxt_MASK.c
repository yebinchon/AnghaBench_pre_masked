
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int size; } ;
struct hfi1_ctxtdata {int subctxt_cnt; int * subctxt_uregbase; int * subctxt_rcvhdr_base; void* subctxt_rcvegrbuf; TYPE_1__ egrbufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hfi1_ctxtdata *VAR_2)
{
 int VAR_3 = 0;
 u16 VAR_4 = VAR_2->subctxt_cnt;

 VAR_2->subctxt_uregbase = FUNC_2(VAR_1);
 if (!VAR_2->subctxt_uregbase)
  return -VAR_0;


 VAR_2->subctxt_rcvhdr_base = FUNC_2(FUNC_0(VAR_2) *
        VAR_4);
 if (!VAR_2->subctxt_rcvhdr_base) {
  VAR_3 = -VAR_0;
  goto bail_ureg;
 }

 VAR_2->subctxt_rcvegrbuf = FUNC_2(VAR_2->egrbufs.size *
      VAR_4);
 if (!VAR_2->subctxt_rcvegrbuf) {
  VAR_3 = -VAR_0;
  goto bail_rhdr;
 }

 return 0;

bail_rhdr:
 FUNC_1(VAR_2->subctxt_rcvhdr_base);
 VAR_2->subctxt_rcvhdr_base = ((void*)0);
bail_ureg:
 FUNC_1(VAR_2->subctxt_uregbase);
 VAR_2->subctxt_uregbase = ((void*)0);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qrange {int dummy; } ;
struct qout64 {unsigned long qoutptr; int qoutlen; int segcnt; int segstart; TYPE_1__* range; int segend; int qname; int qopcode; } ;
struct qin64 {unsigned long qoutptr; int qoutlen; int segcnt; int segstart; TYPE_1__* range; int segend; int qname; int qopcode; } ;
struct dcss_segment {int vm_segtype; int start_addr; int segcnt; int range; int end; TYPE_1__* dcss_name; } ;
struct TYPE_2__ {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct qout64*,unsigned long*,unsigned long*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct qout64*) ;
 struct qout64* FUNC_3 (int,int) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (char*,unsigned long) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_6 (struct dcss_segment *VAR_10)
{
 unsigned long VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 struct qout64 *VAR_16;
 struct qin64 *VAR_17;

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_4 | VAR_3);
 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_4 | VAR_3);
 if ((VAR_17 == ((void*)0)) || (VAR_16 == ((void*)0))) {
  VAR_14 = -VAR_1;
  goto out_free;
 }


 VAR_17->qopcode = VAR_0;
 VAR_17->qoutptr = (unsigned long) VAR_16;
 VAR_17->qoutlen = sizeof(struct qout64);
 FUNC_4 (VAR_17->qname, VAR_10->dcss_name, 8);

 VAR_13 = FUNC_0(&VAR_9, VAR_17, &VAR_11, &VAR_12);

 if (VAR_13 < 0) {
  VAR_14 = VAR_13;
  goto out_free;
 }
 if (VAR_13 > 1) {
  FUNC_5("Querying a DCSS type failed with rc=%ld\n", VAR_12);
  VAR_14 = FUNC_1 (VAR_12);
  goto out_free;
 }

 if (VAR_16->segcnt > 6) {
  VAR_14 = -VAR_2;
  goto out_free;
 }

 if (VAR_16->segcnt == 1) {
  VAR_10->vm_segtype = VAR_16->range[0].start & 0xff;
 } else {




  unsigned long VAR_18 = VAR_16->segstart >> VAR_5;
  for (VAR_15=0; VAR_15<VAR_16->segcnt; VAR_15++) {
   if (((VAR_16->range[VAR_15].start & 0xff) != VAR_7) &&
       ((VAR_16->range[VAR_15].start & 0xff) != VAR_6)) {
    VAR_14 = -VAR_2;
    goto out_free;
   }
   if (VAR_18 != VAR_16->range[VAR_15].start >> VAR_5) {
    VAR_14 = -VAR_2;
    goto out_free;
   }
   VAR_18 = (VAR_16->range[VAR_15].end >> VAR_5) + 1;
  }
  VAR_10->vm_segtype = VAR_8;
 }


 VAR_10->start_addr = VAR_16->segstart;
 VAR_10->end = VAR_16->segend;

 FUNC_4 (VAR_10->range, VAR_16->range, 6*sizeof(struct qrange));
 VAR_10->segcnt = VAR_16->segcnt;

 VAR_14 = 0;

 out_free:
 FUNC_2(VAR_17);
 FUNC_2(VAR_16);
 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int uint8_t ;
struct vm_pagequeue {int pq_pl; } ;
struct vm_domain {int vmd_inacthead; } ;
struct TYPE_14__ {int q; } ;
struct TYPE_13__ {scalar_t__ queue; int aflags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int VAR_6 ;
 TYPE_9__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 struct vm_pagequeue* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct vm_pagequeue*) ;
 int FUNC_13 (struct vm_pagequeue*) ;
 struct vm_domain* FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct vm_pagequeue*,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_16(struct vm_pagequeue *VAR_10, vm_page_t VAR_11)
{
 struct vm_domain *VAR_12;
 uint8_t VAR_13;

 FUNC_0(VAR_6);
 FUNC_12(VAR_10);






 VAR_13 = FUNC_6(&VAR_11->aflags);
 FUNC_1(VAR_10 == FUNC_11(VAR_11) ||
     (VAR_13 & VAR_2) == 0,
     ("page %p doesn't belong to queue %p but has aflags %#x",
     VAR_11, VAR_10, VAR_13));

 if ((VAR_13 & VAR_0) != 0) {
  if (FUNC_5((VAR_13 & VAR_1) != 0))
   FUNC_15(VAR_10, VAR_11);
  FUNC_10(VAR_11);
  FUNC_7(VAR_9, 1);
 } else if ((VAR_13 & (VAR_3 | VAR_4)) != 0) {
  if ((VAR_13 & VAR_1) != 0)
   FUNC_4(&VAR_10->pq_pl, VAR_11, VAR_7.q);
  else {
   FUNC_13(VAR_10);
   FUNC_9(VAR_11, VAR_1);
  }







  if ((VAR_13 & VAR_4) != 0) {
   FUNC_1(VAR_11->queue == VAR_5,
       ("head enqueue not supported for page %p", VAR_11));
   VAR_12 = FUNC_14(VAR_11);
   FUNC_2(&VAR_12->vmd_inacthead, VAR_11, VAR_7.q);
  } else
   FUNC_3(&VAR_10->pq_pl, VAR_11, VAR_7.q);

  FUNC_8(VAR_11, VAR_13 & (VAR_3 |
      VAR_4));
  FUNC_7(VAR_9, 1);
 } else {
  FUNC_7(VAR_8, 1);
 }
}

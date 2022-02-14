
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vm_pagequeue {scalar_t__ pq_cnt; } ;
struct vm_domain {scalar_t__ vmd_segs; scalar_t__ vmd_free_count; int vmd_background_launder_target; scalar_t__ vmd_laundry_request; int vmd_pageout_deficit; scalar_t__ vmd_clean_pages_freed; scalar_t__ vmd_free_min; scalar_t__ vmd_free_target; struct vm_pagequeue* vmd_pagequeues; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vm_domain*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct vm_domain* FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__*,int ,int ,char*,int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct vm_domain*) ;
 int FUNC_9 (struct vm_domain*,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (struct vm_pagequeue*) ;
 int FUNC_11 (struct vm_pagequeue*) ;
 int FUNC_12 (struct vm_pagequeue*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_16)
{
 struct vm_domain *VAR_17;
 struct vm_pagequeue *VAR_18;
 uint64_t VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 bool VAR_28;

 VAR_22 = (uintptr_t)VAR_16;
 VAR_17 = FUNC_2(VAR_22);
 VAR_18 = &VAR_17->vmd_pagequeues[VAR_3];
 FUNC_1(VAR_17->vmd_segs != 0, ("domain without segments"));

 VAR_25 = 0;
 VAR_28 = 0;
 VAR_26 = 0;
 VAR_23 = VAR_27 = 0;
 VAR_21 = 0;




 (void)FUNC_0(VAR_11, VAR_15, VAR_17,
     VAR_0);
 (void)FUNC_0(VAR_10, VAR_14, VAR_17,
     VAR_0);




 for (;;) {
  FUNC_1(VAR_27 >= 0, ("negative target %d", VAR_27));
  FUNC_1(VAR_26 >= 0,
      ("negative cycle %d", VAR_26));
  VAR_24 = 0;





  if (VAR_25 > 0) {
   VAR_28 = 1;
   VAR_26 = VAR_6 / VAR_5;
   VAR_27 = VAR_25;
  } else if (!VAR_28)
   goto trybackground;
  else if (VAR_26 == 0 || FUNC_8(VAR_17) <= 0) {







   VAR_28 = 0;
   VAR_27 = 0;
   goto trybackground;
  }
  VAR_24 = VAR_27 / VAR_26--;
  goto dolaundry;
trybackground:
  VAR_19 = VAR_17->vmd_free_count +
      VAR_17->vmd_pagequeues[VAR_2].pq_cnt;
  VAR_20 = VAR_17->vmd_pagequeues[VAR_3].pq_cnt;
  if (VAR_27 == 0 && VAR_20 * FUNC_4(FUNC_3(VAR_21 + 1,
      VAR_17->vmd_free_target - VAR_17->vmd_free_min)) >= VAR_19) {
   VAR_27 = VAR_17->vmd_background_launder_target;
  }
  if (VAR_27 > 0) {
   if (VAR_21 > 0) {
    VAR_21 = 0;
    VAR_23 = VAR_27;
   } else if (VAR_23 - VAR_27 >=
       VAR_12 * VAR_1 / 1024) {
    VAR_27 = 0;
   }
   VAR_24 = VAR_13 * VAR_1 / 1024;
   VAR_24 /= VAR_6;
   if (VAR_24 > VAR_27)
    VAR_24 = VAR_27;
  }

dolaundry:
  if (VAR_24 > 0) {





   VAR_27 -= FUNC_5(FUNC_9(VAR_17, VAR_24,
       VAR_28), VAR_27);
   FUNC_7("laundp", VAR_9 / VAR_6);
  }






  FUNC_10(VAR_18);
  if (VAR_27 == 0 && VAR_17->vmd_laundry_request == VAR_7)
   (void)FUNC_6(&VAR_17->vmd_laundry_request,
       FUNC_11(VAR_18), VAR_4, "launds", 0);






  if (VAR_17->vmd_laundry_request == VAR_8 &&
      (!VAR_28 || VAR_26 == 0)) {
   VAR_25 = FUNC_8(VAR_17) +
       VAR_17->vmd_pageout_deficit;
   VAR_27 = 0;
  } else
   VAR_25 = 0;

  if (VAR_27 == 0)
   VAR_17->vmd_laundry_request = VAR_7;
  VAR_21 += VAR_17->vmd_clean_pages_freed;
  VAR_17->vmd_clean_pages_freed = 0;
  FUNC_12(VAR_18);
 }
}

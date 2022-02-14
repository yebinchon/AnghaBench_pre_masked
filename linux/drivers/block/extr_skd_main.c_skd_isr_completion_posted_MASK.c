
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct fit_comp_error_info {int fruc; int qual; int code; int key; } ;
struct fit_completion_entry_v1 {scalar_t__ cycle; size_t tag; scalar_t__ status; int num_returned_bytes; } ;
struct skd_request_context {size_t id; scalar_t__ state; scalar_t__ n_sg; int status; struct fit_comp_error_info err_info; struct fit_completion_entry_v1 completion; } ;
struct TYPE_3__ {int * tags; } ;
struct skd_device {size_t skcomp_ix; scalar_t__ skcomp_cycle; size_t num_req_context; scalar_t__ state; int waitq; TYPE_2__* pdev; TYPE_1__ tag_set; int proto_ver; struct fit_comp_error_info* skerr_table; struct fit_completion_entry_v1* skcomp_table; int lock; } ;
struct request {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int,char*,size_t,size_t) ;
 int FUNC_2 (struct request*) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct request*) ;
 struct skd_request_context* FUNC_5 (struct request*) ;
 struct request* FUNC_6 (int ,size_t) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,char*,size_t,size_t,size_t) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct skd_device*,struct fit_completion_entry_v1*,struct fit_comp_error_info*) ;
 scalar_t__ FUNC_12 (struct skd_device*) ;
 int FUNC_13 (struct skd_device*,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_14 (struct skd_device*,struct skd_request_context*) ;
 int FUNC_15 (struct skd_device*,struct skd_request_context*) ;
 int FUNC_16 (struct skd_device*,struct skd_request_context*,struct request*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct skd_device *VAR_8,
     int VAR_9, int *VAR_10)
{
 struct fit_completion_entry_v1 *VAR_11;
 struct fit_comp_error_info *VAR_12;
 u16 VAR_13;
 u32 VAR_14;
 u16 VAR_15 = 0;
 struct request *VAR_16;
 struct skd_request_context *VAR_17;
 u16 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u32 VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;

 FUNC_10(&VAR_8->lock);

 for (;; ) {
  FUNC_0(VAR_8->skcomp_ix < VAR_6);

  VAR_11 = &VAR_8->skcomp_table[VAR_8->skcomp_ix];
  VAR_20 = VAR_11->cycle;
  VAR_18 = VAR_11->tag;
  VAR_19 = VAR_11->status;
  VAR_21 = FUNC_3(VAR_11->num_returned_bytes);

  VAR_12 = &VAR_8->skerr_table[VAR_8->skcomp_ix];

  FUNC_7(&VAR_8->pdev->dev,
   "cycle=%d ix=%d got cycle=%d cmdctxt=0x%x stat=%d busy=%d rbytes=0x%x proto=%d\n",
   VAR_8->skcomp_cycle, VAR_8->skcomp_ix, VAR_20,
   VAR_18, VAR_19, FUNC_12(VAR_8),
   VAR_21, VAR_8->proto_ver);

  if (VAR_20 != VAR_8->skcomp_cycle) {
   FUNC_7(&VAR_8->pdev->dev, "end of completions\n");
   break;
  }




  VAR_8->skcomp_ix++;
  if (VAR_8->skcomp_ix >= VAR_6) {
   VAR_8->skcomp_ix = 0;
   VAR_8->skcomp_cycle++;
  }






  VAR_13 = VAR_18;
  VAR_14 = VAR_13 & VAR_5;


  if (VAR_14 >= VAR_8->num_req_context) {



   FUNC_2(FUNC_6(VAR_8->tag_set.tags[VAR_15],
            VAR_14));
   FUNC_11(VAR_8, VAR_11, VAR_12);
   continue;
  }

  VAR_16 = FUNC_6(VAR_8->tag_set.tags[VAR_15], VAR_14);
  if (FUNC_1(!VAR_16, "No request for tag %#x -> %#x\n", VAR_18,
    VAR_14))
   continue;
  VAR_17 = FUNC_5(VAR_16);




  if (VAR_17->id != VAR_13) {
   FUNC_8(&VAR_8->pdev->dev,
    "Completion mismatch comp_id=0x%04x skreq=0x%04x new=0x%04x\n",
    VAR_13, VAR_17->id, VAR_18);

   continue;
  }

  FUNC_0(VAR_17->state == VAR_7);

  VAR_17->completion = *VAR_11;
  if (FUNC_17(VAR_19 == VAR_1)) {
   VAR_17->err_info = *VAR_12;
   FUNC_13(VAR_8, VAR_19, VAR_12->key,
          VAR_12->code, VAR_12->qual,
          VAR_12->fruc);
  }

  if (VAR_17->n_sg > 0)
   FUNC_14(VAR_8, VAR_17);

  FUNC_15(VAR_8, VAR_17);




  if (FUNC_9(VAR_19 == VAR_2)) {
   VAR_17->status = VAR_0;
   FUNC_4(VAR_16);
  } else {
   FUNC_16(VAR_8, VAR_17, VAR_16);
  }


  if (VAR_9) {
   if (++VAR_23 >= VAR_9) {
    VAR_22 = 1;
    break;
   }
  }
 }

 if (VAR_8->state == VAR_4 &&
     FUNC_12(VAR_8) == 0) {
  VAR_8->state = VAR_3;
  FUNC_18(&VAR_8->waitq);
 }

 return VAR_22;
}

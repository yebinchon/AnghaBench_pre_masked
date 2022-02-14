
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int mode; } ;
struct TYPE_6__ {int error_if_no_space; } ;
struct pool_c {TYPE_4__ adjusted_pf; TYPE_2__ requested_pf; } ;
struct TYPE_7__ {int mode; int error_if_no_space; } ;
struct pool {int out_of_data_space; TYPE_3__ pf; void* process_prepared_mapping; void* process_cell; void* process_discard; void* process_bio; int pmd; int no_space_timeout; int wq; int process_prepared_discard; void* process_discard_cell; int pool_md; TYPE_1__* ti; } ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;
struct TYPE_5__ {struct pool_c* private; } ;


 int FUNC_0 (char*,int ) ;
 unsigned long VAR_0 ;





 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pool*) ;
 int FUNC_8 (struct pool*) ;
 int VAR_1 ;
 int FUNC_9 (struct pool*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_10 (int ,int *,unsigned long) ;
 int FUNC_11 (struct pool*) ;

__attribute__((used)) static void FUNC_12(struct pool *VAR_15, enum pool_mode VAR_16)
{
 struct pool_c *VAR_17 = VAR_15->ti->private;
 bool VAR_18 = FUNC_4(VAR_15->pmd);
 enum pool_mode VAR_19 = FUNC_8(VAR_15);
 unsigned long VAR_20 = FUNC_1(VAR_1) * VAR_0;





 if (VAR_16 == 128 && VAR_18) {
  FUNC_0("%s: unable to switch pool to write mode until repaired.",
        FUNC_3(VAR_15->pool_md));
  if (VAR_19 != VAR_16)
   VAR_16 = VAR_19;
  else
   VAR_16 = 129;
 }





 if (VAR_19 == 132)
  VAR_16 = VAR_19;

 switch (VAR_16) {
 case 132:
  FUNC_5(VAR_15->pmd);
  VAR_15->process_bio = VAR_3;
  VAR_15->process_discard = VAR_3;
  VAR_15->process_cell = VAR_7;
  VAR_15->process_discard_cell = VAR_7;
  VAR_15->process_prepared_mapping = VAR_14;
  VAR_15->process_prepared_discard = VAR_11;

  FUNC_7(VAR_15);
  break;

 case 130:
 case 129:
  FUNC_5(VAR_15->pmd);
  VAR_15->process_bio = VAR_4;
  VAR_15->process_discard = VAR_5;
  VAR_15->process_cell = VAR_8;
  VAR_15->process_discard_cell = VAR_9;
  VAR_15->process_prepared_mapping = VAR_14;
  VAR_15->process_prepared_discard = VAR_12;

  FUNC_7(VAR_15);
  break;

 case 131:
  VAR_15->out_of_data_space = 1;
  VAR_15->process_bio = VAR_4;
  VAR_15->process_discard = VAR_10;
  VAR_15->process_cell = VAR_8;
  VAR_15->process_prepared_mapping = VAR_13;
  FUNC_11(VAR_15);

  if (!VAR_15->pf.error_if_no_space && VAR_20)
   FUNC_10(VAR_15->wq, &VAR_15->no_space_timeout, VAR_20);
  break;

 case 128:
  if (VAR_19 == 131)
   FUNC_2(&VAR_15->no_space_timeout);
  VAR_15->out_of_data_space = 0;
  VAR_15->pf.error_if_no_space = VAR_17->requested_pf.error_if_no_space;
  FUNC_6(VAR_15->pmd);
  VAR_15->process_bio = VAR_2;
  VAR_15->process_discard = VAR_10;
  VAR_15->process_cell = VAR_6;
  VAR_15->process_prepared_mapping = VAR_13;
  FUNC_11(VAR_15);
  break;
 }

 VAR_15->pf.mode = VAR_16;




 VAR_17->adjusted_pf.mode = VAR_16;

 if (VAR_19 != VAR_16)
  FUNC_9(VAR_15);
}

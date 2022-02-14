
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int num_lm; } ;
struct dpu_rm_requirements {TYPE_1__ topology; } ;
struct dpu_rm_hw_iter {struct dpu_rm_hw_blk* blk; } ;
struct dpu_rm_hw_blk {int id; void* enc_id; } ;
struct dpu_rm {int dummy; } ;
typedef int pp ;
typedef int lm ;


 int FUNC_0 (struct dpu_rm_hw_blk**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dpu_rm*,void*,struct dpu_rm_requirements*,struct dpu_rm_hw_blk*,struct dpu_rm_hw_blk**,struct dpu_rm_hw_blk*) ;
 scalar_t__ FUNC_4 (struct dpu_rm*,struct dpu_rm_hw_iter*) ;
 int FUNC_5 (struct dpu_rm_hw_iter*,int ,int ) ;
 int FUNC_6 (struct dpu_rm_hw_blk***,int ,int) ;
 int FUNC_7 (int ,void*,int ) ;

__attribute__((used)) static int FUNC_8(struct dpu_rm *VAR_4, uint32_t VAR_5,
          struct dpu_rm_requirements *VAR_6)

{
 struct dpu_rm_hw_blk *VAR_7[VAR_3];
 struct dpu_rm_hw_blk *VAR_8[VAR_3];
 struct dpu_rm_hw_iter VAR_9, VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13 = 0;

 if (!VAR_6->topology.num_lm) {
  FUNC_2("invalid number of lm: %d\n", VAR_6->topology.num_lm);
  return -VAR_1;
 }


 FUNC_5(&VAR_9, 0, VAR_0);
 while (VAR_11 != VAR_6->topology.num_lm &&
   FUNC_4(VAR_4, &VAR_9)) {
  FUNC_6(&VAR_7, 0, sizeof(VAR_7));
  FUNC_6(&VAR_8, 0, sizeof(VAR_8));

  VAR_11 = 0;
  VAR_7[VAR_11] = VAR_9.blk;

  if (!FUNC_3(
    VAR_4, VAR_5, VAR_6, VAR_7[VAR_11],
    &VAR_8[VAR_11], ((void*)0)))
   continue;

  ++VAR_11;


  FUNC_5(&VAR_10, 0, VAR_0);

  while (VAR_11 != VAR_6->topology.num_lm &&
    FUNC_4(VAR_4, &VAR_10)) {
   if (VAR_9.blk == VAR_10.blk)
    continue;

   if (!FUNC_3(
     VAR_4, VAR_5, VAR_6, VAR_10.blk,
     &VAR_8[VAR_11], VAR_9.blk))
    continue;

   VAR_7[VAR_11] = VAR_10.blk;
   ++VAR_11;
  }
 }

 if (VAR_11 != VAR_6->topology.num_lm) {
  FUNC_1("unable to find appropriate mixers\n");
  return -VAR_2;
 }

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_7); VAR_12++) {
  if (!VAR_7[VAR_12])
   break;

  VAR_7[VAR_12]->enc_id = VAR_5;
  VAR_8[VAR_12]->enc_id = VAR_5;

  FUNC_7(VAR_7[VAR_12]->id, VAR_5, VAR_8[VAR_12]->id);
 }

 return VAR_13;
}

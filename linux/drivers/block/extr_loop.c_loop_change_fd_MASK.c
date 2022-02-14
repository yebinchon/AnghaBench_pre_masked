
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {scalar_t__ lo_state; int lo_flags; int old_gfp_mask; int lo_queue; struct file* lo_backing_file; } ;
struct file {int f_mapping; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct file* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct loop_device*,struct file*) ;
 int VAR_8 ;
 int FUNC_5 (struct loop_device*,struct block_device*) ;
 int FUNC_6 (struct loop_device*) ;
 int FUNC_7 (struct file*,struct block_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct loop_device *VAR_9, struct block_device *VAR_10,
     unsigned int VAR_11)
{
 struct file *VAR_12 = ((void*)0), *VAR_13;
 int VAR_14;
 bool VAR_15;

 VAR_14 = FUNC_10(&VAR_8);
 if (VAR_14)
  return VAR_14;
 VAR_14 = -VAR_2;
 if (VAR_9->lo_state != VAR_5)
  goto out_err;


 VAR_14 = -VAR_1;
 if (!(VAR_9->lo_flags & VAR_4))
  goto out_err;

 VAR_14 = -VAR_0;
 VAR_12 = FUNC_2(VAR_11);
 if (!VAR_12)
  goto out_err;

 VAR_14 = FUNC_7(VAR_12, VAR_10);
 if (VAR_14)
  goto out_err;

 VAR_13 = VAR_9->lo_backing_file;

 VAR_14 = -VAR_1;


 if (FUNC_4(VAR_9, VAR_12) != FUNC_4(VAR_9, VAR_13))
  goto out_err;


 FUNC_0(VAR_9->lo_queue);
 FUNC_9(VAR_13->f_mapping, VAR_9->old_gfp_mask);
 VAR_9->lo_backing_file = VAR_12;
 VAR_9->old_gfp_mask = FUNC_8(VAR_12->f_mapping);
 FUNC_9(VAR_12->f_mapping,
        VAR_9->old_gfp_mask & ~(VAR_7|VAR_6));
 FUNC_6(VAR_9);
 FUNC_1(VAR_9->lo_queue);
 VAR_15 = VAR_9->lo_flags & VAR_3;
 FUNC_11(&VAR_8);





 FUNC_3(VAR_13);
 if (VAR_15)
  FUNC_5(VAR_9, VAR_10);
 return 0;

out_err:
 FUNC_11(&VAR_8);
 if (VAR_12)
  FUNC_3(VAR_12);
 return VAR_14;
}

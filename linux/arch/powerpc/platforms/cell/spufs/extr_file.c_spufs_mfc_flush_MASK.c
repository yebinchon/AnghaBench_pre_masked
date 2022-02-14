
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {scalar_t__ tagwait; TYPE_1__* ops; int mfc_wq; } ;
struct file {struct spu_context* private_data; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {int (* set_mfc_query ) (struct spu_context*,scalar_t__,int) ;scalar_t__ (* read_mfc_tagstatus ) (struct spu_context*) ;} ;


 int FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct spu_context*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct spu_context*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, fl_owner_t VAR_1)
{
 struct spu_context *VAR_2 = VAR_0->private_data;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  goto out;
 VAR_3 = 0;

 FUNC_1(VAR_2);
out:
 return VAR_3;
}

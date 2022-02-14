
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_user_info {int spu_userversion; unsigned int spu_port_alg; scalar_t__ spu_subctxt_cnt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int dd; } ;
struct TYPE_3__ {unsigned int nr_cpus_allowed; int cpus_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct file*,int ) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct file*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int,struct file*,struct qib_user_info const*) ;
 int FUNC_6 (unsigned int const,int*) ;
 int FUNC_7 (struct file*,struct qib_user_info const*) ;
 int FUNC_8 (struct file*,struct qib_user_info const*,unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (unsigned int const,int ) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_9, const struct qib_user_info *VAR_10)
{
 int VAR_11;
 int VAR_12;
 unsigned VAR_13, VAR_14, VAR_15 = VAR_2;


 if (FUNC_2(VAR_9)) {
  VAR_11 = -VAR_0;
  goto done;
 }


 VAR_13 = VAR_10->spu_userversion >> 16;
 if (VAR_13 != VAR_5) {
  VAR_11 = -VAR_1;
  goto done;
 }

 VAR_14 = VAR_10->spu_userversion & 0xffff;

 if (VAR_14 >= 11 && VAR_10->spu_port_alg < VAR_3)
  VAR_15 = VAR_10->spu_port_alg;

 FUNC_10(&VAR_8);

 if (FUNC_12(VAR_13, VAR_14) &&
     VAR_10->spu_subctxt_cnt) {
  VAR_11 = FUNC_7(VAR_9, VAR_10);
  if (VAR_11 > 0) {
   VAR_11 = FUNC_3(VAR_9);
   if (!VAR_11)
    FUNC_0(VAR_9, (FUNC_2(VAR_9))->dd);
   goto done_ok;
  }
 }

 VAR_12 = FUNC_9(FUNC_4(VAR_9)) - VAR_4;
 if (VAR_12)
  VAR_11 = FUNC_5(VAR_12 - 1, VAR_9, VAR_10);
 else {
  int VAR_16;
  const unsigned int VAR_17 = FUNC_1(VAR_6->cpus_ptr);
  const unsigned int VAR_18 = VAR_6->nr_cpus_allowed;

  if (VAR_18 == 1 && !FUNC_13(VAR_17, VAR_7))
   if (!FUNC_6(VAR_17, &VAR_16) && VAR_16 >= 0)
    if (!FUNC_5(VAR_16, VAR_9, VAR_10)) {
     VAR_11 = 0;
     goto done_chk_sdma;
    }
  VAR_11 = FUNC_8(VAR_9, VAR_10, VAR_15);
 }

done_chk_sdma:
 if (!VAR_11)
  VAR_11 = FUNC_3(VAR_9);
done_ok:
 FUNC_11(&VAR_8);

done:
 return VAR_11;
}

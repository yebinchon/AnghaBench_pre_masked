
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct unw_frame_info {scalar_t__ sw; } ;
struct kimage {scalar_t__ type; int start; int head; int control_code_page; } ;
typedef int (* relocate_new_kernel_t ) (int ,int ,int ,int ) ;
struct TYPE_5__ {int fp; } ;
typedef TYPE_2__ ia64_fptr_t ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {scalar_t__ ksp; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 TYPE_3__* VAR_8 ;
 void* FUNC_4 () ;
 int VAR_9 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_18(struct unw_frame_info *VAR_11, void *VAR_12)
{
 struct kimage *VAR_13 = VAR_12;
 relocate_new_kernel_t VAR_14;
 void *VAR_15 = FUNC_4();
 unsigned long VAR_16;
 int VAR_17;
 u64 VAR_18, VAR_19;
 ia64_fptr_t *VAR_20 = (ia64_fptr_t *)VAR_10;

 FUNC_1(!VAR_13);
 VAR_16 = (unsigned long)FUNC_16(VAR_13->control_code_page);
 if (VAR_13->type == VAR_1) {
  FUNC_3();
  VAR_8->thread.ksp = (__u64)VAR_11->sw - 16;


  VAR_18 = FUNC_14(VAR_20->fp);
  VAR_19 = FUNC_14(FUNC_7(VAR_7));
  FUNC_8(VAR_2, VAR_18, VAR_19, 0, VAR_18, VAR_19, 0);
 } else {

  FUNC_8(VAR_2, 0, 0, 0, 0, 0, 0);
 }


 FUNC_8(VAR_3, 0, 0, 0, 0, 0, 0);


 FUNC_15();


 FUNC_12(VAR_5, 1 << 16);
 FUNC_12(VAR_4, 1 << 16);


 FUNC_9(1 << 16);
 FUNC_10(1 << 16);
 FUNC_11(1 << 16);


 for (VAR_17 = 0; VAR_17 < 16; VAR_17++)
  FUNC_5();


 FUNC_12(VAR_6, 0);
 FUNC_13();
 while (FUNC_6() != VAR_0)
  FUNC_5();
 VAR_14 = (relocate_new_kernel_t)&VAR_16;
 (*VAR_14)(VAR_13->head, VAR_13->start, VAR_9,
       FUNC_2((unsigned long) VAR_15));
 FUNC_0();
}

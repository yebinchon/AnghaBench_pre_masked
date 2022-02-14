
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {scalar_t__ cpl; } ;
struct vm_task_switch {scalar_t__ reason; struct vm_guest_paging paging; int ext; } ;
struct user_segment_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vmctx*,int,int ) ;
 int FUNC_4 (struct vmctx*,int,struct vm_guest_paging*,int ,struct user_segment_descriptor*,int*) ;
 int FUNC_5 (struct vmctx*,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vmctx *VAR_3, int VAR_4, struct vm_task_switch *VAR_5,
    uint16_t VAR_6, struct user_segment_descriptor *VAR_7, int *VAR_8)
{
 struct vm_guest_paging VAR_9;
 int VAR_10;

 FUNC_2(!FUNC_1(VAR_6));
 FUNC_2(FUNC_0(VAR_6) != 0);


 if (FUNC_3(VAR_3, VAR_4, VAR_6)) {
  if (VAR_5->reason == VAR_2)
   FUNC_5(VAR_3, VAR_4, VAR_1, VAR_6, VAR_5->ext);
  else
   FUNC_5(VAR_3, VAR_4, VAR_0, VAR_6, VAR_5->ext);
  return (1);
 }

 VAR_9 = VAR_5->paging;
 VAR_9.cpl = 0;
 VAR_10 = FUNC_4(VAR_3, VAR_4, &VAR_9, VAR_6, VAR_7, VAR_8);
 return (VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {int dummy; } ;
struct user_segment_descriptor {int dummy; } ;
struct iovec {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iovec*) ;
 int FUNC_5 (struct vmctx*,int,struct vm_guest_paging*,scalar_t__,int,int ,struct iovec*,int ,int*) ;
 int FUNC_6 (struct vmctx*,int,struct iovec*,struct user_segment_descriptor*,int) ;
 int FUNC_7 (struct vmctx*,int,struct user_segment_descriptor*,struct iovec*,int) ;
 int FUNC_8 (struct vmctx*,int,int,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(struct vmctx *VAR_4, int VAR_5, struct vm_guest_paging *VAR_6,
    uint16_t VAR_7, struct user_segment_descriptor *VAR_8, bool VAR_9,
    int *VAR_10)
{
 struct iovec VAR_11[2];
 uint64_t VAR_12;
 uint32_t VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = FUNC_0(VAR_7) ? VAR_3 : VAR_2;
 VAR_15 = FUNC_8(VAR_4, VAR_5, VAR_16, &VAR_12, &VAR_13, &VAR_14);
 FUNC_3(VAR_15 == 0);
 FUNC_3(VAR_13 >= FUNC_1(VAR_7));

 VAR_15 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_12 + FUNC_2(VAR_7),
     sizeof(*VAR_8), VAR_9 ? VAR_0 : VAR_1, VAR_11, FUNC_4(VAR_11),
     VAR_10);
 if (VAR_15 || *VAR_10)
  return (VAR_15);

 if (VAR_9)
  FUNC_6(VAR_4, VAR_5, VAR_11, VAR_8, sizeof(*VAR_8));
 else
  FUNC_7(VAR_4, VAR_5, VAR_8, VAR_11, sizeof(*VAR_8));
 return (0);
}

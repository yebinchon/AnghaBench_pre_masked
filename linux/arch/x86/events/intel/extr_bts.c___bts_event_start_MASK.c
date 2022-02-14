
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int exclude_user; int exclude_kernel; } ;
struct perf_event {TYPE_1__ attr; } ;
struct bts_ctx {int state; int handle; } ;
struct bts_buffer {int snapshot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bts_buffer*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct bts_buffer* FUNC_3 (int *) ;
 struct bts_ctx* FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_5)
{
 struct bts_ctx *VAR_6 = FUNC_4(&VAR_4);
 struct bts_buffer *VAR_7 = FUNC_3(&VAR_6->handle);
 u64 VAR_8 = 0;

 if (!VAR_7->snapshot)
  VAR_8 |= VAR_0;
 if (!VAR_5->attr.exclude_kernel)
  VAR_8 |= VAR_1;
 if (!VAR_5->attr.exclude_user)
  VAR_8 |= VAR_2;

 FUNC_1(VAR_7);





 FUNC_5();


 FUNC_0(VAR_6->state, VAR_3);

 FUNC_2(VAR_8);

}

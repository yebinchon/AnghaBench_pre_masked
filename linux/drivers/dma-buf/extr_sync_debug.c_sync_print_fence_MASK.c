
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct sync_timeline {char* name; } ;
struct seq_file {int dummy; } ;
struct dma_fence {TYPE_1__* ops; int timestamp; int flags; } ;
typedef int s64 ;
struct TYPE_2__ {int (* timeline_value_str ) (struct dma_fence*,char*,int) ;int (* fence_value_str ) (struct dma_fence*,char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 struct sync_timeline* FUNC_1 (struct dma_fence*) ;
 struct timespec64 FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,char*,...) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct dma_fence*,char*,int) ;
 int FUNC_7 (struct dma_fence*,char*,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct seq_file *VAR_1,
        struct dma_fence *VAR_2, bool VAR_3)
{
 struct sync_timeline *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);

 FUNC_3(VAR_1, "  %s%sfence %s",
     VAR_3 ? VAR_4->name : "",
     VAR_3 ? "_" : "",
     FUNC_8(VAR_5));

 if (FUNC_9(VAR_0, &VAR_2->flags)) {
  struct timespec64 VAR_6 =
   FUNC_2(VAR_2->timestamp);

  FUNC_3(VAR_1, "@%lld.%09ld", (s64)VAR_6, VAR_6);
 }

 if (VAR_2->ops->timeline_value_str &&
  VAR_2->ops->fence_value_str) {
  char VAR_7[64];
  bool VAR_8;

  VAR_2->ops->fence_value_str(VAR_2, VAR_7, sizeof(VAR_7));
  VAR_8 = FUNC_5(VAR_7);

  if (VAR_8) {
   FUNC_3(VAR_1, ": %s", VAR_7);

   VAR_2->ops->timeline_value_str(VAR_2, VAR_7,
             sizeof(VAR_7));

   if (FUNC_5(VAR_7))
    FUNC_3(VAR_1, " / %s", VAR_7);
  }
 }

 FUNC_4(VAR_1, '\n');
}

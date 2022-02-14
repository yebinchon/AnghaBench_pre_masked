
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrun_entry {scalar_t__ index; void* status; } ;
struct kld_file_stat {int version; } ;
struct kinfo_proc {int dummy; } ;
typedef int stat ;
typedef void* int32_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (struct kinfo_proc*,struct swrun_entry*) ;
 int FUNC_3 (struct kld_file_stat*,struct swrun_entry*) ;
 int FUNC_4 (scalar_t__,struct kld_file_stat*) ;
 struct kinfo_proc* FUNC_5 (int *,int ,scalar_t__,int*) ;

__attribute__((used)) static void
FUNC_6(struct swrun_entry *VAR_4)
{
 struct kinfo_proc *VAR_5;
 int VAR_6;
 struct kld_file_stat VAR_7;

 FUNC_1(VAR_4 != ((void*)0));

 if (VAR_4->index >= VAR_1 + 1) {






  VAR_7.version = sizeof(VAR_7);
  if (FUNC_4(VAR_4->index - VAR_1 - 1, &VAR_7) == -1) {




    FUNC_0("missing item with kid=%d",
        VAR_4->index - VAR_1 - 1);
   VAR_4->status = (int32_t)VAR_2;
  } else
   FUNC_3(&VAR_7, VAR_4);

 } else {

  FUNC_1(VAR_3 != ((void*)0));
  VAR_5 = FUNC_5(VAR_3, VAR_0,
      VAR_4->index - 1, &VAR_6);
  if (VAR_5 == ((void*)0) || VAR_6 != 1) {
   FUNC_0("missing item with PID=%d", VAR_4->index - 1);
   VAR_4->status = (int32_t)VAR_2;
  } else
   FUNC_2(VAR_5, VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrun_entry {scalar_t__ index; void* status; } ;
struct kld_file_stat {int version; int refs; int name; int id; } ;
struct kinfo_proc {int dummy; } ;
typedef int stat ;
typedef void* int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kinfo_proc*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,struct kld_file_stat*) ;
 int FUNC_5 (int ) ;
 struct kinfo_proc* FUNC_6 (int *,int ,scalar_t__,int*) ;
 int FUNC_7 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int
FUNC_8(struct swrun_entry *VAR_14, int VAR_15)
{
 struct kinfo_proc *VAR_16;
 int VAR_17;
 struct kld_file_stat VAR_18;

 FUNC_2(VAR_14 != ((void*)0));

 if (VAR_14->index >= VAR_4 + 1) {

  FUNC_0("atempt to unload KLD %d",
      VAR_14->index - VAR_4 - 1);

  if (VAR_14->index == VAR_11) {

   return (VAR_8);
  }

  VAR_18.version = sizeof(VAR_18);
  if (FUNC_4(VAR_14->index - VAR_4 - 1, &VAR_18) == -1) {





   FUNC_0("missing item with kid=%d",
       VAR_14->index - VAR_4 - 1);
   VAR_14->status = (int32_t)VAR_10;
   return (VAR_7);
  }






  if (!VAR_15) {
   if (VAR_18.refs > 1)
    return (VAR_8);
   return (VAR_7);
  }
  if (FUNC_5(VAR_18.id) == -1) {
   FUNC_7(VAR_3,"kldunload for %d/%s failed: %m",
       VAR_18.id, VAR_18.name);
   if (VAR_12 == VAR_0)
    return (VAR_8);
   else
    return (VAR_9);
  }
 } else {

  FUNC_2(VAR_13 != ((void*)0));

  VAR_16 = FUNC_6(VAR_13, VAR_2,
      VAR_14->index - 1, &VAR_17);
  if (VAR_16 == ((void*)0) || VAR_17 != 1) {
   FUNC_0("missing item with PID=%d", VAR_14->index - 1);
   VAR_14->status = (int32_t)VAR_10;
   return (VAR_7);
  }
  if (FUNC_1(VAR_16)) {

   return (VAR_8);
  }
  if (FUNC_3(VAR_14->index - 1, VAR_15 ? VAR_5 : 0) < 0) {
   FUNC_7(VAR_3,"kill (%d, SIGKILL) failed: %m",
       VAR_14->index - 1);
   if (VAR_12 == VAR_1) {

    VAR_14->status = (int32_t)VAR_10;
    return (VAR_7);
   }
   return (VAR_6);
  }
 }
 return (VAR_7);
}

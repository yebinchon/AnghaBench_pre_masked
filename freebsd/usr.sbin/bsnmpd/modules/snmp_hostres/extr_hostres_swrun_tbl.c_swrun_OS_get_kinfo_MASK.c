
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrun_entry {int flags; } ;
struct kld_file_stat {int version; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kld_file_stat*,struct swrun_entry*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct kld_file_stat*) ;
 struct swrun_entry* FUNC_3 (scalar_t__) ;
 struct swrun_entry* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_3;
 struct swrun_entry *VAR_4;
 struct kld_file_stat VAR_5;

 for (VAR_3 = FUNC_1(0); VAR_3 > 0; VAR_3 = FUNC_1(VAR_3)) {
  VAR_5.version = sizeof(struct kld_file_stat);
  if (FUNC_2(VAR_3, &VAR_5) < 0) {
   FUNC_5(VAR_1, "kldstat() failed: %m");
   continue;
  }






  VAR_4 = FUNC_4(VAR_2 + 1 + VAR_5.id);
  if (VAR_4 == ((void*)0)) {

   VAR_4 = FUNC_3(VAR_2 + 1 + VAR_5.id);
   if (VAR_4 == ((void*)0))
    continue;
  }
  VAR_4->flags |= VAR_0;

  FUNC_0(&VAR_5, VAR_4);
 }
}

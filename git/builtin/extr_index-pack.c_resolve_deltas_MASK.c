
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_entry {int type; } ;
struct TYPE_3__ {int thread; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct object_entry* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int *) ;
 int VAR_11 ;
 int FUNC_10 (struct object_entry*) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int) ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_13(void)
{
 int VAR_16;

 if (!VAR_4 && !VAR_5)
  return;


 FUNC_0(VAR_9, VAR_4, VAR_0);
 FUNC_0(VAR_11, VAR_5, VAR_1);

 if (VAR_15 || VAR_12)
  VAR_10 = FUNC_11(FUNC_1("Resolving deltas"),
       VAR_5 + VAR_4);

 VAR_2 = 0;
 if (VAR_7 > 1 || FUNC_5("GIT_FORCE_THREADS")) {
  FUNC_6();
  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
   int VAR_17 = FUNC_8(&VAR_13[VAR_16].thread, ((void*)0),
       VAR_14, VAR_13 + VAR_16);
   if (VAR_17)
    FUNC_3(FUNC_1("unable to create thread: %s"),
        FUNC_12(VAR_17));
  }
  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
   FUNC_9(VAR_13[VAR_16].thread, ((void*)0));
  FUNC_2();
  return;
 }

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  struct object_entry *VAR_18 = &VAR_8[VAR_16];

  if (FUNC_7(VAR_18->type))
   continue;
  FUNC_10(VAR_18);
  FUNC_4(VAR_10, VAR_6);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int optval ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int *,int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int VAR_10 ;
 void* FUNC_4 (int,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_11 ;
 int FUNC_8 (int,int ,int ,int*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int * VAR_15 ;

__attribute__((used)) static void
FUNC_11(int VAR_16, enum ev_type VAR_17, void *VAR_18)
{
 int VAR_19, VAR_20;

 VAR_20 = FUNC_0(VAR_16, ((void*)0), ((void*)0), VAR_2);
 if (VAR_20 == -1) {
  if (VAR_18 != ((void*)0))
   FUNC_2(1, "Failed accepting initial GDB connection");


  return;
 }

 VAR_19 = 1;
 if (FUNC_8(VAR_20, VAR_3, VAR_4, &VAR_19, sizeof(VAR_19)) ==
     -1) {
  FUNC_9("Failed to disable SIGPIPE for GDB connection");
  FUNC_1(VAR_20);
  return;
 }

 FUNC_6(&VAR_8);
 if (VAR_5 != -1) {
  FUNC_1(VAR_20);
  FUNC_10("Ignoring additional GDB connection.");
 }

 VAR_11 = FUNC_4(VAR_20, VAR_0, VAR_9, ((void*)0));
 if (VAR_11 == ((void*)0)) {
  if (VAR_18 != ((void*)0))
   FUNC_2(1, "Failed to setup initial GDB connection");
  FUNC_7(&VAR_8);
  return;
 }
 VAR_15 = FUNC_4(VAR_20, VAR_1, VAR_10, ((void*)0));
 if (VAR_15 == ((void*)0)) {
  if (VAR_18 != ((void*)0))
   FUNC_2(1, "Failed to setup initial GDB connection");
  FUNC_5(VAR_11);
  VAR_11 = ((void*)0);
 }

 VAR_5 = VAR_20;
 VAR_6 = 0;
 VAR_12 = -1;
 VAR_14 = -1;
 VAR_13 = 0;


 VAR_7 = 1;
 FUNC_3();
 FUNC_7(&VAR_8);
}

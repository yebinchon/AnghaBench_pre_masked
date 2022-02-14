
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,int *,int ,char) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_9(int VAR_12)
{
 time_t VAR_13;

 if (VAR_11)
  (void)FUNC_7(VAR_0, VAR_1, &VAR_10);
 VAR_13 = FUNC_8(((void*)0));
 if (VAR_8)
  FUNC_6(VAR_5, ((void*)0), 0, 'e');
 if (!VAR_7) {
  if (!VAR_8) {
   if (VAR_9)
    (void)FUNC_4(VAR_5, "\nCommand exit status:"
        " %d", VAR_12);
   (void)FUNC_4(VAR_5,"\nScript done on %s",
       FUNC_1(&VAR_13));
  }
  (void)FUNC_5("\nScript done, output file is %s\n", VAR_4);
  if (VAR_2) {
   (void)FUNC_5("Filemon done, output file is %s\n",
       VAR_3);
  }
 }
 (void)FUNC_3(VAR_5);
 (void)FUNC_0(VAR_6);
 FUNC_2(VAR_12);
}

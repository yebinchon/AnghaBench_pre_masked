
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_10(void)
{
 int VAR_9;

 VAR_7 = FUNC_5();
 if (!VAR_7) {
  FUNC_9("Unable to allocation socket.\n");
  return -1;
 }
 FUNC_0(VAR_7);

 VAR_8 = FUNC_5();
 if (!VAR_8) {
  FUNC_3(VAR_7);
  FUNC_7(VAR_7);
  FUNC_9("Unable to allocation socket.\n");
  return -1;
 }
 FUNC_0(VAR_8);

 VAR_4 = FUNC_1(VAR_7, VAR_1);
 if (VAR_4 < 0) {
  FUNC_3(VAR_8);
  FUNC_3(VAR_7);
  FUNC_7(VAR_7);
  FUNC_7(VAR_8);
  FUNC_9("Unable to resolve family\n");
  return -1;
 }

 VAR_5 = FUNC_2(VAR_7, VAR_1,
           VAR_0);
 if (VAR_5 < 0) {
  FUNC_9("Unable to resolve mcast group\n");
  return -1;
 }

 VAR_9 = FUNC_4(VAR_8, VAR_5);
 if (VAR_9 < 0) {
  FUNC_9("Unable to add membership\n");
  return -1;
 }

 FUNC_6(VAR_8);
 FUNC_8(VAR_8, VAR_3, VAR_2, VAR_6, ((void*)0));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int loader_block ;
typedef int amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(amb_dev *VAR_7)
{
  loader_block VAR_8;

  u32 VAR_9;

  if (FUNC_1 (VAR_7, 1)) {
    FUNC_0 (VAR_1, "card reset failed!");
  } else {
    FUNC_6 (VAR_7, &VAR_8);

    if (FUNC_7 (&VAR_8, VAR_7, &VAR_9)) {
      FUNC_0 (VAR_2, "failed to get loader version");
    } else {
      FUNC_0 (VAR_2, "loader version is %08x", VAR_9);

      if (FUNC_8 (&VAR_8, VAR_7)) {
 FUNC_0 (VAR_1, "microcode failure");
      } else if (FUNC_4 (VAR_7, VAR_3, VAR_6, VAR_4, VAR_5)) {
 FUNC_0 (VAR_1, "failed to get memory for queues");
      } else {

 if (FUNC_2 (VAR_7)) {
   FUNC_0 (VAR_1, "adapter did not accept queues");
 } else {

   FUNC_3 (VAR_7);
   return 0;

 }

 FUNC_5 (VAR_7);
      }

      FUNC_1 (VAR_7, 0);
    }

  }

  return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;
struct vmctx {int dummy; } ;
typedef int on ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,int *,int ) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct vmctx *VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15,
     uint32_t *VAR_16, void *VAR_17)
{
 int VAR_18, VAR_19, VAR_20;
 int VAR_21 = 1;
 char VAR_22;

 if (VAR_15 == 2 && VAR_13) {
  *VAR_16 = VAR_0;
  return (0);
 }

 if (VAR_15 != 4)
  return (-1);

again:
 VAR_20 = 0;
 while (VAR_8 < 0) {
  if (!VAR_20) {
   FUNC_3("Waiting for connection from gdb\r\n");
   VAR_20 = 1;
  }
  VAR_8 = FUNC_0(VAR_10, ((void*)0), ((void*)0), VAR_4);
  if (VAR_8 >= 0) {

   (void)FUNC_5(VAR_8, VAR_5, VAR_6,
       &VAR_21, sizeof(VAR_21));

   (void)FUNC_5(VAR_8, VAR_3, VAR_7,
       &VAR_21, sizeof(VAR_21));
  } else if (VAR_9 != VAR_2) {
   FUNC_2("accept");
  }
 }

 if (VAR_13) {
  VAR_19 = FUNC_4(VAR_8, &VAR_22, 1);
  if (VAR_19 == -1 && VAR_9 == VAR_1)
   *VAR_16 = -1;
  else if (VAR_19 == 1)
   *VAR_16 = VAR_22;
  else {
   FUNC_1(VAR_8);
   VAR_8 = -1;
   goto again;
  }
 } else {
  VAR_22 = *VAR_16;
  VAR_18 = FUNC_6(VAR_8, &VAR_22, 1);
  if (VAR_18 != 1) {
   FUNC_1(VAR_8);
   VAR_8 = -1;
   goto again;
  }
 }
 return (0);
}

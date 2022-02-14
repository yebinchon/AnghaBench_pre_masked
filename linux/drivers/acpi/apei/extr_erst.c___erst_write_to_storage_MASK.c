
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct apei_exec_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct apei_exec_context*) ;
 int FUNC_1 (struct apei_exec_context*,scalar_t__) ;
 int FUNC_2 (struct apei_exec_context*,int ) ;
 int FUNC_3 (struct apei_exec_context*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct apei_exec_context*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_7(u64 VAR_9)
{
 struct apei_exec_context VAR_10;
 u64 VAR_11 = VAR_7;
 u64 VAR_12;
 int VAR_13;

 FUNC_5(&VAR_10);
 VAR_13 = FUNC_3(&VAR_10, VAR_0);
 if (VAR_13)
  return VAR_13;
 FUNC_1(&VAR_10, VAR_9);
 VAR_13 = FUNC_2(&VAR_10, VAR_5);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_2(&VAR_10, VAR_3);
 if (VAR_13)
  return VAR_13;
 for (;;) {
  VAR_13 = FUNC_2(&VAR_10, VAR_1);
  if (VAR_13)
   return VAR_13;
  VAR_12 = FUNC_0(&VAR_10);
  if (!VAR_12)
   break;
  if (FUNC_6(&VAR_11, VAR_8))
   return -VAR_6;
 }
 VAR_13 = FUNC_2(&VAR_10, VAR_4);
 if (VAR_13)
  return VAR_13;
 VAR_12 = FUNC_0(&VAR_10);
 VAR_13 = FUNC_3(&VAR_10, VAR_2);
 if (VAR_13)
  return VAR_13;

 return FUNC_4(VAR_12);
}

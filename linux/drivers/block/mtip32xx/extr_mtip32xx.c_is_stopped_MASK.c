
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct driver_data {int dd_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int ,int*) ;

__attribute__((used)) static inline bool FUNC_3(struct driver_data *VAR_6, struct request *VAR_7)
{
 if (FUNC_0(!(VAR_6->dd_flag & VAR_4)))
  return 0;

 if (FUNC_2(VAR_2, &VAR_6->dd_flag))
  return 1;
 if (FUNC_2(VAR_0, &VAR_6->dd_flag))
  return 1;
 if (FUNC_2(VAR_5, &VAR_6->dd_flag) &&
     FUNC_1(VAR_7))
  return 1;
 if (FUNC_2(VAR_3, &VAR_6->dd_flag))
  return 1;
 if (FUNC_2(VAR_1, &VAR_6->dd_flag))
  return 1;

 return 0;
}

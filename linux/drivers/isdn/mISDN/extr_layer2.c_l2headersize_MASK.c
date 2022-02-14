
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct layer2 {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

inline u_int
FUNC_1(struct layer2 *VAR_2, int VAR_3)
{
 return ((FUNC_0(VAR_1, &VAR_2->flag) && (!VAR_3)) ? 2 : 1) +
  (FUNC_0(VAR_0, &VAR_2->flag) ? 2 : 1);
}

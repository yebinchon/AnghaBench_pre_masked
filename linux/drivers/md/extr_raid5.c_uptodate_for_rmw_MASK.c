
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_1(struct r5dev *VAR_3)
{
 return (FUNC_0(VAR_2, &VAR_3->flags)) &&
  (!FUNC_0(VAR_0, &VAR_3->flags) ||
   FUNC_0(VAR_1, &VAR_3->flags));
}

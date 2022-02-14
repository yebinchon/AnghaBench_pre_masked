
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {int vs; int va; unsigned int window; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

inline unsigned int
FUNC_1(struct layer2 *VAR_2)
{
 unsigned int VAR_3;

 if (FUNC_0(VAR_0, &VAR_2->flag))
  VAR_3 = (VAR_2->vs - VAR_2->va) % 128;
 else
  VAR_3 = (VAR_2->vs - VAR_2->va) % 8;
 return (VAR_3 < VAR_2->window) && !FUNC_0(VAR_1, &VAR_2->flag);
}

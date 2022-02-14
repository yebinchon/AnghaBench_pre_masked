
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hfi1_devdata {scalar_t__ sc2vl; int sc2vl_lock; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static inline u8 FUNC_2(struct hfi1_devdata *VAR_1, u8 VAR_2)
{
 unsigned VAR_3;
 u8 VAR_4;

 if (VAR_2 >= VAR_0)
  return (u8)(0xff);

 do {
  VAR_3 = FUNC_0(&VAR_1->sc2vl_lock);
  VAR_4 = *(((u8 *)VAR_1->sc2vl) + VAR_2);
 } while (FUNC_1(&VAR_1->sc2vl_lock, VAR_3));

 return VAR_4;
}

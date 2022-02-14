
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct xadc {int mutex; } ;


 int FUNC_0 (struct xadc*,unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct xadc *VAR_0, unsigned int VAR_1,
 uint16_t *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mutex);
 return VAR_3;
}

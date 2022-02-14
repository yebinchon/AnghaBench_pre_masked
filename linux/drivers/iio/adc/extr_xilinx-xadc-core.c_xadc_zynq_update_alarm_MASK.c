
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct xadc {int lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct xadc*,int ,unsigned int*) ;
 int FUNC_3 (struct xadc*,int ,unsigned int) ;
 int FUNC_4 (struct xadc*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct xadc *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 uint32_t VAR_5;


 VAR_3 = ((VAR_3 & 0x08) << 4) | ((VAR_3 & 0xf0) >> 1) | (VAR_3 & 0x07);

 FUNC_0(&VAR_2->lock, VAR_4);


 FUNC_2(VAR_2, VAR_1, &VAR_5);
 FUNC_3(VAR_2, VAR_1, VAR_5 & VAR_3);

 FUNC_4(VAR_2, VAR_0,
  ~VAR_3 & VAR_0);

 FUNC_1(&VAR_2->lock, VAR_4);
}

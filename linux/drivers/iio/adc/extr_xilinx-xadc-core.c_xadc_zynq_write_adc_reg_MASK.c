
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct xadc {int completion; int lock; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct xadc*,int ,int*) ;
 int FUNC_7 (struct xadc*,int ,int) ;
 int FUNC_8 (struct xadc*,int ,int ) ;
 int FUNC_9 (struct xadc*,int*,int ) ;

__attribute__((used)) static int FUNC_10(struct xadc *VAR_8, unsigned int VAR_9,
 uint16_t VAR_10)
{
 uint32_t VAR_11[1];
 uint32_t VAR_12;
 int VAR_13;

 FUNC_3(&VAR_8->lock);
 FUNC_8(VAR_8, VAR_5,
   VAR_5);

 FUNC_2(&VAR_8->completion);

 VAR_11[0] = FUNC_1(VAR_4, VAR_9, VAR_10);
 FUNC_9(VAR_8, VAR_11, FUNC_0(VAR_11));
 FUNC_6(VAR_8, VAR_6, &VAR_12);
 VAR_12 &= ~VAR_2;
 VAR_12 |= 0 << VAR_3;
 FUNC_7(VAR_8, VAR_6, VAR_12);

 FUNC_8(VAR_8, VAR_5, 0);
 FUNC_4(&VAR_8->lock);

 VAR_13 = FUNC_5(&VAR_8->completion, VAR_1);
 if (VAR_13 == 0)
  VAR_13 = -VAR_0;
 else
  VAR_13 = 0;

 FUNC_6(VAR_8, VAR_7, &VAR_12);

 return VAR_13;
}

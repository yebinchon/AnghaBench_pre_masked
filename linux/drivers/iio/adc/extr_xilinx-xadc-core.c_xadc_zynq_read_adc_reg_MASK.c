
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
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct xadc*,int ,int*) ;
 int FUNC_7 (struct xadc*,int ,int) ;
 int FUNC_8 (struct xadc*) ;
 int FUNC_9 (struct xadc*,int ,int ) ;
 int FUNC_10 (struct xadc*,int*,int ) ;

__attribute__((used)) static int FUNC_11(struct xadc *VAR_9, unsigned int VAR_10,
 uint16_t *VAR_11)
{
 uint32_t VAR_12[2];
 uint32_t VAR_13, VAR_14;
 int VAR_15;

 VAR_12[0] = FUNC_1(VAR_5, VAR_10, 0);
 VAR_12[1] = FUNC_1(VAR_4, 0, 0);

 FUNC_3(&VAR_9->lock);
 FUNC_9(VAR_9, VAR_6,
   VAR_6);
 FUNC_8(VAR_9);
 FUNC_2(&VAR_9->completion);

 FUNC_10(VAR_9, VAR_12, FUNC_0(VAR_12));
 FUNC_6(VAR_9, VAR_7, &VAR_14);
 VAR_14 &= ~VAR_2;
 VAR_14 |= 1 << VAR_3;
 FUNC_7(VAR_9, VAR_7, VAR_14);

 FUNC_9(VAR_9, VAR_6, 0);
 FUNC_4(&VAR_9->lock);
 VAR_15 = FUNC_5(&VAR_9->completion, VAR_1);
 if (VAR_15 == 0)
  VAR_15 = -VAR_0;
 if (VAR_15 < 0)
  return VAR_15;

 FUNC_6(VAR_9, VAR_8, &VAR_13);
 FUNC_6(VAR_9, VAR_8, &VAR_13);

 *VAR_11 = VAR_13 & 0xffff;

 return 0;
}

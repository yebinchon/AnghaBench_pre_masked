
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_0 (struct ocrdma_dev*,int*,int *) ;

__attribute__((used)) static inline void FUNC_1(struct ocrdma_dev *VAR_6,
         u8 *VAR_7, u8 *VAR_8)
{
 int VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_0(VAR_6, &VAR_10, ((void*)0));
 if (VAR_9)
  VAR_10 = VAR_5;

 switch (VAR_10) {
 case 130:
  *VAR_7 = VAR_2;
  *VAR_8 = VAR_3;
  break;

 case 131:
  *VAR_7 = VAR_1;
  *VAR_8 = VAR_3;
  break;

 case 129:
  *VAR_7 = VAR_0;
  *VAR_8 = VAR_4;
  break;

 case 128:
  *VAR_7 = VAR_1;
  *VAR_8 = VAR_4;
  break;

 default:

  *VAR_7 = VAR_2;
  *VAR_8 = VAR_3;
 }
}

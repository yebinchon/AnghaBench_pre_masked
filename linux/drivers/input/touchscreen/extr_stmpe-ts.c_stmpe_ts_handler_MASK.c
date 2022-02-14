
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_touch {int work; int stmpe; int idev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int,int*) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 u8 VAR_10[4];
 int VAR_11, VAR_12, VAR_13;
 struct stmpe_touch *VAR_14 = VAR_9;





 FUNC_1(&VAR_14->work);







 FUNC_8(VAR_14->stmpe, VAR_5,
    VAR_7, 0);

 FUNC_7(VAR_14->stmpe, VAR_6, 4, VAR_10);

 VAR_11 = (VAR_10[0] << 4) | (VAR_10[1] >> 4);
 VAR_12 = ((VAR_10[1] & 0xf) << 8) | VAR_10[2];
 VAR_13 = VAR_10[3];

 FUNC_2(VAR_14->idev, VAR_1, VAR_11);
 FUNC_2(VAR_14->idev, VAR_2, VAR_12);
 FUNC_2(VAR_14->idev, VAR_0, VAR_13);
 FUNC_3(VAR_14->idev, VAR_3, 1);
 FUNC_4(VAR_14->idev);


 FUNC_0(VAR_14->stmpe);


 FUNC_8(VAR_14->stmpe, VAR_5,
   VAR_7, VAR_7);


 FUNC_6(&VAR_14->work, FUNC_5(50));

 return VAR_4;
}

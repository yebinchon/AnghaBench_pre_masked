
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidma_lldev {int lock; scalar_t__ evca; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hidma_lldev*,int,int ) ;
 int FUNC_2 (struct hidma_lldev*) ;
 int FUNC_3 (struct hidma_lldev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct hidma_lldev *VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4 & VAR_0) {
  FUNC_0(VAR_3->dev, "error 0x%x, disabling...\n",
    VAR_4);


  FUNC_6(VAR_4, VAR_3->evca + VAR_1);


  FUNC_3(VAR_3);


  FUNC_1(VAR_3, 0xFF,
       VAR_2);

  return;
 }

 FUNC_4(&VAR_3->lock, VAR_5);
 FUNC_7(VAR_4, VAR_3->evca + VAR_1);
 FUNC_5(&VAR_3->lock, VAR_5);
 FUNC_2(VAR_3);
}

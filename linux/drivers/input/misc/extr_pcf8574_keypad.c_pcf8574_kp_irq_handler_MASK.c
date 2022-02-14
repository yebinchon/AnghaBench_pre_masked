
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kp_data {unsigned char laststate; unsigned short* btncode; int idev; } ;
typedef int irqreturn_t ;


 unsigned char FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned short,int) ;
 int FUNC_2 (int ) ;
 unsigned char FUNC_3 (struct kp_data*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct kp_data *VAR_3 = VAR_2;
 unsigned char VAR_4 = FUNC_3(VAR_3);

 if (VAR_3->laststate != VAR_4) {
  int VAR_5 = VAR_4 < FUNC_0(VAR_3->btncode);
  unsigned short VAR_6 = VAR_5 ?
   VAR_3->btncode[VAR_4] : VAR_3->btncode[VAR_3->laststate];

  FUNC_1(VAR_3->idev, VAR_6, VAR_5);
  FUNC_2(VAR_3->idev);

  VAR_3->laststate = VAR_4;
 }

 return VAR_0;
}

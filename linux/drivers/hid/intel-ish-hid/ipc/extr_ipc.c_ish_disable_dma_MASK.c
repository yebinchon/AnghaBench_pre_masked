
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct ishtp_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ishtp_device*,int ,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct ishtp_device *VAR_4)
{
 unsigned int VAR_5;


 FUNC_2(VAR_4, VAR_2, 0);


 for (VAR_5 = 0; VAR_5 < VAR_3 &&
  FUNC_0(VAR_4) & (VAR_1);
  VAR_5 += 5)
  FUNC_3(5);

 if (VAR_5 >= VAR_3) {
  FUNC_1(VAR_4->devc,
   "Wait for DMA inactive timeout\n");
  return -VAR_0;
 }

 return 0;
}

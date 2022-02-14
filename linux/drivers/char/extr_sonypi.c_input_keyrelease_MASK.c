
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sonypi_keypress {int dev; int key; } ;
typedef int kp ;
struct TYPE_2__ {int input_fifo_lock; int input_fifo; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char*,int,int *) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_1)
{
 struct sonypi_keypress VAR_2;

 while (FUNC_2(&VAR_0.input_fifo, (unsigned char *)&VAR_2,
    sizeof(VAR_2), &VAR_0.input_fifo_lock)
   == sizeof(VAR_2)) {
  FUNC_3(10);
  FUNC_0(VAR_2.dev, VAR_2.key, 0);
  FUNC_1(VAR_2.dev);
 }
}

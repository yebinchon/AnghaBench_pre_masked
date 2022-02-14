
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {int poll_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct input_polled_dev *VAR_5)
{
 FUNC_0(0);


 if (FUNC_1(VAR_3, VAR_4 + 2 * VAR_0))
  VAR_5->poll_interval = VAR_1;
 else
  VAR_5->poll_interval = VAR_2;
}

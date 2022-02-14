
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long VAR_2 ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static loff_t FUNC_4(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 loff_t VAR_6;

 FUNC_2(FUNC_0(VAR_3));
 switch (VAR_5) {
 case 129:
  VAR_4 += VAR_3->f_pos;

 case 128:

  if ((unsigned long long)VAR_4 >= -VAR_2) {
   VAR_6 = -VAR_1;
   break;
  }
  VAR_3->f_pos = VAR_4;
  VAR_6 = VAR_3->f_pos;
  FUNC_1();
  break;
 default:
  VAR_6 = -VAR_0;
 }
 FUNC_3(FUNC_0(VAR_3));
 return VAR_6;
}

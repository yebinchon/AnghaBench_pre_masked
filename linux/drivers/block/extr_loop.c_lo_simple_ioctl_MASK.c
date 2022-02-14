
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int (* ioctl ) (struct loop_device*,unsigned int,unsigned long) ;} ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct loop_device*,unsigned long) ;
 int FUNC_1 (struct loop_device*) ;
 int FUNC_2 (struct loop_device*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct loop_device*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct loop_device *VAR_2, unsigned int VAR_3,
      unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_1);
 if (VAR_5)
  return VAR_5;
 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_1(VAR_2);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_2, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_2, VAR_4);
  break;
 default:
  VAR_5 = VAR_2->ioctl ? VAR_2->ioctl(VAR_2, VAR_3, VAR_4) : -VAR_0;
 }
 FUNC_4(&VAR_1);
 return VAR_5;
}

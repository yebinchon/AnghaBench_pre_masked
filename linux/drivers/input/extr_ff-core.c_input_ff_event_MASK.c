
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int ffbit; struct ff_device* ff; } ;
struct ff_device {int (* playback ) (struct input_dev*,unsigned int,int) ;int (* set_autocenter ) (struct input_dev*,int) ;int (* set_gain ) (struct input_dev*,int) ;} ;


 unsigned int VAR_0 ;


 int FUNC_0 (struct ff_device*,unsigned int,int *) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,unsigned int,int) ;
 int FUNC_4 (int const,int ) ;

int FUNC_5(struct input_dev *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct ff_device *VAR_5 = VAR_1->ff;

 if (VAR_2 != VAR_0)
  return 0;

 switch (VAR_3) {
 case 128:
  if (!FUNC_4(128, VAR_1->ffbit) || VAR_4 > 0xffffU)
   break;

  VAR_5->set_gain(VAR_1, VAR_4);
  break;

 case 129:
  if (!FUNC_4(129, VAR_1->ffbit) || VAR_4 > 0xffffU)
   break;

  VAR_5->set_autocenter(VAR_1, VAR_4);
  break;

 default:
  if (FUNC_0(VAR_5, VAR_3, ((void*)0)) == 0)
   VAR_5->playback(VAR_1, VAR_3, VAR_4);
  break;
 }

 return 0;
}

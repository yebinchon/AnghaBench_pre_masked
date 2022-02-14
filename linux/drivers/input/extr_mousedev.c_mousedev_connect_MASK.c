
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev {int dummy; } ;
struct input_handler {int dummy; } ;
struct input_device_id {int dummy; } ;
struct input_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mousedev*) ;
 int FUNC_1 (struct mousedev*) ;
 int FUNC_2 (struct mousedev*) ;
 struct mousedev* FUNC_3 (struct input_dev*,struct input_handler*,int) ;
 int FUNC_4 (struct mousedev*) ;

__attribute__((used)) static int FUNC_5(struct input_handler *VAR_0,
       struct input_dev *VAR_1,
       const struct input_device_id *VAR_2)
{
 struct mousedev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_0, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_3);
  return VAR_4;
 }

 return 0;
}

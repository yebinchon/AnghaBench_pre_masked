
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gc_subdev {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct input_dev*,struct gc_subdev*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct gc_subdev*) ;
 struct gc_subdev* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_5, int VAR_6)
{
 struct gc_subdev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->idx = VAR_6;

 FUNC_1(VAR_5, VAR_1, VAR_2);

 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_4);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev {int dummy; } ;
struct input_handle {struct mousedev* private; } ;


 int FUNC_0 (struct mousedev*) ;
 int FUNC_1 (struct mousedev*) ;

__attribute__((used)) static void FUNC_2(struct input_handle *VAR_0)
{
 struct mousedev *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}

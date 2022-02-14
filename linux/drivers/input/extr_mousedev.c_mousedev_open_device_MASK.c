
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev {int mutex; int open; int handle; int exist; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mousedev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->mutex);
 if (VAR_2)
  return VAR_2;

 if (!VAR_1->exist)
  VAR_2 = -VAR_0;
 else if (!VAR_1->open++) {
  VAR_2 = FUNC_0(&VAR_1->handle);
  if (VAR_2)
   VAR_1->open--;
 }

 FUNC_2(&VAR_1->mutex);
 return VAR_2;
}

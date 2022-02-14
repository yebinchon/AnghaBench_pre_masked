
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_descriptor {size_t length; int* data; scalar_t__ immediate; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fw_descriptor*) ;
 int FUNC_4 () ;

int FUNC_5(struct fw_descriptor *VAR_6)
{
 size_t VAR_7;
 int VAR_8;






 VAR_7 = 0;
 while (VAR_7 < VAR_6->length)
  VAR_7 += (VAR_6->data[VAR_7] >> 16) + 1;

 if (VAR_7 != VAR_6->length)
  return -VAR_1;

 FUNC_1(&VAR_2);

 if (VAR_3 + FUNC_3(VAR_6) > 256) {
  VAR_8 = -VAR_0;
 } else {
  FUNC_0(&VAR_6->link, &VAR_5);
  VAR_3 += FUNC_3(VAR_6);
  VAR_4++;
  if (VAR_6->immediate > 0)
   VAR_4++;
  FUNC_4();
  VAR_8 = 0;
 }

 FUNC_2(&VAR_2);

 return VAR_8;
}

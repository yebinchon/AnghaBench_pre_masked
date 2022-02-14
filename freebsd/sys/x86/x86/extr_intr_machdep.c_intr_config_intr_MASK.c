
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {TYPE_1__* is_pic; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
struct TYPE_2__ {int (* pic_config_intr ) (struct intsrc*,int,int) ;} ;


 int VAR_0 ;
 struct intsrc* FUNC_0 (int) ;
 int FUNC_1 (struct intsrc*,int,int) ;

int
FUNC_2(int VAR_1, enum intr_trigger VAR_2, enum intr_polarity VAR_3)
{
 struct intsrc *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 return (VAR_4->is_pic->pic_config_intr(VAR_4, VAR_2, VAR_3));
}

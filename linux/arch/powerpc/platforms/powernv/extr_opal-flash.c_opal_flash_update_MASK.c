
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opal_sg_list {int dummy; } ;
typedef int int64_t ;
struct TYPE_2__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct opal_sg_list*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (unsigned long) ;
 struct opal_sg_list* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_3)
{
 struct opal_sg_list *VAR_4;
 unsigned long VAR_5;
 int64_t VAR_6 = VAR_1;

 if (VAR_3 == VAR_0) {
  FUNC_3("FLASH: Image update cancelled\n");
  VAR_5 = '\0';
  goto flash;
 }

 VAR_4 = FUNC_2(VAR_2.data, VAR_2.size);
 if (!VAR_4)
  goto invalid_img;


 VAR_5 = FUNC_0(VAR_4);

flash:
 VAR_6 = FUNC_1(VAR_5);

invalid_img:
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indent_arg {int indent; struct devinfo_dev* arg; } ;
struct devinfo_dev {scalar_t__* dd_name; scalar_t__ dd_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct devinfo_dev*,int (*) (struct devinfo_dev*,void*),void*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct devinfo_dev*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_4(struct devinfo_dev *VAR_4, void *VAR_5)
{
 struct indent_arg VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3 || (VAR_4->dd_name[0] != 0 && VAR_4->dd_state >= VAR_0)) {
  VAR_8 = (int)(intptr_t)VAR_5;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   FUNC_3(" ");
  FUNC_2(VAR_4);
  FUNC_3("\n");
  if (VAR_2) {
   VAR_6.indent = VAR_8 + 4;
   VAR_6.arg = VAR_4;
   FUNC_1(VAR_1,
       (void *)&VAR_6);
  }
 }

 return(FUNC_0(VAR_4, FUNC_4,
     (void *)((char *)VAR_5 + 2)));
}

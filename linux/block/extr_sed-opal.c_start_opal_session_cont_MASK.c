
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct opal_dev {scalar_t__ tsn; scalar_t__ hsn; int parsed; } ;


 int VAR_0 ;
 int FUNC_0 (struct opal_dev*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_2 = FUNC_2(&VAR_1->parsed, 4);
 VAR_3 = FUNC_2(&VAR_1->parsed, 5);

 if (VAR_2 == 0 && VAR_3 == 0) {
  FUNC_1("Couldn't authenticate session\n");
  return -VAR_0;
 }

 VAR_1->hsn = VAR_2;
 VAR_1->tsn = VAR_3;

 return 0;
}

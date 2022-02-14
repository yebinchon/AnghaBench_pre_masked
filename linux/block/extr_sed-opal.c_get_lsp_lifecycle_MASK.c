
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct opal_dev {int parsed; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct opal_dev*,int ,int ) ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_5, void *VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_4[VAR_2],
     VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_2(&VAR_5->parsed, 4);


 if (VAR_7 != VAR_3) {
  FUNC_1("Couldn't determine the status of the Lifecycle state\n");
  return -VAR_0;
 }

 return 0;
}

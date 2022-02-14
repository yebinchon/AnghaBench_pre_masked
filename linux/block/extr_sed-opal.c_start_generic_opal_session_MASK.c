
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opal_dev {int dummy; } ;
typedef enum opal_uid { ____Placeholder_opal_uid } opal_uid ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,struct opal_dev*,char const*,int ) ;
 int FUNC_1 (int*,struct opal_dev*,int ) ;
 int FUNC_2 (int*,struct opal_dev*,int) ;
 int FUNC_3 (struct opal_dev*,char const*,int ) ;
 int FUNC_4 (struct opal_dev*,int ) ;
 int * VAR_7 ;
 char const** VAR_8 ;
 int FUNC_5 (char*,...) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct opal_dev *VAR_10,
          enum opal_uid VAR_11,
          enum opal_uid VAR_12,
          const char *VAR_13,
          u8 VAR_14)
{
 u32 VAR_15;
 int VAR_16;

 if (VAR_13 == ((void*)0) && VAR_11 != 130)
  return VAR_2;

 VAR_15 = VAR_0;
 VAR_16 = FUNC_3(VAR_10, VAR_8[VAR_3],
   VAR_7[VAR_5]);

 FUNC_1(&VAR_16, VAR_10, VAR_15);
 FUNC_0(&VAR_16, VAR_10, VAR_8[VAR_12], VAR_6);
 FUNC_2(&VAR_16, VAR_10, 1);

 switch (VAR_11) {
 case 130:
  break;
 case 131:
 case 128:
 case 129:
  FUNC_2(&VAR_16, VAR_10, VAR_4);
  FUNC_2(&VAR_16, VAR_10, 0);
  FUNC_0(&VAR_16, VAR_10, VAR_13, VAR_14);
  FUNC_2(&VAR_16, VAR_10, VAR_1);
  FUNC_2(&VAR_16, VAR_10, VAR_4);
  FUNC_2(&VAR_16, VAR_10, 3);
  FUNC_0(&VAR_16, VAR_10, VAR_8[VAR_11],
         VAR_6);
  FUNC_2(&VAR_16, VAR_10, VAR_1);
  break;
 default:
  FUNC_5("Cannot start Admin SP session with auth %d\n", VAR_11);
  return VAR_2;
 }

 if (VAR_16) {
  FUNC_5("Error building start adminsp session command.\n");
  return VAR_16;
 }

 return FUNC_4(VAR_10, VAR_9);
}

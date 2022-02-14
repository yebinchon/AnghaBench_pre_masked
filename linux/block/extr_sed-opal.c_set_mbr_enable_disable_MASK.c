
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,struct opal_dev*,int ) ;
 int FUNC_1 (struct opal_dev*,int ,int ) ;
 int FUNC_2 (struct opal_dev*,int ) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_11, void *VAR_12)
{
 u8 *VAR_13 = VAR_12;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_9[VAR_2],
   VAR_8[VAR_4]);

 FUNC_0(&VAR_14, VAR_11, VAR_6);
 FUNC_0(&VAR_14, VAR_11, VAR_7);
 FUNC_0(&VAR_14, VAR_11, VAR_5);
 FUNC_0(&VAR_14, VAR_11, VAR_6);
 FUNC_0(&VAR_14, VAR_11, VAR_3);
 FUNC_0(&VAR_14, VAR_11, *VAR_13);
 FUNC_0(&VAR_14, VAR_11, VAR_1);
 FUNC_0(&VAR_14, VAR_11, VAR_0);
 FUNC_0(&VAR_14, VAR_11, VAR_1);

 if (VAR_14) {
  FUNC_3("Error Building set MBR done command\n");
  return VAR_14;
 }

 return FUNC_2(VAR_11, VAR_10);
}

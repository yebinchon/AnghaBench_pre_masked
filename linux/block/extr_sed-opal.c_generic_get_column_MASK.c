
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,struct opal_dev*,int ) ;
 int FUNC_1 (int*,struct opal_dev*,int ) ;
 int FUNC_2 (struct opal_dev*,int const*,int ) ;
 int FUNC_3 (struct opal_dev*,int ) ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_9, const u8 *VAR_10,
         u64 VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_7[VAR_3]);

 FUNC_1(&VAR_12, VAR_9, VAR_5);

 FUNC_1(&VAR_12, VAR_9, VAR_6);
 FUNC_1(&VAR_12, VAR_9, VAR_4);
 FUNC_0(&VAR_12, VAR_9, VAR_11);
 FUNC_1(&VAR_12, VAR_9, VAR_2);

 FUNC_1(&VAR_12, VAR_9, VAR_6);
 FUNC_1(&VAR_12, VAR_9, VAR_0);
 FUNC_0(&VAR_12, VAR_9, VAR_11);
 FUNC_1(&VAR_12, VAR_9, VAR_2);

 FUNC_1(&VAR_12, VAR_9, VAR_1);

 if (VAR_12)
  return VAR_12;

 return FUNC_3(VAR_9, VAR_8);
}

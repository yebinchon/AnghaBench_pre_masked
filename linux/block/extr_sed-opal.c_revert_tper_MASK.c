
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct opal_dev*,int ,int ) ;
 int FUNC_1 (struct opal_dev*,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_5, void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3[VAR_0],
   VAR_2[VAR_1]);
 if (VAR_7) {
  FUNC_2("Error building REVERT TPER command.\n");
  return VAR_7;
 }

 return FUNC_1(VAR_5, VAR_4);
}

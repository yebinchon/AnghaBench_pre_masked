
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct opal_dev {int dummy; } ;
typedef enum opal_uid { ____Placeholder_opal_uid } opal_uid ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct opal_dev*,int *,int ) ;
 int FUNC_1 (int *,int ,unsigned int const) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(struct opal_dev *VAR_3, enum opal_uid VAR_4,
      u64 VAR_5)
{
 u8 VAR_6[VAR_1];
 const unsigned int VAR_7 = VAR_1/2;







 FUNC_1(VAR_6, VAR_2[VAR_0], VAR_7);
 FUNC_1(VAR_6+VAR_7, VAR_2[VAR_4], VAR_7);

 return FUNC_0(VAR_3, VAR_6, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ipoib_dev_priv {scalar_t__ pkey_index; int flags; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct ipoib_dev_priv *VAR_1)
{
 u16 VAR_2 = VAR_1->pkey_index;

 VAR_1->pkey_index = 0;
 FUNC_0(VAR_1->dev);

 if (FUNC_1(VAR_0, &VAR_1->flags) &&
     (VAR_2 == VAR_1->pkey_index))
  return 1;
 return 0;
}

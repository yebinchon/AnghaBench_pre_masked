
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adm6996_priv {int (* read ) (struct adm6996_priv*,int) ;} ;
typedef enum admreg { ____Placeholder_admreg } admreg ;


 int FUNC_0 (struct adm6996_priv*,int) ;

__attribute__((used)) static inline u16
FUNC_1(struct adm6996_priv *VAR_0, enum admreg VAR_1)
{
 return VAR_0->read(VAR_0, VAR_1);
}

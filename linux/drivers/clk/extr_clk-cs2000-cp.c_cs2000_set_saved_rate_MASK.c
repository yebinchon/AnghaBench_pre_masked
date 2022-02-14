
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs2000_priv {int saved_parent_rate; int saved_rate; } ;


 int FUNC_0 (struct cs2000_priv*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cs2000_priv *VAR_0)
{
 int VAR_1 = 0;

 return FUNC_0(VAR_0, VAR_1,
     VAR_0->saved_rate,
     VAR_0->saved_parent_rate);
}

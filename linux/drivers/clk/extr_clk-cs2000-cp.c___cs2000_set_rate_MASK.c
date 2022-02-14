
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs2000_priv {unsigned long saved_rate; unsigned long saved_parent_rate; } ;


 int FUNC_0 (struct cs2000_priv*,unsigned long) ;
 int FUNC_1 (struct cs2000_priv*,int) ;
 int FUNC_2 (struct cs2000_priv*,int,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct cs2000_priv *VAR_0, int VAR_1,
        unsigned long VAR_2, unsigned long VAR_3)

{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_0->saved_rate = VAR_2;
 VAR_0->saved_parent_rate = VAR_3;

 return 0;
}

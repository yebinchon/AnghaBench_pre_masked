
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpu_priv {scalar_t__ mapbase1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (struct tpu_priv*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tpu_priv *VAR_2, unsigned long long *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_2->mapbase1 + VAR_1) & VAR_0;


 do {
  VAR_8 = VAR_7;
  VAR_4 = FUNC_1(VAR_2);
  VAR_5 = FUNC_1(VAR_2);
  VAR_6 = FUNC_1(VAR_2);
  VAR_7 = FUNC_0(VAR_2->mapbase1 + VAR_1) & VAR_0;
 } while (FUNC_2((VAR_7 != VAR_8) || (VAR_4 > VAR_5 && VAR_4 < VAR_6)
     || (VAR_5 > VAR_6 && VAR_5 < VAR_4) || (VAR_6 > VAR_4 && VAR_6 < VAR_5)));

 *VAR_3 = VAR_5;
 return VAR_7;
}

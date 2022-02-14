
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int const*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int const*,int) ;

__attribute__((used)) static int FUNC_2(const __be32 *VAR_5)
{
 int VAR_6 = VAR_1;

 if (!VAR_4)
  goto out;

 if (FUNC_1(VAR_5, 1) >= VAR_3)
  VAR_6 = FUNC_1(&VAR_5[VAR_3], 1);


 if (VAR_6 == 0xffff || VAR_6 >= VAR_0)
  VAR_6 = VAR_1;

 if (VAR_6 > 0 &&
  FUNC_1(VAR_5, 1) >= VAR_2) {



  FUNC_0(VAR_6, VAR_5 + 1);
 }

out:
 return VAR_6;
}

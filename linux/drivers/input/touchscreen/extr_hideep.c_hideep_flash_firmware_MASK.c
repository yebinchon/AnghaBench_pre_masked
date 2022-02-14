
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hideep_ts {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct hideep_ts*,int const*,size_t) ;
 int FUNC_1 (struct hideep_ts*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct hideep_ts *VAR_0,
     const __be32 *VAR_1, size_t VAR_2)
{
 int VAR_3 = 3;
 int VAR_4;

 while (VAR_3--) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (!VAR_4) {
   VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
   if (!VAR_4)
    return 0;
  }
 }

 return VAR_4;
}

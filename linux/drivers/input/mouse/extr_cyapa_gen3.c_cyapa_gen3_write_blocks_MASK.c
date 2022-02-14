
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa*,size_t,int const*) ;

__attribute__((used)) static int FUNC_1(struct cyapa *VAR_1,
  size_t VAR_2, size_t VAR_3,
  const u8 *VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  size_t VAR_7 = VAR_2 + VAR_6;
  size_t VAR_8 = VAR_6 * VAR_0;
  const u8 *VAR_9 = &VAR_4[VAR_8];

  VAR_5 = FUNC_0(VAR_1, VAR_7, VAR_9);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}

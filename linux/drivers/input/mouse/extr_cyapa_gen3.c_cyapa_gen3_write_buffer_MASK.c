
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa*,int ,size_t,unsigned char*) ;
 int FUNC_1 (unsigned char*,int const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_1,
  const u8 *VAR_2, size_t VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 unsigned char VAR_6[VAR_0 + 1];
 size_t VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_0) {
  const u8 *VAR_8 = &VAR_2[VAR_5];

  VAR_7 = (VAR_3 - VAR_5 >= VAR_0) ? VAR_0 : VAR_3 - VAR_5;
  VAR_6[0] = VAR_5;
  FUNC_1(&VAR_6[1], VAR_8, VAR_7);

  VAR_4 = FUNC_0(VAR_1, 0, VAR_7 + 1, VAR_6);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}

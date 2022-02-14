
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum get_oid_result { ____Placeholder_get_oid_result } get_oid_result ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct repository*,char const*,int,struct object_id*) ;
 int FUNC_1 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 int FUNC_2 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 int FUNC_3 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 int FUNC_4 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 int FUNC_5 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int,int) ;

__attribute__((used)) static enum get_oid_result FUNC_8(struct repository *VAR_3,
         const char *VAR_4, int VAR_5,
         struct object_id *VAR_6,
         unsigned VAR_7)
{
 int VAR_8, VAR_9;
 const char *VAR_10;




 VAR_9 = 0;
 for (VAR_10 = VAR_4 + VAR_5 - 1; VAR_4 <= VAR_10; VAR_10--) {
  int VAR_11 = *VAR_10;
  if ('0' <= VAR_11 && VAR_11 <= '9')
   continue;
  if (VAR_11 == '~' || VAR_11 == '^')
   VAR_9 = VAR_11;
  break;
 }

 if (VAR_9) {
  unsigned int VAR_12 = 0;
  int VAR_13 = VAR_10 - VAR_4;
  VAR_10++;
  while (VAR_10 < VAR_4 + VAR_5) {
   unsigned int VAR_14 = *VAR_10++ - '0';
   if (FUNC_7(VAR_12, 10))
    return VAR_2;
   VAR_12 *= 10;
   if (FUNC_6(VAR_12, VAR_14))
    return VAR_2;
   VAR_12 += VAR_14;
  }
  if (!VAR_12 && VAR_13 == VAR_5 - 1)
   VAR_12 = 1;
  else if (VAR_12 > VAR_1)
   return VAR_2;
  if (VAR_9 == '^')
   return FUNC_3(VAR_3, VAR_4, VAR_13, VAR_6, VAR_12);

  return FUNC_1(VAR_3, VAR_4, VAR_13, VAR_6, VAR_12);
 }

 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8)
  return VAR_0;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8)
  return VAR_0;


 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_8)
  return VAR_0;

 return FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}

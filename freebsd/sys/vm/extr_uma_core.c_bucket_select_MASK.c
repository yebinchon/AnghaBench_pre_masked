
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uma_bucket_zone {int ubz_maxsize; int ubz_entries; } ;


 int FUNC_0 (int,int) ;
 struct uma_bucket_zone* VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 struct uma_bucket_zone *VAR_2;

 VAR_2 = &VAR_0[0];
 if (VAR_1 > VAR_2->ubz_maxsize)
  return FUNC_0((VAR_2->ubz_maxsize * VAR_2->ubz_entries) / VAR_1, 1);

 for (; VAR_2->ubz_entries != 0; VAR_2++)
  if (VAR_2->ubz_maxsize < VAR_1)
   break;
 VAR_2--;
 return (VAR_2->ubz_entries);
}

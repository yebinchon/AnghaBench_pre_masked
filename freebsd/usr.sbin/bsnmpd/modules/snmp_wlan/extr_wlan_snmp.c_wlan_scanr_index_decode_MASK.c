
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t* subs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_0(const struct asn_oid *VAR_3, uint VAR_4,
    char *VAR_5, uint8_t *VAR_6, uint8_t *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9;

 if (VAR_3->subs[VAR_4] >= VAR_2)
  return (-1);
 for (VAR_8 = 0; VAR_8 < VAR_3->subs[VAR_4]; VAR_8++)
  VAR_5[VAR_8] = VAR_3->subs[VAR_4 + VAR_8 + 1];
 VAR_5[VAR_3->subs[VAR_4]] = '\0';

 VAR_9 = VAR_4 + VAR_3->subs[VAR_4] + 1;
 if (VAR_3->subs[VAR_9] > VAR_1)
  return (-1);
 for (VAR_8 = 0; VAR_8 < VAR_3->subs[VAR_9]; VAR_8++)
  VAR_6[VAR_8] = VAR_3->subs[VAR_9 + VAR_8 + 1];
 VAR_6[VAR_8] = '\0';

 VAR_9 = VAR_4 + VAR_3->subs[VAR_4] + VAR_3->subs[VAR_9] + 2;
 if (VAR_3->subs[VAR_9] != VAR_0)
  return (-1);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_7[VAR_8] = VAR_3->subs[VAR_9 + VAR_8 + 1];

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snapshot_record {char* start; } ;
struct TYPE_2__ {int hexsz; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(const void *VAR_1, const void *VAR_2)
{
 const struct snapshot_record *VAR_3 = VAR_1, *VAR_4 = VAR_2;
 const char *VAR_5 = VAR_3->start + VAR_0->hexsz + 1;
 const char *VAR_6 = VAR_4->start + VAR_0->hexsz + 1;

 while (1) {
  if (*VAR_5 == '\n')
   return *VAR_6 == '\n' ? 0 : -1;
  if (*VAR_5 != *VAR_6) {
   if (*VAR_6 == '\n')
    return 1;
   else
    return (unsigned char)*VAR_5 < (unsigned char)*VAR_6 ? -1 : +1;
  }
  VAR_5++;
  VAR_6++;
 }
}

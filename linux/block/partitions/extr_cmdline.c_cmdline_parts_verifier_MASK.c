
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct parsed_partitions {int limit; TYPE_2__* parts; } ;
struct TYPE_3__ {int volname; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ from; TYPE_1__ info; scalar_t__ has_info; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, struct parsed_partitions *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 1;

 for (; VAR_0 < VAR_1->limit && VAR_1->parts[VAR_0].has_info; VAR_0++) {
  for (VAR_2 = VAR_0+1; VAR_2 < VAR_1->limit && VAR_1->parts[VAR_2].has_info;
       VAR_2++) {
   if (FUNC_0(VAR_1->parts[VAR_0].from,
      VAR_1->parts[VAR_0].size,
      VAR_1->parts[VAR_2].from,
      VAR_1->parts[VAR_2].size)) {
    if (VAR_3) {
     VAR_3 = 0;
     FUNC_1();
    }
    FUNC_2("%s[%llu,%llu] overlaps with "
     "%s[%llu,%llu].",
     VAR_1->parts[VAR_0].info.volname,
     (u64)VAR_1->parts[VAR_0].from << 9,
     (u64)VAR_1->parts[VAR_0].size << 9,
     VAR_1->parts[VAR_2].info.volname,
     (u64)VAR_1->parts[VAR_2].from << 9,
     (u64)VAR_1->parts[VAR_2].size << 9);
   }
  }
 }
}

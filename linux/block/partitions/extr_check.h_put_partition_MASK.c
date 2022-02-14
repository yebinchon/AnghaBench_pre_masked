
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct parsed_partitions {int limit; char* name; int pp_buf; TYPE_1__* parts; } ;
typedef void* sector_t ;
struct TYPE_2__ {void* size; void* from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct parsed_partitions *VAR_2, int VAR_3, sector_t VAR_4, sector_t VAR_5)
{
 if (VAR_3 < VAR_2->limit) {
  char VAR_6[1 + VAR_0 + 10 + 1];

  VAR_2->parts[VAR_3].from = VAR_4;
  VAR_2->parts[VAR_3].size = VAR_5;
  FUNC_0(VAR_6, sizeof(VAR_6), " %s%d", VAR_2->name, VAR_3);
  FUNC_1(VAR_2->pp_buf, VAR_6, VAR_1);
 }
}

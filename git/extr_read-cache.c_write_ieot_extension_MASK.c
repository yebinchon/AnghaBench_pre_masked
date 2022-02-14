
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct strbuf {int dummy; } ;
struct index_entry_offset_table {int nr; TYPE_1__* entries; } ;
struct TYPE_2__ {int nr; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct strbuf*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_1, struct index_entry_offset_table *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;


 FUNC_0(&VAR_3, VAR_0);
 FUNC_1(VAR_1, &VAR_3, sizeof(uint32_t));


 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {


  FUNC_0(&VAR_3, VAR_2->entries[VAR_4].offset);
  FUNC_1(VAR_1, &VAR_3, sizeof(uint32_t));


  FUNC_0(&VAR_3, VAR_2->entries[VAR_4].nr);
  FUNC_1(VAR_1, &VAR_3, sizeof(uint32_t));
 }
}

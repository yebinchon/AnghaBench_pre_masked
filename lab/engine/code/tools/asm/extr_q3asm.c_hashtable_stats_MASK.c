
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buckets; TYPE_2__** table; } ;
typedef TYPE_1__ hashtable_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ hashchain_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1 (hashtable_t *VAR_0)
{
  int VAR_1, VAR_2, VAR_3, VAR_4;
  int VAR_5;
  float VAR_6;
  hashchain_t *VAR_7;

  FUNC_0("Stats for hashtable %08X", VAR_0);
  VAR_2 = 0;
  VAR_3 = 0;
  VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_0->buckets; VAR_5++)
    {
      if (VAR_0->table[VAR_5] == 0)
        { VAR_2++; continue; }
      for (VAR_7 = VAR_0->table[VAR_5], VAR_1 = 0; VAR_7; VAR_7 = VAR_7->next, VAR_1++);
      if (VAR_1 > VAR_3) { VAR_3 = VAR_1; }
      VAR_4 += VAR_1;
    }
  VAR_6 = (float)(VAR_4) / (VAR_0->buckets - VAR_2);
  FUNC_0(", %d buckets, %d nodes", VAR_0->buckets, VAR_4);
  FUNC_0("\n");
  FUNC_0(" Longest chain: %d, empty chains: %d, mean non-empty: %f", VAR_3, VAR_2, VAR_6);

  FUNC_0("\n");
}

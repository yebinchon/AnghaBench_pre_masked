
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache_entry {int name; int ce_mode; } ;
struct TYPE_4__ {int nr; TYPE_1__* entry; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 struct cache_entry** VAR_1 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2.nr; VAR_3++) {
  const char *VAR_4 = VAR_2.entry[VAR_3].name;
  int VAR_5;
  const struct cache_entry *VAR_6;

  VAR_5 = FUNC_2(VAR_4, FUNC_6(VAR_4));
  if (VAR_5 < 0) {
   VAR_5 = FUNC_4(VAR_4, VAR_5);
   if (VAR_5 < 0)
    continue;
  }
  VAR_6 = VAR_1[VAR_5];

  if (!FUNC_0(VAR_6->ce_mode) ||
      !FUNC_3(VAR_6->name) ||
      FUNC_5(VAR_4))
   continue;

  if (!FUNC_7(VAR_4))
   FUNC_1(VAR_4,
    VAR_0);
 }
}

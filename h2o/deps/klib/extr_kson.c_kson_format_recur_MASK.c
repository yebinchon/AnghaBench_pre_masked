
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* str; TYPE_2__** child; } ;
struct TYPE_5__ {char* key; scalar_t__ type; TYPE_1__ v; scalar_t__ n; } ;
typedef TYPE_2__ kson_node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char) ;
 int VAR_4 ;

void FUNC_3(const kson_node_t *VAR_5, int VAR_6)
{
 long VAR_7;
 if (VAR_5->key) FUNC_1("\"%s\":", VAR_5->key);
 if (VAR_5->type == VAR_1 || VAR_5->type == VAR_0) {
  FUNC_2(VAR_5->type == VAR_1? '[' : '{');
  if (VAR_5->n) {
   FUNC_2('\n'); for (VAR_7 = 0; VAR_7 <= VAR_6; ++VAR_7) FUNC_0("  ", VAR_4);
   for (VAR_7 = 0; VAR_7 < (long)VAR_5->n; ++VAR_7) {
    if (VAR_7) {
     int VAR_8;
     FUNC_2(',');
     FUNC_2('\n'); for (VAR_8 = 0; VAR_8 <= VAR_6; ++VAR_8) FUNC_0("  ", VAR_4);
    }
    FUNC_3(VAR_5->v.child[VAR_7], VAR_6 + 1);
   }
   FUNC_2('\n'); for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) FUNC_0("  ", VAR_4);
  }
  FUNC_2(VAR_5->type == VAR_1? ']' : '}');
 } else {
  if (VAR_5->type != VAR_2)
   FUNC_2(VAR_5->type == VAR_3? '\'' : '"');
  FUNC_0(VAR_5->v.str, VAR_4);
  if (VAR_5->type != VAR_2)
   FUNC_2(VAR_5->type == VAR_3? '\'' : '"');
 }
}

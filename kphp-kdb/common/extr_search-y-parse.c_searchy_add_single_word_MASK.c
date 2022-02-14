
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ words; } ;
typedef TYPE_1__ searchy_query_t ;
struct TYPE_8__ {int words; int * H; } ;
typedef TYPE_2__ searchy_query_phrase_t ;
typedef enum searchy_query_phrase_type { ____Placeholder_searchy_query_phrase_type } searchy_query_phrase_type ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static int FUNC_3 (searchy_query_t *VAR_1, const char *VAR_2, int VAR_3, enum searchy_query_phrase_type VAR_4, int VAR_5) {
  if (VAR_1->words >= VAR_0) {
    FUNC_1 (VAR_1);
    return -1;
  }
  searchy_query_phrase_t *VAR_6 = FUNC_0 (VAR_1, VAR_4, VAR_5);
  VAR_6->H[VAR_6->words++] = FUNC_2 (VAR_2, VAR_3);
  VAR_1->words++;
  return 0;
}

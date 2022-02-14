
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_4__ {scalar_t__ have_repository; } ;
struct TYPE_3__ {int hexsz; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 char const* FUNC_1 (struct object_id const*,int) ;
 char* FUNC_2 (struct object_id const*) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static const char *FUNC_3(const struct object_id *VAR_3, int VAR_4)
{
 if (VAR_1->have_repository)
  return FUNC_1(VAR_3, VAR_4);
 else {
  char *VAR_5 = FUNC_2(VAR_3);
  if (VAR_4 < 0)
   VAR_4 = VAR_0;
  if (VAR_4 > VAR_2->hexsz)
   FUNC_0("oid abbreviation out of range: %d", VAR_4);
  if (VAR_4)
   VAR_5[VAR_4] = '\0';
  return VAR_5;
 }
}

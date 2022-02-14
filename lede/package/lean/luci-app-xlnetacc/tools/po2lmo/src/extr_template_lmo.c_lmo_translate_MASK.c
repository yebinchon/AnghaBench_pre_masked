
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int length; int offset; } ;
typedef TYPE_1__ lmo_entry_t ;
struct TYPE_7__ {char* mmap; struct TYPE_7__* next; } ;
typedef TYPE_2__ lmo_archive_t ;
struct TYPE_8__ {TYPE_2__* archives; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (char const*,int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(const char *VAR_1, int VAR_2, char **VAR_3, int *VAR_4)
{
 uint32_t VAR_5;
 lmo_entry_t *VAR_6;
 lmo_archive_t *VAR_7;

 if (!VAR_1 || !VAR_0)
  return -2;

 VAR_5 = FUNC_0(VAR_1, VAR_2);

 for (VAR_7 = VAR_0->archives; VAR_7; VAR_7 = VAR_7->next)
 {
  if ((VAR_6 = FUNC_1(VAR_7, VAR_5)) != ((void*)0))
  {
   *VAR_3 = VAR_7->mmap + FUNC_2(VAR_6->offset);
   *VAR_4 = FUNC_2(VAR_6->length);
   return 0;
  }
 }

 return -1;
}

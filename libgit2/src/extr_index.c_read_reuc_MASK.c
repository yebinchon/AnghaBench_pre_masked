
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int * oid; scalar_t__* mode; } ;
typedef TYPE_1__ git_index_reuc_entry ;
struct TYPE_13__ {scalar_t__ _alloc_size; } ;
struct TYPE_12__ {TYPE_6__ reuc; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*,char const*,size_t,char const**,int) ;
 int FUNC_2 (int *,unsigned char const*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*,size_t) ;
 int VAR_1 ;
 TYPE_1__* FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(git_index *VAR_2, const char *VAR_3, size_t VAR_4)
{
 const char *VAR_5;
 size_t VAR_6;
 int VAR_7;


 if (VAR_2->reuc._alloc_size == 0 &&
  FUNC_3(&VAR_2->reuc, 16, VAR_1) < 0)
  return -1;

 while (VAR_4) {
  git_index_reuc_entry *VAR_8;

  VAR_6 = FUNC_8(VAR_3, VAR_4) + 1;
  if (VAR_4 <= VAR_6)
   return FUNC_7("reading reuc entries");

  VAR_8 = FUNC_9(VAR_3);
  FUNC_0(VAR_8);

  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;


  for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
   int64_t VAR_9;

   if (FUNC_1(&VAR_9, VAR_3, VAR_4, &VAR_5, 8) < 0 ||
    !VAR_5 || VAR_5 == VAR_3 || *VAR_5 ||
    VAR_9 < 0 || VAR_9 > VAR_0) {
    FUNC_6(VAR_8);
    return FUNC_7("reading reuc entry stage");
   }

   VAR_8->mode[VAR_7] = (uint32_t)VAR_9;

   VAR_6 = (VAR_5 + 1) - VAR_3;
   if (VAR_4 <= VAR_6) {
    FUNC_6(VAR_8);
    return FUNC_7("reading reuc entry stage");
   }

   VAR_4 -= VAR_6;
   VAR_3 += VAR_6;
  }


  for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
   if (!VAR_8->mode[VAR_7])
    continue;
   if (VAR_4 < 20) {
    FUNC_6(VAR_8);
    return FUNC_7("reading reuc entry oid");
   }

   FUNC_2(&VAR_8->oid[VAR_7], (const unsigned char *) VAR_3);
   VAR_4 -= 20;
   VAR_3 += 20;
  }


  if (FUNC_4(&VAR_2->reuc, VAR_8) < 0)
   return -1;
 }


 FUNC_5(&VAR_2->reuc, 1);

 return 0;
}

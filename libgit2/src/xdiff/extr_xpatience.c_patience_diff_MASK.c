
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xpparam_t ;
struct TYPE_7__ {int* rchg; } ;
struct TYPE_6__ {int* rchg; } ;
struct TYPE_8__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_3__ xdfenv_t ;
struct hashmap {int entries; int has_matches; } ;
struct entry {int dummy; } ;
typedef int mmfile_t ;
typedef int map ;


 int FUNC_0 (struct hashmap*,int,int,int,int) ;
 scalar_t__ FUNC_1 (int *,int *,int const*,TYPE_3__*,struct hashmap*,int,int,int,int) ;
 struct entry* FUNC_2 (struct hashmap*) ;
 int FUNC_3 (struct hashmap*,int ,int) ;
 int FUNC_4 (struct hashmap*,struct entry*,int,int,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(mmfile_t *VAR_0, mmfile_t *VAR_1,
  xpparam_t const *VAR_2, xdfenv_t *VAR_3,
  int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct hashmap VAR_8;
 struct entry *VAR_9;
 int VAR_10 = 0;


 if (!VAR_5) {
  while(VAR_7--)
   VAR_3->xdf2.rchg[VAR_6++ - 1] = 1;
  return 0;
 } else if (!VAR_7) {
  while(VAR_5--)
   VAR_3->xdf1.rchg[VAR_4++ - 1] = 1;
  return 0;
 }

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_8,
   VAR_4, VAR_5, VAR_6, VAR_7))
  return -1;


 if (!VAR_8.has_matches) {
  while(VAR_5--)
   VAR_3->xdf1.rchg[VAR_4++ - 1] = 1;
  while(VAR_7--)
   VAR_3->xdf2.rchg[VAR_6++ - 1] = 1;
  FUNC_5(VAR_8.entries);
  return 0;
 }

 VAR_9 = FUNC_2(&VAR_8);
 if (VAR_9)
  VAR_10 = FUNC_4(&VAR_8, VAR_9,
   VAR_4, VAR_5, VAR_6, VAR_7);
 else
  VAR_10 = FUNC_0(&VAR_8,
   VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_5(VAR_8.entries);
 return VAR_10;
}

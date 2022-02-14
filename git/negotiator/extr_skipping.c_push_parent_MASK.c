
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct entry {scalar_t__ ttl; int original_ttl; struct commit* commit; } ;
struct TYPE_5__ {int nr; TYPE_1__* array; } ;
struct data {TYPE_2__ rev_list; } ;
struct TYPE_6__ {int flags; } ;
struct commit {TYPE_3__ object; } ;
struct TYPE_4__ {struct entry* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct data*,struct commit*) ;
 struct entry* FUNC_2 (struct data*,struct commit*,int ) ;

__attribute__((used)) static int FUNC_3(struct data *VAR_4, struct entry *VAR_5,
         struct commit *VAR_6)
{
 struct entry *VAR_7;

 if (VAR_6->object.flags & VAR_3) {
  int VAR_8;
  if (VAR_6->object.flags & VAR_2)





   return 0;



  for (VAR_8 = 0; VAR_8 < VAR_4->rev_list.nr; VAR_8++) {
   VAR_7 = VAR_4->rev_list.array[VAR_8].data;
   if (VAR_7->commit == VAR_6)
    goto parent_found;
  }
  FUNC_0("missing parent in priority queue");
parent_found:
  ;
 } else {
  VAR_7 = FUNC_2(VAR_4, VAR_6, 0);
 }

 if (VAR_5->commit->object.flags & (VAR_1 | VAR_0)) {
  FUNC_1(VAR_4, VAR_6);
 } else {
  uint16_t VAR_9 = VAR_5->ttl
   ? VAR_5->original_ttl : VAR_5->original_ttl * 3 / 2 + 1;
  uint16_t VAR_10 = VAR_5->ttl
   ? VAR_5->ttl - 1 : VAR_9;
  if (VAR_7->original_ttl < VAR_9) {
   VAR_7->original_ttl = VAR_9;
   VAR_7->ttl = VAR_10;
  }
 }

 return 1;
}

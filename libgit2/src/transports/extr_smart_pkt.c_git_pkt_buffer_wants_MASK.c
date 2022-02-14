
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ common; } ;
typedef TYPE_1__ transport_smart_caps ;
struct TYPE_8__ {int oid; scalar_t__ local; } ;
typedef TYPE_2__ git_remote_head ;
typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const* const,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int *) ;
 char* VAR_1 ;
 int FUNC_6 (char*) ;

int FUNC_7(
 const git_remote_head * const *VAR_2,
 size_t VAR_3,
 transport_smart_caps *VAR_4,
 git_buf *VAR_5)
{
 size_t VAR_6 = 0;
 const git_remote_head *VAR_7;

 if (VAR_4->common) {
  for (; VAR_6 < VAR_3; ++VAR_6) {
   VAR_7 = VAR_2[VAR_6];
   if (!VAR_7->local)
    break;
  }

  if (FUNC_0(VAR_2[VAR_6], VAR_4, VAR_5) < 0)
   return -1;

  VAR_6++;
 }

 for (; VAR_6 < VAR_3; ++VAR_6) {
  char VAR_8[VAR_0];

  VAR_7 = VAR_2[VAR_6];
  if (VAR_7->local)
   continue;

  FUNC_4(VAR_8, &VAR_7->oid);
  FUNC_2(VAR_5, VAR_1, FUNC_6(VAR_1));
  FUNC_2(VAR_5, VAR_8, VAR_0);
  FUNC_3(VAR_5, '\n');
  if (FUNC_1(VAR_5))
   return -1;
 }

 return FUNC_5(VAR_5);
}

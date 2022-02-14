
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_iterator ;
struct TYPE_9__ {int path; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const**,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(
 const git_index_entry **VAR_3,
 git_iterator *VAR_4)
{
 const git_index_entry *VAR_5 = *VAR_3;
 int VAR_6, VAR_7;






 while ((VAR_7 = FUNC_1(VAR_3, VAR_4)) == 0) {
  if (!(VAR_4->flags & VAR_1) ||
   !FUNC_0(VAR_5) ||
   !FUNC_0(*VAR_3))
   break;

  VAR_6 = (VAR_4->flags & VAR_0) ?
   FUNC_2(VAR_5->path, (*VAR_3)->path) :
   FUNC_3(VAR_5->path, (*VAR_3)->path);

  if (VAR_6)
   break;
 }

 if (VAR_7 == VAR_2) {
  *VAR_3 = ((void*)0);
  VAR_7 = 0;
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct commit_name {unsigned int prio; TYPE_3__* tag; int const sha1; } ;
typedef scalar_t__ git_time_t ;
struct TYPE_8__ {TYPE_2__* tagger; } ;
typedef TYPE_3__ git_tag ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_6__ {scalar_t__ time; } ;
struct TYPE_7__ {TYPE_1__ when; } ;


 scalar_t__ FUNC_0 (TYPE_3__**,int *,int const*) ;

__attribute__((used)) static int FUNC_1(
 git_tag **VAR_0,
 git_repository *VAR_1,
 struct commit_name *VAR_2,
 unsigned int VAR_3,
 const git_oid *VAR_4)
{
 git_time_t VAR_5 = 0, VAR_6 = 0;

 if (!VAR_2 || VAR_2->prio < VAR_3)
  return 1;

 if (VAR_2->prio == 2 && VAR_3 == 2) {



  git_tag *VAR_7 = ((void*)0);

  if (!VAR_2->tag) {
   if (FUNC_0(&VAR_7, VAR_1, &VAR_2->sha1) < 0)
    return 1;
   VAR_2->tag = VAR_7;
  }

  if (FUNC_0(&VAR_7, VAR_1, VAR_4) < 0)
   return 0;

  *VAR_0 = VAR_7;

  if (VAR_2->tag->tagger)
   VAR_5 = VAR_2->tag->tagger->when.time;

  if (VAR_7->tagger)
   VAR_6 = VAR_7->tagger->when.time;

  if (VAR_5 < VAR_6)
   return 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patch {char const* old_oid_prefix; struct fragment* fragments; } ;
struct object_id {int dummy; } ;
struct fragment {int oldpos; int oldlines; int size; int patch; int next; } ;
typedef int heading ;
struct TYPE_2__ {int hexsz; } ;


 int FUNC_0 (char*,struct object_id*) ;
 char* FUNC_1 (int ,char,int ) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct patch *VAR_1, struct object_id *VAR_2)
{
 struct fragment *VAR_3 = VAR_1->fragments;
 static const char VAR_4[] = "-Subproject commit ";
 char *VAR_5;

 if (
     VAR_3 && !VAR_3->next &&

     VAR_3->oldpos == 1 && VAR_3->oldlines == 1 &&

     (VAR_5 = FUNC_1(VAR_3->patch, '\n', VAR_3->size)) != ((void*)0) &&
     FUNC_2(++VAR_5, VAR_4) &&

     !FUNC_0(VAR_5 + sizeof(VAR_4) - 1, VAR_2) &&
     VAR_5[sizeof(VAR_4) + VAR_0->hexsz - 1] == '\n' &&

     FUNC_2(VAR_5 + sizeof(VAR_4) - 1, VAR_1->old_oid_prefix))
  return 0;


 return FUNC_0(VAR_1->old_oid_prefix, VAR_2);
}

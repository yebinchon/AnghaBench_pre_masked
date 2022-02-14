
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t attr; int oid; int filename; } ;
typedef TYPE_1__ git_tree_entry ;
struct TYPE_10__ {int object; } ;
typedef TYPE_2__ git_tree ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_11__ {int attr; int filename; int oid; } ;
typedef TYPE_3__ expected_entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int **,char const*,size_t,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 size_t FUNC_10 (char const*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_1, size_t VAR_2,
 expected_entry *VAR_3, size_t VAR_4)
{
 git_tree *VAR_5;
 size_t VAR_6;

 if (!VAR_2)
  VAR_2 = FUNC_10(VAR_1);
 FUNC_4(FUNC_5((git_object **) &VAR_5, VAR_1, VAR_2, VAR_0));

 FUNC_1(FUNC_9(VAR_5), VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  expected_entry *VAR_7 = VAR_3 + VAR_6;
  const git_tree_entry *VAR_8;
  git_oid VAR_9;

  FUNC_4(FUNC_7(&VAR_9, VAR_7->oid));

  FUNC_0(VAR_8 = FUNC_8(VAR_5, VAR_7->filename));
  FUNC_3(VAR_7->filename, VAR_8->filename);
  FUNC_1(VAR_7->attr, VAR_8->attr);
  FUNC_2(&VAR_9, VAR_8->oid);
 }

 FUNC_6(&VAR_5->object);
}

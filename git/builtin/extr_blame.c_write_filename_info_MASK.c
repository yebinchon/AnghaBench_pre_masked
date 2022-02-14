
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blame_origin {int path; TYPE_2__* commit; struct blame_origin* previous; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char) ;

__attribute__((used)) static void FUNC_3(struct blame_origin *VAR_1)
{
 if (VAR_1->previous) {
  struct blame_origin *VAR_2 = VAR_1->previous;
  FUNC_1("previous %s ", FUNC_0(&VAR_2->commit->object.oid));
  FUNC_2(VAR_2->path, VAR_0, '\n');
 }
 FUNC_1("filename ");
 FUNC_2(VAR_1->path, VAR_0, '\n');
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {char* path; int len; int baselen; int stage; int mode; int oid; struct directory* up; } ;
struct archiver_context {struct directory* bottom; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct directory*) ;
 scalar_t__ FUNC_1 (int *,char*,int,char*,int ,int ,struct archiver_context*) ;

__attribute__((used)) static int FUNC_2(struct archiver_context *VAR_1)
{
 struct directory *VAR_2 = VAR_1->bottom;
 int VAR_3;

 if (!VAR_2)
  return 0;
 VAR_1->bottom = VAR_2->up;
 VAR_2->path[VAR_2->len - 1] = '\0';
 VAR_3 =
  FUNC_2(VAR_1) ||
  FUNC_1(&VAR_2->oid, VAR_2->path, VAR_2->baselen,
        VAR_2->path + VAR_2->baselen, VAR_2->mode,
        VAR_2->stage, VAR_1) != VAR_0;
 FUNC_0(VAR_2);
 return VAR_3 ? -1 : 0;
}

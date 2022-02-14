
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int oid; } ;
typedef TYPE_1__ git_remote_head ;
typedef int git_buf ;
struct TYPE_6__ {char* name; int * oid; } ;
typedef TYPE_2__ expected_ref ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;

void FUNC_9(const git_remote_head *VAR_1[], size_t VAR_2, const expected_ref VAR_3[], size_t VAR_4)
{
 size_t VAR_5, VAR_6 = 0;
 git_buf VAR_7 = VAR_0;
 const git_remote_head *VAR_8;
 char *VAR_9;
 bool VAR_10 = 0;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_8 = VAR_1[VAR_5];
  if (!FUNC_8(VAR_8->name, "refs/heads/master")) {
   VAR_10 = 1;
   break;
  }
 }

 if (VAR_4 + (VAR_10 ? 1 : 0) != VAR_2)
  goto failed;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_8 = VAR_1[VAR_5];
  if (VAR_10 && !FUNC_8(VAR_8->name, "refs/heads/master"))
   continue;

  if (FUNC_8(VAR_3[VAR_6].name, VAR_8->name) ||
   FUNC_6(VAR_3[VAR_6].oid, &VAR_8->oid))
   goto failed;

  VAR_6++;
 }

 return;

failed:
 FUNC_5(&VAR_7, "Expected and actual refs differ:\nEXPECTED:\n");

 for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_9 = FUNC_7(VAR_3[VAR_5].oid);
  FUNC_1(FUNC_4(&VAR_7, "%s = %s\n", VAR_3[VAR_5].name, VAR_9));
 }

 FUNC_5(&VAR_7, "\nACTUAL:\n");
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_8 = VAR_1[VAR_5];
  if (VAR_10 && !FUNC_8(VAR_8->name, "refs/heads/master"))
   continue;

  VAR_9 = FUNC_7(&VAR_8->oid);
  FUNC_1(FUNC_4(&VAR_7, "%s = %s\n", VAR_8->name, VAR_9));
 }

 FUNC_0(FUNC_2(&VAR_7));

 FUNC_3(&VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct credential {int username; int path; int host; int protocol; } ;
struct TYPE_4__ {int message; } ;
typedef int GHashTable ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct credential*) ;
 int FUNC_4 (int ,int *,int *,TYPE_1__**) ;

__attribute__((used)) static int FUNC_5(struct credential *VAR_3)
{
 GHashTable *VAR_4 = ((void*)0);
 GError *VAR_5 = ((void*)0);
 if (!VAR_3->protocol && !VAR_3->host && !VAR_3->path && !VAR_3->username)
  return VAR_0;

 VAR_4 = FUNC_3(VAR_3);
 FUNC_4(VAR_2,
        VAR_4,
        ((void*)0),
        &VAR_5);
 FUNC_2(VAR_4);

 if (VAR_5 != ((void*)0)) {
  FUNC_0("erase failed: %s", VAR_5->message);
  FUNC_1(VAR_5);
  return VAR_0;
 }

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct credential {int password; int username; scalar_t__ path; scalar_t__ host; int protocol; } ;
struct TYPE_4__ {int message; } ;
typedef int GHashTable ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct credential*) ;
 char* FUNC_5 (struct credential*) ;
 int FUNC_6 (int ,int *,int *,char*,int ,int *,TYPE_1__**) ;

__attribute__((used)) static int FUNC_7(struct credential *VAR_3)
{
 char *VAR_4 = ((void*)0);
 GHashTable *VAR_5 = ((void*)0);
 GError *VAR_6 = ((void*)0);
 if (!VAR_3->protocol || !(VAR_3->host || VAR_3->path) ||
     !VAR_3->username || !VAR_3->password)
  return VAR_0;

 VAR_4 = FUNC_5(VAR_3);
 VAR_5 = FUNC_4(VAR_3);
 FUNC_6(VAR_2,
        VAR_5,
        ((void*)0),
        VAR_4,
        VAR_3->password,
        ((void*)0),
        &VAR_6);
 FUNC_2(VAR_4);
 FUNC_3(VAR_5);

 if (VAR_6 != ((void*)0)) {
  FUNC_0("store failed: %s", VAR_6->message);
  FUNC_1(VAR_6);
  return VAR_0;
 }

 return VAR_1;
}

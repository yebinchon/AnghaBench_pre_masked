
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct credential {void* password; void* username; scalar_t__ path; scalar_t__ host; int protocol; } ;
struct TYPE_9__ {int message; } ;
struct TYPE_8__ {int * data; } ;
typedef int SecretValue ;
typedef int SecretService ;
typedef int SecretItem ;
typedef TYPE_1__ GList ;
typedef int GHashTable ;
typedef TYPE_2__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_5 ;
 void* FUNC_6 (char const*) ;
 int * FUNC_7 (struct credential*) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int ,int *,TYPE_2__**) ;
 TYPE_1__* FUNC_11 (int *,int ,int *,int,int *,TYPE_2__**) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct credential *VAR_6)
{
 SecretService *VAR_7 = ((void*)0);
 GHashTable *VAR_8 = ((void*)0);
 GError *VAR_9 = ((void*)0);
 GList *VAR_10 = ((void*)0);

 if (!VAR_6->protocol || !(VAR_6->host || VAR_6->path))
  return VAR_0;

 VAR_7 = FUNC_10(0, ((void*)0), &VAR_9);
 if (VAR_9 != ((void*)0)) {
  FUNC_0("could not connect to Secret Service: %s", VAR_9->message);
  FUNC_1(VAR_9);
  return VAR_0;
 }

 VAR_8 = FUNC_7(VAR_6);
 VAR_10 = FUNC_11(VAR_7,
        VAR_2,
        VAR_8,
        VAR_3 | VAR_4,
        ((void*)0),
        &VAR_9);
 FUNC_4(VAR_8);
 if (VAR_9 != ((void*)0)) {
  FUNC_0("lookup failed: %s", VAR_9->message);
  FUNC_1(VAR_9);
  return VAR_0;
 }

 if (VAR_10 != ((void*)0)) {
  SecretItem *VAR_11;
  SecretValue *VAR_12;
  const char *VAR_13;

  VAR_11 = VAR_10->data;
  VAR_12 = FUNC_9(VAR_11);
  VAR_8 = FUNC_8(VAR_11);

  VAR_13 = FUNC_3(VAR_8, "user");
  if (VAR_13) {
   FUNC_2(VAR_6->username);
   VAR_6->username = FUNC_6(VAR_13);
  }

  VAR_13 = FUNC_12(VAR_12);
  if (VAR_13) {
   FUNC_2(VAR_6->password);
   VAR_6->password = FUNC_6(VAR_13);
  }

  FUNC_4(VAR_8);
  FUNC_13(VAR_12);
  FUNC_5(VAR_10, VAR_5);
 }

 return VAR_1;
}

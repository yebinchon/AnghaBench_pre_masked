
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct fingerprint {int hash; scalar_t__ type; } ;
typedef scalar_t__ hash_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fingerprint* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char const*,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int **,int) ;
 char* FUNC_4 (TYPE_1__ const*) ;
 char* FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static struct fingerprint *
FUNC_7(ucl_object_t *VAR_3)
{
 const ucl_object_t *VAR_4;
 ucl_object_iter_t VAR_5 = ((void*)0);
 const char *VAR_6, *VAR_7, *VAR_8;
 struct fingerprint *VAR_9;
 hash_t VAR_10 = VAR_1;

 VAR_6 = VAR_7 = ((void*)0);

 while ((VAR_4 = FUNC_3(VAR_3, &VAR_5, 1))) {
  VAR_8 = FUNC_4(VAR_4);
  if (VAR_4->type != VAR_2)
   continue;
  if (FUNC_1(VAR_8, "function") == 0) {
   VAR_6 = FUNC_5(VAR_4);
   continue;
  }
  if (FUNC_1(VAR_8, "fingerprint") == 0) {
   VAR_7 = FUNC_5(VAR_4);
   continue;
  }
 }

 if (VAR_7 == ((void*)0) || VAR_6 == ((void*)0))
  return (((void*)0));

 if (FUNC_1(VAR_6, "sha256") == 0)
  VAR_10 = VAR_0;

 if (VAR_10 == VAR_1) {
  FUNC_6("Unsupported hashing function: %s", VAR_6);
  return (((void*)0));
 }

 VAR_9 = FUNC_0(1, sizeof(struct fingerprint));
 VAR_9->type = VAR_10;
 FUNC_2(VAR_9->hash, VAR_7, sizeof(VAR_9->hash));

 return (VAR_9);
}

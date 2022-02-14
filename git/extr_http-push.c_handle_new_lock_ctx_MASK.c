
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xml_ctx {scalar_t__ cdata; int name; scalar_t__ userData; } ;
struct remote_lock {char* tmpfile_suffix; void* token; int timeout; void* owner; } ;
typedef int git_hash_ctx ;
struct TYPE_2__ {int hexsz; int (* final_fn ) (unsigned char*,int *) ;int (* update_fn ) (int *,void*,int ) ;int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,char const**) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char const*,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*,int ) ;
 int FUNC_8 (unsigned char*,int *) ;
 TYPE_1__* VAR_4 ;
 void* FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct xml_ctx *VAR_5, int VAR_6)
{
 struct remote_lock *VAR_7 = (struct remote_lock *)VAR_5->userData;
 git_hash_ctx VAR_8;
 unsigned char VAR_9[VAR_3];

 if (VAR_6 && VAR_5->cdata) {
  if (!FUNC_3(VAR_5->name, VAR_0)) {
   VAR_7->owner = FUNC_9(VAR_5->cdata);
  } else if (!FUNC_3(VAR_5->name, VAR_1)) {
   const char *VAR_10;
   if (FUNC_2(VAR_5->cdata, "Second-", &VAR_10))
    VAR_7->timeout = FUNC_5(VAR_10, ((void*)0), 10);
  } else if (!FUNC_3(VAR_5->name, VAR_2)) {
   VAR_7->token = FUNC_9(VAR_5->cdata);

   VAR_4->init_fn(&VAR_8);
   VAR_4->update_fn(&VAR_8, VAR_7->token, FUNC_4(VAR_7->token));
   VAR_4->final_fn(VAR_9, &VAR_8);

   VAR_7->tmpfile_suffix[0] = '_';
   FUNC_1(VAR_7->tmpfile_suffix + 1, FUNC_0(VAR_9), VAR_4->hexsz);
  }
 }
}

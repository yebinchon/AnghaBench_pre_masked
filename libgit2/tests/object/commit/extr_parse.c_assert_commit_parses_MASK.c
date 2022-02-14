
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {int sign; int offset; int time; } ;
struct TYPE_18__ {TYPE_2__ when; int email; int name; } ;
typedef TYPE_6__ git_signature ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_17__ {int size; } ;
struct TYPE_19__ {int object; TYPE_5__ parent_ids; int tree_id; int message_encoding; int raw_message; TYPE_4__* committer; TYPE_11__* author; } ;
typedef TYPE_7__ git_commit ;
struct TYPE_15__ {size_t time; size_t offset; size_t sign; } ;
struct TYPE_16__ {char const* name; char const* email; TYPE_3__ when; } ;
struct TYPE_13__ {size_t time; size_t offset; size_t sign; } ;
struct TYPE_12__ {char const* name; char const* email; TYPE_1__ when; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const*,size_t,int ) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (TYPE_6__*,TYPE_11__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__**,char const*) ;
 size_t FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(const char *VAR_1, size_t VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 const char *VAR_6,
 const char *VAR_7,
 size_t VAR_8)
{
 git_commit *VAR_9;
 if (!VAR_2)
  VAR_2 = FUNC_12(VAR_1);
 FUNC_5(FUNC_7((git_object **) &VAR_9, VAR_1, VAR_2, VAR_0));

 if (VAR_4) {
  git_signature *VAR_10;
  FUNC_5(FUNC_11(&VAR_10, VAR_4));
  FUNC_0(FUNC_9(VAR_10, VAR_9->author));
  FUNC_4(VAR_10->name, VAR_9->author->name);
  FUNC_4(VAR_10->email, VAR_9->author->email);
  FUNC_1(VAR_10->when.time, VAR_9->author->when.time);
  FUNC_1(VAR_10->when.offset, VAR_9->author->when.offset);
  FUNC_1(VAR_10->when.sign, VAR_9->author->when.sign);
  FUNC_10(VAR_10);
 }

 if (VAR_5) {
  git_signature *VAR_11;
  FUNC_5(FUNC_11(&VAR_11, VAR_5));
  FUNC_4(VAR_11->name, VAR_9->committer->name);
  FUNC_4(VAR_11->email, VAR_9->committer->email);
  FUNC_1(VAR_11->when.time, VAR_9->committer->when.time);
  FUNC_1(VAR_11->when.offset, VAR_9->committer->when.offset);
  FUNC_1(VAR_11->when.sign, VAR_9->committer->when.sign);
  FUNC_10(VAR_11);
 }

 if (VAR_6)
  FUNC_4(VAR_9->message_encoding, VAR_6);
 else
  FUNC_3(VAR_9->message_encoding, ((void*)0));

 if (VAR_7)
  FUNC_4(VAR_9->raw_message, VAR_7);
 else
  FUNC_3(VAR_9->message_encoding, ((void*)0));

 if (VAR_3) {
  git_oid VAR_12;
  FUNC_5(FUNC_8(&VAR_12, VAR_3));
  FUNC_2(&VAR_12, &VAR_9->tree_id);
 }

 FUNC_1(VAR_9->parent_ids.size, VAR_8);

 FUNC_6(&VAR_9->object);
}

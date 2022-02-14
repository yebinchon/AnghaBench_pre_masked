
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tag {int tag; TYPE_5__* tagged; } ;
struct strbuf {size_t len; int buf; } ;
struct rev_info {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_extra_header {size_t len; scalar_t__ value; } ;
struct commit {TYPE_4__* parents; } ;
struct TYPE_13__ {int hash; } ;
struct TYPE_12__ {TYPE_6__ oid; } ;
struct TYPE_11__ {TYPE_3__* next; } ;
struct TYPE_10__ {TYPE_2__* item; } ;
struct TYPE_8__ {int oid; } ;
struct TYPE_9__ {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,size_t,int ,struct object_id*) ;
 scalar_t__ FUNC_1 (struct commit*) ;
 struct tag* FUNC_2 (int ,struct object_id*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int *) ;
 size_t FUNC_4 (scalar_t__,size_t) ;
 scalar_t__ FUNC_5 (int ,struct tag*,scalar_t__,size_t) ;
 int FUNC_6 (struct rev_info*,int,int ) ;
 int FUNC_7 (struct strbuf*,char*,int,...) ;
 int FUNC_8 (struct strbuf*,char*) ;
 int FUNC_9 (struct strbuf*,int) ;
 int FUNC_10 (struct strbuf*) ;
 int VAR_1 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,size_t,scalar_t__,size_t,struct strbuf*,int *) ;
 int FUNC_13 (TYPE_6__*,struct commit*) ;

__attribute__((used)) static int FUNC_14(struct commit *VAR_2,
        struct commit_extra_header *VAR_3,
        void *VAR_4)
{
 struct rev_info *VAR_5 = (struct rev_info *)VAR_4;
 struct object_id VAR_6;
 struct tag *VAR_7;
 struct strbuf VAR_8;
 int VAR_9, VAR_10;
 size_t VAR_11, VAR_12;

 FUNC_0(VAR_3->value, VAR_3->len, FUNC_11(VAR_0), &VAR_6);
 VAR_7 = FUNC_2(VAR_1, &VAR_6);
 if (!VAR_7)
  return -1;

 FUNC_9(&VAR_8, 256);
 if (FUNC_5(VAR_1, VAR_7, VAR_3->value, VAR_3->len))
  FUNC_8(&VAR_8, "malformed mergetag\n");
 else if (FUNC_1(VAR_2) &&
   FUNC_3(&VAR_7->tagged->oid,
         &VAR_2->parents->next->item->object.oid))
  FUNC_7(&VAR_8,
       "merged tag '%s'\n", VAR_7->tag);
 else if ((VAR_10 = FUNC_13(&VAR_7->tagged->oid, VAR_2)) < 0)
  FUNC_7(&VAR_8, "tag %s names a non-parent %s\n",
        VAR_7->tag, VAR_7->tagged->oid.hash);
 else
  FUNC_7(&VAR_8,
       "parent #%d, tagged '%s'\n", VAR_10 + 1, VAR_7->tag);
 VAR_12 = VAR_8.len;

 VAR_11 = FUNC_4(VAR_3->value, VAR_3->len);
 VAR_9 = -1;
 if (VAR_3->len > VAR_11) {

  if (!FUNC_12(VAR_3->value, VAR_11,
       VAR_3->value + VAR_11,
       VAR_3->len - VAR_11,
       &VAR_8, ((void*)0)))
   VAR_9 = 0;
  else if (VAR_8.len <= VAR_12)
   FUNC_8(&VAR_8, "No signature\n");

 }

 FUNC_6(VAR_5, VAR_9, VAR_8.buf);
 FUNC_10(&VAR_8);
 return 0;
}

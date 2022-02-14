
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash; } ;
struct treeent {TYPE_1__ oid; int name; int mode; scalar_t__ len; } ;
struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {int rawsz; } ;


 int FUNC_0 (struct treeent**,int,int ) ;
 int VAR_0 ;
 struct treeent** VAR_1 ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 int FUNC_2 (struct strbuf*,char*,int ,int ,char) ;
 int FUNC_3 (struct strbuf*,size_t) ;
 int FUNC_4 (struct strbuf*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static void FUNC_6(struct object_id *VAR_5)
{
 struct strbuf VAR_6;
 size_t VAR_7;
 int VAR_8;

 FUNC_0(VAR_1, VAR_4, VAR_0);
 for (VAR_7 = VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_7 += 32 + VAR_1[VAR_8]->len;

 FUNC_3(&VAR_6, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  struct treeent *VAR_9 = VAR_1[VAR_8];
  FUNC_2(&VAR_6, "%o %s%c", VAR_9->mode, VAR_9->name, '\0');
  FUNC_1(&VAR_6, VAR_9->oid.hash, VAR_2->rawsz);
 }

 FUNC_5(VAR_6.buf, VAR_6.len, VAR_3, VAR_5);
 FUNC_4(&VAR_6);
}

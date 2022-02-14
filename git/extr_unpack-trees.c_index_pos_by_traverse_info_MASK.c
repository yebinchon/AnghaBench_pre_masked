
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unpack_trees_options {TYPE_2__* src_index; } ;
struct traverse_info {struct unpack_trees_options* data; } ;
struct strbuf {int buf; int len; } ;
struct name_entry {int pathlen; int path; } ;
struct TYPE_4__ {TYPE_1__** cache; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,struct traverse_info*,int ,int ) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(struct name_entry *VAR_1,
          struct traverse_info *VAR_2)
{
 struct unpack_trees_options *VAR_3 = VAR_2->data;
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;

 FUNC_4(&VAR_4, VAR_2, VAR_1->path, VAR_1->pathlen);
 FUNC_3(&VAR_4, '/');
 VAR_5 = FUNC_1(VAR_3->src_index, VAR_4.buf, VAR_4.len);
 if (VAR_5 >= 0)
  FUNC_0("This is a directory and should not exist in index");
 VAR_5 = -VAR_5 - 1;
 if (!FUNC_2(VAR_3->src_index->cache[VAR_5]->name, VAR_4.buf) ||
     (VAR_5 > 0 && FUNC_2(VAR_3->src_index->cache[VAR_5-1]->name, VAR_4.buf)))
  FUNC_0("pos must point at the first entry in this directory");
 FUNC_5(&VAR_4);
 return VAR_5;
}

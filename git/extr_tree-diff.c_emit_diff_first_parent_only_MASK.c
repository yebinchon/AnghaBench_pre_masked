
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct diff_options {int (* add_remove ) (struct diff_options*,int,unsigned int,struct object_id const*,int,int ,int ) ;int (* change ) (struct diff_options*,unsigned int,int,struct object_id*,struct object_id*,int,int,int ,int ,int ) ;} ;
struct combine_diff_path {int mode; int path; struct object_id oid; struct combine_diff_parent* parent; } ;
struct combine_diff_parent {unsigned int mode; struct object_id oid; } ;


 int FUNC_0 (struct diff_options*,unsigned int,int,struct object_id*,struct object_id*,int,int,int ,int ,int ) ;
 int FUNC_1 (struct diff_options*,int,unsigned int,struct object_id const*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct diff_options *VAR_0, struct combine_diff_path *VAR_1)
{
 struct combine_diff_parent *VAR_2 = &VAR_1->parent[0];
 if (VAR_1->mode && VAR_2->mode) {
  VAR_0->change(VAR_0, VAR_2->mode, VAR_1->mode, &VAR_2->oid, &VAR_1->oid,
   1, 1, VAR_1->path, 0, 0);
 }
 else {
  const struct object_id *VAR_3;
  unsigned int VAR_4;
  int VAR_5;

  if (VAR_1->mode) {
   VAR_5 = '+';
   VAR_3 = &VAR_1->oid;
   VAR_4 = VAR_1->mode;
  } else {
   VAR_5 = '-';
   VAR_3 = &VAR_2->oid;
   VAR_4 = VAR_2->mode;
  }

  VAR_0->add_remove(VAR_0, VAR_5, VAR_4, VAR_3, 1, VAR_1->path, 0);
 }

 return 0;
}

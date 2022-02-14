
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct tag {int dummy; } ;
struct object {scalar_t__ type; } ;
struct fsck_options {int dummy; } ;
struct commit {int dummy; } ;
struct blob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct blob*,void*,unsigned long,struct fsck_options*) ;
 int FUNC_1 (struct commit*,char const*,unsigned long,struct fsck_options*) ;
 int FUNC_2 (struct tag*,char const*,unsigned long,struct fsck_options*) ;
 int FUNC_3 (struct tree*,struct fsck_options*) ;
 int FUNC_4 (struct fsck_options*,struct object*,int ,char*,...) ;

int FUNC_5(struct object *VAR_6, void *VAR_7, unsigned long VAR_8,
 struct fsck_options *VAR_9)
{
 if (!VAR_6)
  return FUNC_4(VAR_9, VAR_6, VAR_0, "no valid object to fsck");

 if (VAR_6->type == VAR_2)
  return FUNC_0((struct blob *)VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_6->type == VAR_5)
  return FUNC_3((struct tree *) VAR_6, VAR_9);
 if (VAR_6->type == VAR_3)
  return FUNC_1((struct commit *) VAR_6, (const char *) VAR_7,
   VAR_8, VAR_9);
 if (VAR_6->type == VAR_4)
  return FUNC_2((struct tag *) VAR_6, (const char *) VAR_7,
   VAR_8, VAR_9);

 return FUNC_4(VAR_9, VAR_6, VAR_1, "unknown type '%d' (internal fsck error)",
     VAR_6->type);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct tree {int object; int size; int buffer; } ;
struct object {int dummy; } ;
struct name_entry {char* path; int mode; int oid; } ;
struct fsck_options {int (* walk ) (struct object*,int ,void*,struct fsck_options*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct fsck_options*,int *) ;
 int FUNC_5 (char*,int ,char*,int ) ;
 char* FUNC_6 (struct fsck_options*,int *) ;
 scalar_t__ FUNC_7 (struct tree_desc*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct tree*) ;
 int FUNC_11 (struct fsck_options*,struct object*,char*,char const*,char*) ;
 int FUNC_12 (struct object*,int ,void*,struct fsck_options*) ;
 int FUNC_13 (struct object*,int ,void*,struct fsck_options*) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static int FUNC_15(struct tree *VAR_3, void *VAR_4, struct fsck_options *VAR_5)
{
 struct tree_desc VAR_6;
 struct name_entry VAR_7;
 int VAR_8 = 0;
 const char *VAR_9;

 if (FUNC_10(VAR_3))
  return -1;

 VAR_9 = FUNC_6(VAR_5, &VAR_3->object);
 if (FUNC_7(&VAR_6, VAR_3->buffer, VAR_3->size))
  return -1;
 while (FUNC_14(&VAR_6, &VAR_7)) {
  struct object *VAR_10;
  int VAR_11;

  if (FUNC_1(VAR_7.mode))
   continue;

  if (FUNC_0(VAR_7.mode)) {
   VAR_10 = (struct object *)FUNC_9(VAR_2, &VAR_7.oid);
   if (VAR_9 && VAR_10)
    FUNC_11(VAR_5, VAR_10, "%s%s/", VAR_9,
     VAR_7.path);
   VAR_11 = VAR_5->walk(VAR_10, VAR_1, VAR_4, VAR_5);
  }
  else if (FUNC_3(VAR_7.mode) || FUNC_2(VAR_7.mode)) {
   VAR_10 = (struct object *)FUNC_8(VAR_2, &VAR_7.oid);
   if (VAR_9 && VAR_10)
    FUNC_11(VAR_5, VAR_10, "%s%s", VAR_9,
     VAR_7.path);
   VAR_11 = VAR_5->walk(VAR_10, VAR_0, VAR_4, VAR_5);
  }
  else {
   VAR_11 = FUNC_5("in tree %s: entry %s has bad mode %.6o",
     FUNC_4(VAR_5, &VAR_3->object), VAR_7.path, VAR_7.mode);
  }
  if (VAR_11 < 0)
   return VAR_11;
  if (!VAR_8)
   VAR_8 = VAR_11;
 }
 return VAR_8;
}

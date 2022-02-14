
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* path; } ;
struct tree_desc {TYPE_1__ entry; scalar_t__ size; } ;
struct object_id {unsigned char* hash; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (struct tree_desc*,char*,unsigned long) ;
 int FUNC_5 (char const*,char const*,int) ;
 int FUNC_6 (struct object_id const*) ;
 char* FUNC_7 (struct object_id const*,int*,unsigned long*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct tree_desc*,char const**,unsigned short*) ;
 int VAR_0 ;
 int FUNC_11 (struct tree_desc*) ;
 int FUNC_12 (char*,unsigned long,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_13(const struct object_id *VAR_1, const char *VAR_2,
         const struct object_id *VAR_3, struct object_id *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 char *VAR_7;
 unsigned long VAR_8;
 struct tree_desc VAR_9;
 unsigned char *VAR_10;
 const struct object_id *VAR_11;
 struct object_id VAR_12;
 enum object_type VAR_13;
 int VAR_14;

 VAR_5 = FUNC_8(VAR_2, '/');
 VAR_6 = VAR_5 - VAR_2;
 if (*VAR_5)
  VAR_5++;

 VAR_7 = FUNC_7(VAR_1, &VAR_13, &VAR_8);
 if (!VAR_7)
  FUNC_1("cannot read tree %s", FUNC_6(VAR_1));
 FUNC_4(&VAR_9, VAR_7, VAR_8);

 VAR_10 = ((void*)0);
 while (VAR_9.size) {
  const char *VAR_15;
  unsigned short VAR_16;

  FUNC_10(&VAR_9, &VAR_15, &VAR_16);
  if (FUNC_9(VAR_15) == VAR_6 &&
      !FUNC_5(VAR_15, VAR_2, VAR_6)) {
   if (!FUNC_0(VAR_16))
    FUNC_1("entry %s in tree %s is not a tree", VAR_15,
        FUNC_6(VAR_1));
   VAR_10 = (unsigned char *)(VAR_9.entry.path +
        FUNC_9(VAR_9.entry.path) +
        1);
   break;
  }
  FUNC_11(&VAR_9);
 }
 if (!VAR_10)
  FUNC_1("entry %.*s not found in tree %s", VAR_6, VAR_2,
      FUNC_6(VAR_1));
 if (*VAR_5) {
  struct object_id VAR_17;
  FUNC_3(VAR_17.hash, VAR_10);
  VAR_14 = FUNC_13(&VAR_17, VAR_5, VAR_3, &VAR_12);
  if (VAR_14)
   return VAR_14;
  VAR_11 = &VAR_12;
 } else {
  VAR_11 = VAR_3;
 }
 FUNC_3(VAR_10, VAR_11->hash);
 VAR_14 = FUNC_12(VAR_7, VAR_8, VAR_0, VAR_4);
 FUNC_2(VAR_7);
 return VAR_14;
}

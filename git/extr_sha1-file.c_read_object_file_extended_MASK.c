
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct repository {int dummy; } ;
struct packed_git {char const* pack_name; } ;
struct object_id {int hash; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 struct packed_git* FUNC_3 (struct repository*,int ) ;
 struct object_id const* FUNC_4 (struct repository*,struct object_id const*) ;
 char const* FUNC_5 (struct object_id const*) ;
 void* FUNC_6 (struct repository*,struct object_id const*,int*,unsigned long*) ;
 int FUNC_7 (struct repository*,struct object_id const*,struct stat*,char const**) ;

void *FUNC_8(struct repository *VAR_2,
    const struct object_id *VAR_3,
    enum object_type *VAR_4,
    unsigned long *VAR_5,
    int VAR_6)
{
 void *VAR_7;
 const struct packed_git *VAR_8;
 const char *VAR_9;
 struct stat VAR_10;
 const struct object_id *VAR_11 = VAR_6 ?
  FUNC_4(VAR_2, VAR_3) : VAR_3;

 VAR_1 = 0;
 VAR_7 = FUNC_6(VAR_2, VAR_11, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_1 && VAR_1 != VAR_0)
  FUNC_2(FUNC_0("failed to read object %s"), FUNC_5(VAR_3));


 if (VAR_11 != VAR_3)
  FUNC_1(FUNC_0("replacement %s not found for %s"),
      FUNC_5(VAR_11), FUNC_5(VAR_3));

 if (!FUNC_7(VAR_2, VAR_11, &VAR_10, &VAR_9))
  FUNC_1(FUNC_0("loose object %s (stored in %s) is corrupt"),
      FUNC_5(VAR_11), VAR_9);

 if ((VAR_8 = FUNC_3(VAR_2, VAR_11->hash)) != ((void*)0))
  FUNC_1(FUNC_0("packed object %s (stored in %s) is corrupt"),
      FUNC_5(VAR_11), VAR_8->pack_name);

 return ((void*)0);
}

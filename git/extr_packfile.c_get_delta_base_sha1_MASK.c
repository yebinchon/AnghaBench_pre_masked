
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revindex_entry {int nr; } ;
struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct revindex_entry* FUNC_0 (struct packed_git*,int ) ;
 int FUNC_1 (struct packed_git*,struct pack_window**,int *,int,int ) ;
 unsigned char const* FUNC_2 (struct packed_git*,int ) ;
 unsigned char* FUNC_3 (struct packed_git*,struct pack_window**,int ,int *) ;

__attribute__((used)) static const unsigned char *FUNC_4(struct packed_git *VAR_2,
      struct pack_window **VAR_3,
      off_t VAR_4,
      enum object_type VAR_5,
      off_t VAR_6)
{
 if (VAR_5 == VAR_1) {
  unsigned char *VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, ((void*)0));
  return VAR_7;
 } else if (VAR_5 == VAR_0) {
  struct revindex_entry *VAR_8;
  off_t VAR_9 = FUNC_1(VAR_2, VAR_3, &VAR_4,
         VAR_5, VAR_6);

  if (!VAR_9)
   return ((void*)0);

  VAR_8 = FUNC_0(VAR_2, VAR_9);
  if (!VAR_8)
   return ((void*)0);

  return FUNC_2(VAR_2, VAR_8->nr);
 } else
  return ((void*)0);
}

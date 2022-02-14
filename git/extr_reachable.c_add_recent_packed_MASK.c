
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int mtime; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct object_id const*,int ,void*) ;
 struct object* FUNC_1 (int ,struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_2,
        struct packed_git *VAR_3, uint32_t VAR_4,
        void *VAR_5)
{
 struct object *VAR_6 = FUNC_1(VAR_1, VAR_2);

 if (VAR_6 && VAR_6->flags & VAR_0)
  return 0;
 FUNC_0(VAR_2, VAR_3->mtime, VAR_5);
 return 0;
}

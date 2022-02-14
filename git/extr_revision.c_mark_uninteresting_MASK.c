
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rev_info {int repo; } ;
struct packed_git {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct object* FUNC_0 (int ,struct object_id const*) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_2,
         struct packed_git *VAR_3,
         uint32_t VAR_4,
         void *VAR_5)
{
 struct rev_info *VAR_6 = VAR_5;
 struct object *VAR_7 = FUNC_0(VAR_6->repo, VAR_2);
 VAR_7->flags |= VAR_1 | VAR_0;
 return 0;
}

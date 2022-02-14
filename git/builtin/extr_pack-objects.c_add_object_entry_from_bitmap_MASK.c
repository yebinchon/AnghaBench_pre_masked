
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int dummy; } ;
struct object_id {int dummy; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (struct object_id const*,int,int ,int ,int ,struct packed_git*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct object_id const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct object_id const*,int ,struct packed_git**,int *) ;

__attribute__((used)) static int FUNC_4(const struct object_id *VAR_2,
     enum object_type VAR_3,
     int VAR_4, uint32_t VAR_5,
     struct packed_git *VAR_6, off_t VAR_7)
{
 FUNC_1(VAR_1, ++VAR_0);

 if (FUNC_2(VAR_2, 0))
  return 0;

 if (!FUNC_3(VAR_2, 0, &VAR_6, &VAR_7))
  return 0;

 FUNC_0(VAR_2, VAR_3, VAR_5, 0, 0, VAR_6, VAR_7);
 return 1;
}

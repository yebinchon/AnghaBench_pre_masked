
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {unsigned char* index_data; } ;
struct object_id {int hash; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct object_id*,struct packed_git*,int *) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (struct packed_git*,int ) ;
 scalar_t__ FUNC_3 (struct packed_git*) ;

off_t FUNC_4(const unsigned char *VAR_0,
      struct packed_git *VAR_1)
{
 const unsigned char *VAR_2 = VAR_1->index_data;
 struct object_id VAR_3;
 uint32_t VAR_4;

 if (!VAR_2) {
  if (FUNC_3(VAR_1))
   return 0;
 }

 FUNC_1(VAR_3.hash, VAR_0);
 if (FUNC_0(&VAR_3, VAR_1, &VAR_4))
  return FUNC_2(VAR_1, VAR_4);
 return 0;
}

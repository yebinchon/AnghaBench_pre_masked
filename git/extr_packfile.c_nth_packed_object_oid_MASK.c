
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct packed_git {int dummy; } ;
typedef struct object_id {int hash; } const object_id ;


 int FUNC_0 (int ,unsigned char const*) ;
 unsigned char* FUNC_1 (struct packed_git*,int ) ;

const struct object_id *FUNC_2(struct object_id *VAR_0,
           struct packed_git *VAR_1,
           uint32_t VAR_2)
{
 const unsigned char *VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 FUNC_0(VAR_0->hash, VAR_3);
 return VAR_0;
}

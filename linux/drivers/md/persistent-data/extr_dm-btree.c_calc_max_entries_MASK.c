
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct node_header {int dummy; } ;



__attribute__((used)) static uint32_t FUNC_0(size_t VAR_0, size_t VAR_1)
{
 uint32_t VAR_2, VAR_3;
 size_t VAR_4 = sizeof(uint64_t) + VAR_0;

 VAR_1 -= sizeof(struct node_header);
 VAR_2 = VAR_1 / VAR_4;
 VAR_3 = VAR_2 / 3;

 return 3 * VAR_3;
}

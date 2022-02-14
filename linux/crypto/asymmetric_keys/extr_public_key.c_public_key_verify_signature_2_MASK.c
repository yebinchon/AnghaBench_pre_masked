
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct public_key_signature {int dummy; } ;
struct public_key {int dummy; } ;
struct TYPE_2__ {struct public_key** data; } ;
struct key {TYPE_1__ payload; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct public_key const*,struct public_key_signature const*) ;

__attribute__((used)) static int FUNC_1(const struct key *VAR_1,
      const struct public_key_signature *VAR_2)
{
 const struct public_key *VAR_3 = VAR_1->payload.data[VAR_0];
 return FUNC_0(VAR_3, VAR_2);
}

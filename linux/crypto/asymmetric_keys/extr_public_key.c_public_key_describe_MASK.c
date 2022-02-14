
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct public_key {int pkey_algo; int id_type; } ;
struct TYPE_2__ {struct public_key** data; } ;
struct key {TYPE_1__ payload; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct key *VAR_1,
    struct seq_file *VAR_2)
{
 struct public_key *VAR_3 = VAR_1->payload.data[VAR_0];

 if (VAR_3)
  FUNC_0(VAR_2, "%s.%s", VAR_3->id_type, VAR_3->pkey_algo);
}

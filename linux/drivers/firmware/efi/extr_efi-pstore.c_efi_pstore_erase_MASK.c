
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct pstore_record {int type; int part; int count; TYPE_1__ time; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int,int,long long,...) ;

__attribute__((used)) static int FUNC_2(struct pstore_record *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4;

 FUNC_1(VAR_3, sizeof(VAR_3), "dump-type%u-%u-%d-%lld",
   VAR_2->type, VAR_2->part, VAR_2->count,
   (long long)VAR_2->time.tv_sec);
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != -VAR_1)
  return VAR_4;

 FUNC_1(VAR_3, sizeof(VAR_3), "dump-type%u-%u-%lld",
  VAR_2->type, VAR_2->part, (long long)VAR_2->time.tv_sec);
 VAR_4 = FUNC_0(VAR_3);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_config {int astate; struct table_algo* ta; } ;
struct table_algo {int (* dump_tentry ) (int ,int ,void*,int *) ;} ;
struct dump_args {int farg; int tent; int (* f ) (int *,int ) ;int ti; struct table_config* tc; } ;


 int FUNC_0 (int ,int ,void*,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1)
{
 struct dump_args *VAR_2;
 struct table_config *VAR_3;
 struct table_algo *VAR_4;
 int VAR_5;

 VAR_2 = (struct dump_args *)VAR_1;

 VAR_3 = VAR_2->tc;
 VAR_4 = VAR_3->ta;

 VAR_5 = VAR_4->dump_tentry(VAR_3->astate, VAR_2->ti, VAR_0, &VAR_2->tent);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_2->f(&VAR_2->tent, VAR_2->farg);

 return (0);
}

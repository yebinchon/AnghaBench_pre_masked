
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct do_for_each_ref_help {int (* fn ) (char const*,struct object_id const*,int,int ) ;int cb_data; } ;


 int FUNC_0 (char const*,struct object_id const*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct repository *VAR_0,
      const char *VAR_1,
      const struct object_id *VAR_2,
      int VAR_3,
      void *VAR_4)
{
 struct do_for_each_ref_help *VAR_5 = VAR_4;

 return VAR_5->fn(VAR_1, VAR_2, VAR_3, VAR_5->cb_data);
}

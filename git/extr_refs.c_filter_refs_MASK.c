
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {int (* fn ) (char const*,struct object_id const*,int,int ) ;int cb_data; scalar_t__ prefix; int pattern; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char const*,scalar_t__,char const**) ;
 int FUNC_1 (char const*,struct object_id const*,int,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const struct object_id *VAR_1,
      int VAR_2, void *VAR_3)
{
 struct ref_filter *VAR_4 = (struct ref_filter *)VAR_3;

 if (FUNC_2(VAR_4->pattern, VAR_0, 0))
  return 0;
 if (VAR_4->prefix)
  FUNC_0(VAR_0, VAR_4->prefix, &VAR_0);
 return VAR_4->fn(VAR_0, VAR_1, VAR_2, VAR_4->cb_data);
}

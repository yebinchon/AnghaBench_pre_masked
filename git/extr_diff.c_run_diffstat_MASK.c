
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct diffstat_t {int dummy; } ;
struct diff_options {TYPE_1__* repo; scalar_t__ prefix_length; } ;
struct diff_filepair {TYPE_2__* two; TYPE_2__* one; } ;
struct TYPE_6__ {char const* path; } ;
struct TYPE_5__ {int index; } ;


 scalar_t__ FUNC_0 (struct diff_filepair*) ;
 int FUNC_1 (char const*,char const*,TYPE_2__*,TYPE_2__*,struct diffstat_t*,struct diff_options*,struct diff_filepair*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (scalar_t__,char const**,char const**) ;

__attribute__((used)) static void FUNC_5(struct diff_filepair *VAR_0, struct diff_options *VAR_1,
    struct diffstat_t *VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;

 if (FUNC_0(VAR_0)) {

  FUNC_1(VAR_0->one->path, ((void*)0), ((void*)0), ((void*)0),
     VAR_2, VAR_1, VAR_0);
  return;
 }

 VAR_3 = VAR_0->one->path;
 VAR_4 = (FUNC_3(VAR_3, VAR_0->two->path) ? VAR_0->two->path : ((void*)0));

 if (VAR_1->prefix_length)
  FUNC_4(VAR_1->prefix_length, &VAR_3, &VAR_4);

 FUNC_2(VAR_0->one, VAR_1->repo->index);
 FUNC_2(VAR_0->two, VAR_1->repo->index);

 FUNC_1(VAR_3, VAR_4, VAR_0->one, VAR_0->two,
    VAR_2, VAR_1, VAR_0);
}

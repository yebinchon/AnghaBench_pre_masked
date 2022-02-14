
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int repo; } ;
struct rev_info {TYPE_1__ diffopt; } ;
struct range_set {int dummy; } ;
struct TYPE_13__ {scalar_t__ nr; } ;
struct line_log_data {TYPE_4__ ranges; scalar_t__ path; struct line_log_data* next; } ;
struct TYPE_11__ {scalar_t__ nr; } ;
struct diff_ranges {TYPE_2__ parent; } ;
struct diff_filepair {TYPE_7__* one; TYPE_7__* two; } ;
struct TYPE_12__ {char* ptr; scalar_t__ size; } ;
typedef TYPE_3__ mmfile_t ;
struct TYPE_14__ {char* data; scalar_t__ path; scalar_t__ size; scalar_t__ oid_valid; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*,struct diff_ranges*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,TYPE_7__*,int ) ;
 int FUNC_4 (struct diff_ranges*) ;
 int FUNC_5 (struct diff_ranges*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct range_set*,int ) ;
 int FUNC_8 (struct range_set*,TYPE_4__*,struct diff_ranges*,struct diff_ranges**) ;
 int FUNC_9 (TYPE_4__*,struct range_set*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct rev_info *VAR_0,
     struct diff_filepair *VAR_1,
     struct line_log_data *VAR_2,
     struct diff_ranges **VAR_3)
{
 struct line_log_data *VAR_4 = VAR_2;
 struct range_set VAR_5;
 struct diff_ranges VAR_6;
 mmfile_t VAR_7, VAR_8;

 FUNC_0(VAR_1->two->path);
 while (VAR_4) {
  FUNC_0(VAR_4->path);
  if (!FUNC_11(VAR_4->path, VAR_1->two->path))
   break;
  VAR_4 = VAR_4->next;
 }

 if (!VAR_4)
  return 0;
 if (VAR_4->ranges.nr == 0)
  return 0;

 FUNC_0(VAR_1->two->oid_valid);
 FUNC_3(VAR_0->diffopt.repo, VAR_1->two, 0);
 VAR_8.ptr = VAR_1->two->data;
 VAR_8.size = VAR_1->two->size;

 if (VAR_1->one->oid_valid) {
  FUNC_3(VAR_0->diffopt.repo, VAR_1->one, 0);
  VAR_7.ptr = VAR_1->one->data;
  VAR_7.size = VAR_1->one->size;
 } else {
  VAR_7.ptr = "";
  VAR_7.size = 0;
 }

 FUNC_4(&VAR_6);
 if (FUNC_1(&VAR_7, &VAR_8, &VAR_6))
  FUNC_2("unable to generate diff for %s", VAR_1->one->path);


 FUNC_6(VAR_4->path);
 VAR_4->path = FUNC_12(VAR_1->one->path);

 FUNC_7(&VAR_5, 0);
 FUNC_8(&VAR_5, &VAR_4->ranges, &VAR_6, VAR_3);
 FUNC_10(&VAR_4->ranges);
 FUNC_9(&VAR_4->ranges, &VAR_5);

 FUNC_5(&VAR_6);

 return ((*VAR_3)->parent.nr > 0);
}

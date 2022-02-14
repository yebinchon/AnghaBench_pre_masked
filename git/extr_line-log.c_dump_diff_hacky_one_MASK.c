
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct diff_options {int file; int repo; int use_color; } ;
struct rev_info {struct diff_options diffopt; } ;
struct TYPE_11__ {unsigned int nr; TYPE_3__* ranges; } ;
struct TYPE_13__ {unsigned int nr; TYPE_5__* ranges; } ;
struct TYPE_9__ {TYPE_1__* ranges; } ;
struct diff_ranges {TYPE_6__ target; TYPE_2__ parent; } ;
struct line_log_data {TYPE_4__ ranges; struct diff_ranges diff; struct diff_filepair* pair; } ;
struct diff_filepair {TYPE_7__* two; TYPE_7__* one; } ;
struct TYPE_14__ {char* path; int data; scalar_t__ oid_valid; } ;
struct TYPE_12__ {long end; long start; } ;
struct TYPE_10__ {long start; long end; } ;
struct TYPE_8__ {long start; long end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_7__*,long*,unsigned long**) ;
 int FUNC_2 (int ,char*,char*,char const*,...) ;
 int FUNC_3 (unsigned long*) ;
 char* FUNC_4 (struct diff_options*) ;
 int FUNC_5 (char*,char,long,unsigned long*,int ,char const*,char const*,int ) ;

__attribute__((used)) static void FUNC_6(struct rev_info *VAR_6, struct line_log_data *VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0;
 long VAR_10, VAR_11;
 unsigned long *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct diff_filepair *VAR_14 = VAR_7->pair;
 struct diff_ranges *VAR_15 = &VAR_7->diff;

 struct diff_options *VAR_16 = &VAR_6->diffopt;
 char *VAR_17 = FUNC_4(VAR_16);
 const char *VAR_18 = FUNC_0(VAR_16->use_color, VAR_5);
 const char *VAR_19 = FUNC_0(VAR_16->use_color, VAR_3);
 const char *VAR_20 = FUNC_0(VAR_16->use_color, VAR_4);
 const char *VAR_21 = FUNC_0(VAR_16->use_color, VAR_2);
 const char *VAR_22 = FUNC_0(VAR_16->use_color, VAR_1);
 const char *VAR_23 = FUNC_0(VAR_16->use_color, VAR_0);

 if (!VAR_14 || !VAR_15)
  return;

 if (VAR_14->one->oid_valid)
  FUNC_1(VAR_6->diffopt.repo, VAR_14->one, &VAR_10, &VAR_12);
 FUNC_1(VAR_6->diffopt.repo, VAR_14->two, &VAR_11, &VAR_13);

 FUNC_2(VAR_16->file, "%s%sdiff --git a/%s b/%s%s\n", VAR_17, VAR_20, VAR_14->one->path, VAR_14->two->path, VAR_18);
 FUNC_2(VAR_16->file, "%s%s--- %s%s%s\n", VAR_17, VAR_20,
        VAR_14->one->oid_valid ? "a/" : "",
        VAR_14->one->oid_valid ? VAR_14->one->path : "/dev/null",
        VAR_18);
 FUNC_2(VAR_16->file, "%s%s+++ b/%s%s\n", VAR_17, VAR_20, VAR_14->two->path, VAR_18);
 for (VAR_8 = 0; VAR_8 < VAR_7->ranges.nr; VAR_8++) {
  long VAR_24, VAR_25;
  long VAR_26 = VAR_7->ranges.ranges[VAR_8].start;
  long VAR_27 = VAR_7->ranges.ranges[VAR_8].end;
  long VAR_28 = VAR_26;
  unsigned int VAR_29;

  while (VAR_9 < VAR_15->target.nr && VAR_15->target.ranges[VAR_9].end < VAR_26)
   VAR_9++;
  if (VAR_9 == VAR_15->target.nr || VAR_15->target.ranges[VAR_9].start > VAR_27)
   continue;


  VAR_29 = VAR_9;
  while (VAR_29 < VAR_15->target.nr && VAR_15->target.ranges[VAR_29].start < VAR_27)
   VAR_29++;
  if (VAR_29 > VAR_9)
   VAR_29--;
  if (VAR_26 < VAR_15->target.ranges[VAR_9].start)
   VAR_24 = VAR_15->parent.ranges[VAR_9].start - (VAR_15->target.ranges[VAR_9].start-VAR_26);
  else
   VAR_24 = VAR_15->parent.ranges[VAR_9].start;
  if (VAR_27 > VAR_15->target.ranges[VAR_29].end)
   VAR_25 = VAR_15->parent.ranges[VAR_29].end + (VAR_27-VAR_15->target.ranges[VAR_29].end);
  else
   VAR_25 = VAR_15->parent.ranges[VAR_29].end;

  if (!VAR_24 && !VAR_25) {
   VAR_24 = -1;
   VAR_25 = -1;
  }


  FUNC_2(VAR_16->file, "%s%s@@ -%ld,%ld +%ld,%ld @@%s\n",
         VAR_17, VAR_19,
         VAR_24+1, VAR_25-VAR_24, VAR_26+1, VAR_27-VAR_26,
         VAR_18);
  while (VAR_9 < VAR_15->target.nr && VAR_15->target.ranges[VAR_9].start < VAR_27) {
   int VAR_30;
   for (; VAR_28 < VAR_15->target.ranges[VAR_9].start; VAR_28++)
    FUNC_5(VAR_17, ' ', VAR_28, VAR_13, VAR_14->two->data,
        VAR_23, VAR_18, VAR_16->file);
   for (VAR_30 = VAR_15->parent.ranges[VAR_9].start; VAR_30 < VAR_15->parent.ranges[VAR_9].end; VAR_30++)
    FUNC_5(VAR_17, '-', VAR_30, VAR_12, VAR_14->one->data,
        VAR_21, VAR_18, VAR_16->file);
   for (; VAR_28 < VAR_15->target.ranges[VAR_9].end && VAR_28 < VAR_27; VAR_28++)
    FUNC_5(VAR_17, '+', VAR_28, VAR_13, VAR_14->two->data,
        VAR_22, VAR_18, VAR_16->file);
   VAR_9++;
  }
  for (; VAR_28 < VAR_27; VAR_28++)
   FUNC_5(VAR_17, ' ', VAR_28, VAR_13, VAR_14->two->data,
       VAR_23, VAR_18, VAR_16->file);
 }

 FUNC_3(VAR_12);
 FUNC_3(VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int lock; int valid_paths; } ;
struct path_selector {struct selector* context; } ;
struct path_info {unsigned int repeat_count; unsigned int relative_throughput; int list; int in_flight_size; struct dm_path* path; } ;
struct dm_path {struct path_info* pscontext; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct path_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (char*,char*,unsigned int*,char*) ;

__attribute__((used)) static int FUNC_7(struct path_selector *VAR_5, struct dm_path *VAR_6,
         int VAR_7, char **VAR_8, char **VAR_9)
{
 struct selector *VAR_10 = VAR_5->context;
 struct path_info *VAR_11;
 unsigned VAR_12 = VAR_4;
 unsigned VAR_13 = 1;
 char VAR_14;
 unsigned long VAR_15;
 if (VAR_7 > 2) {
  *VAR_9 = "service-time ps: incorrect number of arguments";
  return -VAR_0;
 }

 if (VAR_7 && (FUNC_6(VAR_8[0], "%u%c", &VAR_12, &VAR_14) != 1)) {
  *VAR_9 = "service-time ps: invalid repeat count";
  return -VAR_0;
 }

 if (VAR_12 > 1) {
  FUNC_0("repeat_count > 1 is deprecated, using 1 instead");
  VAR_12 = 1;
 }

 if ((VAR_7 == 2) &&
     (FUNC_6(VAR_8[1], "%u%c", &VAR_13, &VAR_14) != 1 ||
      VAR_13 > VAR_3)) {
  *VAR_9 = "service-time ps: invalid relative_throughput value";
  return -VAR_0;
 }


 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  *VAR_9 = "service-time ps: Error allocating path context";
  return -VAR_1;
 }

 VAR_11->path = VAR_6;
 VAR_11->repeat_count = VAR_12;
 VAR_11->relative_throughput = VAR_13;
 FUNC_1(&VAR_11->in_flight_size, 0);

 VAR_6->pscontext = VAR_11;

 FUNC_4(&VAR_10->lock, VAR_15);
 FUNC_3(&VAR_11->list, &VAR_10->valid_paths);
 FUNC_5(&VAR_10->lock, VAR_15);

 return 0;
}

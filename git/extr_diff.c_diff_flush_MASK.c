
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diffstat_t {int dummy; } ;
struct diff_queue_struct {int nr; struct diff_filepair** queue; } ;
struct TYPE_2__ {int has_changes; scalar_t__ diff_from_contents; scalar_t__ exit_with_status; scalar_t__ dirstat_by_line; } ;
struct diff_options {int output_format; int close_file; TYPE_1__ flags; scalar_t__ found_changes; int file; int format_callback_data; int (* format_callback ) (struct diff_queue_struct*,struct diff_options*,int ) ;scalar_t__ stat_sep; scalar_t__ color_moved; } ;
struct diff_filepair {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct diff_queue_struct*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct diff_filepair*) ;
 int FUNC_2 (struct diff_filepair*,struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 int FUNC_4 (struct diff_filepair*,struct diff_options*,struct diffstat_t*) ;
 int FUNC_5 (struct diff_filepair*) ;
 struct diff_queue_struct VAR_14 ;
 int FUNC_6 (struct diff_options*,struct diff_filepair*) ;
 int FUNC_7 (struct diff_options*,int ,int *,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct diff_filepair*,struct diff_options*) ;
 int FUNC_10 (struct diff_filepair**) ;
 int FUNC_11 (struct diffstat_t*) ;
 int FUNC_12 (struct diff_queue_struct*) ;
 int FUNC_13 (struct diffstat_t*,int ,int) ;
 int FUNC_14 (struct diff_options*) ;
 int FUNC_15 (struct diffstat_t*,struct diff_options*) ;
 int FUNC_16 (struct diffstat_t*,struct diff_options*) ;
 int FUNC_17 (struct diffstat_t*,struct diff_options*) ;
 int FUNC_18 (struct diffstat_t*,struct diff_options*) ;
 int FUNC_19 (struct diff_queue_struct*,struct diff_options*,int ) ;
 int FUNC_20 (char*,char*) ;

void FUNC_21(struct diff_options *VAR_15)
{
 struct diff_queue_struct *VAR_16 = &VAR_14;
 int VAR_17, VAR_18 = VAR_15->output_format;
 int VAR_19 = 0;
 int VAR_20 = 0;





 if (!VAR_16->nr)
  goto free_queue;

 if (VAR_18 & (VAR_9 |
        VAR_4 |
        VAR_5 |
        VAR_1)) {
  for (VAR_17 = 0; VAR_17 < VAR_16->nr; VAR_17++) {
   struct diff_filepair *VAR_21 = VAR_16->queue[VAR_17];
   if (FUNC_1(VAR_21))
    FUNC_9(VAR_21, VAR_15);
  }
  VAR_19++;
 }

 if (VAR_18 & VAR_3 && VAR_15->flags.dirstat_by_line)
  VAR_20 = 1;

 if (VAR_18 & (VAR_2|VAR_10|VAR_7) ||
     VAR_20) {
  struct diffstat_t VAR_22;

  FUNC_13(&VAR_22, 0, sizeof(struct diffstat_t));
  for (VAR_17 = 0; VAR_17 < VAR_16->nr; VAR_17++) {
   struct diff_filepair *VAR_23 = VAR_16->queue[VAR_17];
   if (FUNC_1(VAR_23))
    FUNC_4(VAR_23, VAR_15, &VAR_22);
  }
  if (VAR_18 & VAR_7)
   FUNC_16(&VAR_22, VAR_15);
  if (VAR_18 & VAR_2)
   FUNC_18(&VAR_22, VAR_15);
  if (VAR_18 & VAR_10)
   FUNC_17(&VAR_22, VAR_15);
  if (VAR_18 & VAR_3 && VAR_20)
   FUNC_15(&VAR_22, VAR_15);
  FUNC_11(&VAR_22);
  VAR_19++;
 }
 if ((VAR_18 & VAR_3) && !VAR_20)
  FUNC_14(VAR_15);

 if (VAR_18 & VAR_11 && !FUNC_12(VAR_16)) {
  for (VAR_17 = 0; VAR_17 < VAR_16->nr; VAR_17++) {
   FUNC_6(VAR_15, VAR_16->queue[VAR_17]);
  }
  VAR_19++;
 }

 if (VAR_18 & VAR_6 &&
     VAR_15->flags.exit_with_status &&
     VAR_15->flags.diff_from_contents) {





  if (VAR_15->close_file)
   FUNC_8(VAR_15->file);
  VAR_15->file = FUNC_20("/dev/null", "w");
  VAR_15->close_file = 1;
  VAR_15->color_moved = 0;
  for (VAR_17 = 0; VAR_17 < VAR_16->nr; VAR_17++) {
   struct diff_filepair *VAR_24 = VAR_16->queue[VAR_17];
   if (FUNC_1(VAR_24))
    FUNC_2(VAR_24, VAR_15);
   if (VAR_15->found_changes)
    break;
  }
 }

 if (VAR_18 & VAR_8) {
  if (VAR_19) {
   FUNC_7(VAR_15, VAR_12, ((void*)0), 0, 0);
   if (VAR_15->stat_sep)

    FUNC_7(VAR_15, VAR_13,
       ((void*)0), 0, 0);
  }

  FUNC_3(VAR_15);
 }

 if (VAR_18 & VAR_0)
  VAR_15->format_callback(VAR_16, VAR_15, VAR_15->format_callback_data);

 for (VAR_17 = 0; VAR_17 < VAR_16->nr; VAR_17++)
  FUNC_5(VAR_16->queue[VAR_17]);
free_queue:
 FUNC_10(VAR_16->queue);
 FUNC_0(VAR_16);
 if (VAR_15->close_file)
  FUNC_8(VAR_15->file);






 if (VAR_15->flags.diff_from_contents) {
  if (VAR_15->found_changes)
   VAR_15->flags.has_changes = 1;
  else
   VAR_15->flags.has_changes = 0;
 }
}

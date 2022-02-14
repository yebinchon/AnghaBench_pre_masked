
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_output_handle {int dummy; } ;
struct hws_trailer_entry {int flags; } ;
struct aux_buffer {unsigned long head; unsigned long alert_mark; } ;


 unsigned long FUNC_0 (struct aux_buffer*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hws_trailer_entry* FUNC_1 (struct aux_buffer*,unsigned long) ;
 int FUNC_2 (int ,int,char*,unsigned long) ;
 int FUNC_3 (struct perf_output_handle*,unsigned long) ;
 struct aux_buffer* FUNC_4 (struct perf_output_handle*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct perf_output_handle *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 struct aux_buffer *VAR_8;
 struct hws_trailer_entry *VAR_9;

 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8)
  return;

 VAR_6 = FUNC_0(VAR_8);
 for (VAR_5 = 0, VAR_7 = VAR_8->head; VAR_5 < VAR_6; VAR_5++, VAR_7++) {
  VAR_9 = FUNC_1(VAR_8, VAR_7);
  if (!(VAR_9->flags & VAR_2))
   break;
 }

 FUNC_3(VAR_4, VAR_5 << VAR_0);


 VAR_9 = FUNC_1(VAR_8, VAR_8->alert_mark);
 VAR_9->flags &= ~VAR_1;

 FUNC_2(VAR_3, 6, "aux_output_end: collect %lx SDBs\n", VAR_5);
}

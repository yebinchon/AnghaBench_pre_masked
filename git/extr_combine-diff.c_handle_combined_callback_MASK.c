
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {int alloc; int nr; int * queue; } ;
struct diff_options {int format_callback_data; int (* format_callback ) (struct diff_queue_struct*,struct diff_options*,int ) ;} ;
struct diff_filepair {int dummy; } ;
struct combine_diff_path {struct combine_diff_path* next; } ;


 int FUNC_0 (struct combine_diff_path*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct diff_queue_struct*,struct diff_options*,int ) ;
 int * FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct diff_options *VAR_0,
         struct combine_diff_path *VAR_1,
         int VAR_2,
         int VAR_3)
{
 struct combine_diff_path *VAR_4;
 struct diff_queue_struct VAR_5;
 int VAR_6;

 VAR_5.queue = FUNC_4(VAR_3, sizeof(struct diff_filepair *));
 VAR_5.alloc = VAR_3;
 VAR_5.nr = VAR_3;
 for (VAR_6 = 0, VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
  VAR_5.queue[VAR_6++] = FUNC_0(VAR_4, VAR_2);
 VAR_0->format_callback(&VAR_5, VAR_0, VAR_0->format_callback_data);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_2(VAR_5.queue[VAR_6]);
 FUNC_1(VAR_5.queue);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; } ;
struct window {TYPE_1__ out; int data; int instructions; } ;
struct sliding_view {int dummy; } ;
struct line_buffer {int dummy; } ;
typedef int off_t ;
typedef int FILE ;


 struct window FUNC_0 (struct sliding_view*) ;
 scalar_t__ FUNC_1 (struct window*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct line_buffer*,int *,int *,size_t) ;
 scalar_t__ FUNC_5 (struct line_buffer*,size_t*,int *) ;
 int FUNC_6 (TYPE_1__*,size_t) ;
 int FUNC_7 (struct window*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_9(struct line_buffer *VAR_0, off_t *VAR_1,
       struct sliding_view *VAR_2, FILE *VAR_3)
{
 int VAR_4 = -1;
 struct window VAR_5 = FUNC_0(VAR_2);
 size_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 FUNC_2(VAR_1);


 if (FUNC_5(VAR_0, &VAR_6, VAR_1) ||
     FUNC_5(VAR_0, &VAR_7, VAR_1) ||
     FUNC_5(VAR_0, &VAR_8, VAR_1) ||
     FUNC_4(VAR_0, VAR_1, &VAR_5.instructions, VAR_7) ||
     FUNC_4(VAR_0, VAR_1, &VAR_5.data, VAR_8))
  goto error_out;
 FUNC_6(&VAR_5.out, VAR_6);
 if (FUNC_1(&VAR_5))
  goto error_out;
 if (VAR_5.out.len != VAR_6) {
  VAR_4 = FUNC_3("invalid delta: incorrect postimage length");
  goto error_out;
 }
 if (FUNC_8(&VAR_5.out, VAR_3))
  goto error_out;
 VAR_4 = 0;
error_out:
 FUNC_7(&VAR_5);
 return VAR_4;
}

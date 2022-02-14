
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t high; } ;
struct bufferevent {int input; int output; TYPE_1__ wm_read; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bufferevent*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,size_t) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct bufferevent *VAR_2, struct bufferevent *VAR_3,
    int VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;

 FUNC_8(VAR_2->output, 1);
 FUNC_8(VAR_3->input, 0);

 if (VAR_3->wm_read.high) {
  VAR_5 = FUNC_6(VAR_3->input);
  if (VAR_5 < VAR_3->wm_read.high) {
   VAR_6 = VAR_3->wm_read.high - VAR_5;
   FUNC_7(VAR_2->output, VAR_3->input, VAR_6);
  } else {
   if (!VAR_4)
    goto done;
   VAR_6 = FUNC_6(VAR_2->output);
   FUNC_4(VAR_3->input, VAR_2->output);
  }
 } else {
  VAR_6 = FUNC_6(VAR_2->output);
  FUNC_4(VAR_3->input, VAR_2->output);
 }

 if (VAR_6) {
  FUNC_1(VAR_3);

  if (FUNC_6(VAR_3->output))
   FUNC_2(VAR_3);
  else
   FUNC_0(VAR_3);
 }

 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_3(VAR_2, VAR_1, 0);
done:
 FUNC_5(VAR_2->output, 1);
 FUNC_5(VAR_3->input, 0);
}

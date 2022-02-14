
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent_private {int * read_watermarks_cb; } ;
struct TYPE_4__ {size_t low; size_t high; } ;
struct TYPE_3__ {size_t low; size_t high; } ;
struct bufferevent {int input; TYPE_2__ wm_read; TYPE_1__ wm_write; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*) ;
 int * FUNC_5 (int ,int ,struct bufferevent*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int *,int) ;
 size_t FUNC_8 (int ) ;

void
FUNC_9(struct bufferevent *VAR_5, short VAR_6,
    size_t VAR_7, size_t VAR_8)
{
 struct bufferevent_private *VAR_9 = FUNC_2(VAR_5);

 FUNC_0(VAR_5);
 if (VAR_6 & VAR_3) {
  VAR_5->wm_write.low = VAR_7;
  VAR_5->wm_write.high = VAR_8;
 }

 if (VAR_6 & VAR_2) {
  VAR_5->wm_read.low = VAR_7;
  VAR_5->wm_read.high = VAR_8;

  if (VAR_8) {




   if (VAR_9->read_watermarks_cb == ((void*)0)) {
    VAR_9->read_watermarks_cb =
        FUNC_5(VAR_5->input,
          VAR_4,
          VAR_5);
   }
   FUNC_7(VAR_5->input,
          VAR_9->read_watermarks_cb,
          VAR_0|VAR_1);

   if (FUNC_8(VAR_5->input) >= VAR_8)
    FUNC_3(VAR_5);
   else if (FUNC_8(VAR_5->input) < VAR_8)
    FUNC_4(VAR_5);
  } else {

   if (VAR_9->read_watermarks_cb)
    FUNC_6(VAR_5->input,
        VAR_9->read_watermarks_cb,
        VAR_0);
   FUNC_4(VAR_5);
  }
 }
 FUNC_1(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {scalar_t__ refcnt; } ;
struct bufferevent_filtered {int inbuf_cb; scalar_t__ got_eof; } ;
struct bufferevent {int input; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;


 int VAR_0 ;
 int VAR_1 ;
 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct bufferevent_filtered*,int,int*) ;
 scalar_t__ FUNC_3 (struct bufferevent_filtered*,int) ;
 int FUNC_4 (struct bufferevent*,int ,int ) ;
 struct bufferevent* FUNC_5 (struct bufferevent_filtered*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct bufferevent *VAR_4, void *VAR_5)
{
 struct bufferevent_filtered *VAR_6 = VAR_5;
 enum bufferevent_filter_result VAR_7;
 enum bufferevent_flush_mode VAR_8;
 struct bufferevent *VAR_9 = FUNC_5(VAR_6);
 struct bufferevent_private *VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = 0;


 FUNC_1(VAR_10->refcnt >= 0);


 if (VAR_10->refcnt > 0) {

  if (VAR_6->got_eof)
   VAR_8 = VAR_0;
  else
   VAR_8 = VAR_1;


  VAR_7 = FUNC_2(VAR_6, VAR_8, &VAR_11);
  (void)VAR_7;




  if (VAR_11) {
   FUNC_4(VAR_9, VAR_3, 0);
   if (FUNC_7(VAR_4->input) > 0 &&
    FUNC_3(VAR_6, VAR_8)) {





    FUNC_6(VAR_9->input, VAR_6->inbuf_cb,
     VAR_2);
   }
  }
 }
}

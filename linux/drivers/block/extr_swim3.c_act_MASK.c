
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_state {int state; int req_cyl; int cur_cyl; int expect_cyl; int settle_time; int retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct floppy_state*) ;
 int FUNC_1 (struct floppy_state*,int) ;

 int FUNC_2 (struct floppy_state*,int,int ) ;
 int VAR_3 ;

 int FUNC_3 (struct floppy_state*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct floppy_state*,int ,int ) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct floppy_state*,int ) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(struct floppy_state *VAR_4)
{
 for (;;) {
  FUNC_4("  act loop, state=%d, req_cyl=%d, cur_cyl=%d\n",
     VAR_4->state, VAR_4->req_cyl, VAR_4->cur_cyl);

  switch (VAR_4->state) {
  case 132:
   return;

  case 130:
   if (FUNC_7(VAR_4, VAR_2)) {
    FUNC_4("%s", "    locate track 0\n");
    VAR_4->cur_cyl = 0;
    if (VAR_4->req_cyl == 0)
     VAR_4->state = 133;
    else
     VAR_4->state = 129;
    break;
   }
   FUNC_0(VAR_4);
   return;

  case 129:
   if (VAR_4->cur_cyl < 0) {
    VAR_4->expect_cyl = -1;
    VAR_4->state = 130;
    break;
   }
   if (VAR_4->req_cyl == VAR_4->cur_cyl) {
    FUNC_8("%s", "Whoops, seeking 0\n");
    VAR_4->state = 133;
    break;
   }
   FUNC_1(VAR_4, VAR_4->req_cyl - VAR_4->cur_cyl);
   return;

  case 128:

   VAR_4->settle_time = (VAR_1 + 32) / 33;
   FUNC_2(VAR_4, VAR_4->settle_time, VAR_3);
   return;

  case 133:
   if (VAR_4->cur_cyl != VAR_4->req_cyl) {
    if (VAR_4->retries > 5) {
     FUNC_6("Wrong cylinder in transfer, want: %d got %d\n",
        VAR_4->req_cyl, VAR_4->cur_cyl);
     FUNC_5(VAR_4, VAR_0, 0);
     VAR_4->state = 132;
     return;
    }
    VAR_4->state = 129;
    break;
   }
   FUNC_3(VAR_4);
   return;

  case 131:
   FUNC_1(VAR_4, -5);
   return;

  default:
   FUNC_6("Unknown state %d\n", VAR_4->state);
   return;
  }
 }
}

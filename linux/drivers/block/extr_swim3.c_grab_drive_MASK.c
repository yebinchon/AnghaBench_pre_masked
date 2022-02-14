
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_state {scalar_t__ state; int wanted; int wait; } ;
typedef enum swim_state { ____Placeholder_swim_state } swim_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct floppy_state *VAR_4, enum swim_state VAR_5,
        int VAR_6)
{
 unsigned long VAR_7;

 FUNC_2("%s", "-> grab drive\n");

 FUNC_0(&VAR_3, VAR_7);
 if (VAR_4->state != VAR_2 && VAR_4->state != VAR_1) {
  ++VAR_4->wanted;

  if (!VAR_6)
   FUNC_4(VAR_4->wait,
                                        VAR_4->state == VAR_1,
                                        VAR_3);
  else if (FUNC_3(VAR_4->wait,
     VAR_4->state == VAR_1,
     VAR_3)) {
   --VAR_4->wanted;
   FUNC_1(&VAR_3, VAR_7);
   return -VAR_0;
  }
  --VAR_4->wanted;
 }
 VAR_4->state = VAR_5;
 FUNC_1(&VAR_3, VAR_7);

 return 0;
}

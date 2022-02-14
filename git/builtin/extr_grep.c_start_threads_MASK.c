
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grep_opt {scalar_t__ debug; int output; } ;
struct TYPE_3__ {int out; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct grep_opt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct grep_opt* FUNC_4 (struct grep_opt*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ,struct grep_opt*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ) ;
 int VAR_9 ;
 int FUNC_9 (int) ;
 int * VAR_10 ;
 TYPE_1__* VAR_11 ;
 int * FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct grep_opt *VAR_12)
{
 int VAR_13;

 FUNC_7(&VAR_4, ((void*)0));
 FUNC_7(&VAR_5, ((void*)0));
 FUNC_7(&VAR_3, ((void*)0));
 FUNC_5(&VAR_0, ((void*)0));
 FUNC_5(&VAR_2, ((void*)0));
 FUNC_5(&VAR_1, ((void*)0));
 VAR_6 = 1;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11); VAR_13++) {
  FUNC_8(&VAR_11[VAR_13].out, 0);
 }

 VAR_10 = FUNC_10(VAR_7, sizeof(*VAR_10));
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  int VAR_14;
  struct grep_opt *VAR_15 = FUNC_4(VAR_12);
  VAR_15->output = VAR_9;
  if (VAR_13)
   VAR_15->debug = 0;
  FUNC_2(VAR_15);
  VAR_14 = FUNC_6(&VAR_10[VAR_13], ((void*)0), VAR_8, VAR_15);

  if (VAR_14)
   FUNC_3(FUNC_1("grep: failed to create thread: %s"),
       FUNC_9(VAR_14));
 }
}

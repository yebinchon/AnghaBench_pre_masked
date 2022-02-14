
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async {int in; int out; scalar_t__ pid; int proc_in; int proc_out; int tid; int data; int (* proc ) (int,int,int ) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__,int *) ;
 scalar_t__ FUNC_10 (int*) ;
 int VAR_6 ;
 int FUNC_11 (int *,int *,int ,struct async*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int VAR_7 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int,int ) ;

int FUNC_19(struct async *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11[2], VAR_12[2];
 int VAR_13, VAR_14;

 VAR_9 = VAR_8->in < 0;
 if (VAR_9) {
  if (FUNC_10(VAR_11) < 0) {
   if (VAR_8->out > 0)
    FUNC_1(VAR_8->out);
   return FUNC_4("cannot create pipe");
  }
  VAR_8->in = VAR_11[1];
 }

 VAR_10 = VAR_8->out < 0;
 if (VAR_10) {
  if (FUNC_10(VAR_12) < 0) {
   if (VAR_9)
    FUNC_2(VAR_11);
   else if (VAR_8->in)
    FUNC_1(VAR_8->in);
   return FUNC_4("cannot create pipe");
  }
  VAR_8->out = VAR_12[0];
 }

 if (VAR_9)
  VAR_13 = VAR_11[0];
 else if (VAR_8->in)
  VAR_13 = VAR_8->in;
 else
  VAR_13 = -1;

 if (VAR_10)
  VAR_14 = VAR_12[1];
 else if (VAR_8->out)
  VAR_14 = VAR_8->out;
 else
  VAR_14 = -1;
 if (!VAR_5) {




  VAR_5 = 1;
  VAR_4 = FUNC_13();
  FUNC_12(&VAR_2, ((void*)0));
  FUNC_12(&VAR_0, ((void*)0));
  FUNC_16(VAR_3);
  FUNC_15(VAR_1);
 }

 if (VAR_13 >= 0)
  FUNC_14(VAR_13);
 if (VAR_14 >= 0)
  FUNC_14(VAR_14);
 VAR_8->proc_in = VAR_13;
 VAR_8->proc_out = VAR_14;
 {
  int VAR_15 = FUNC_11(&VAR_8->tid, ((void*)0), VAR_7, VAR_8);
  if (VAR_15) {
   FUNC_3(FUNC_0("cannot create async thread: %s"), FUNC_17(VAR_15));
   goto error;
  }
 }

 return 0;

error:
 if (VAR_9)
  FUNC_2(VAR_11);
 else if (VAR_8->in)
  FUNC_1(VAR_8->in);

 if (VAR_10)
  FUNC_2(VAR_12);
 else if (VAR_8->out)
  FUNC_1(VAR_8->out);
 return -1;
}
